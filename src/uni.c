#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Faculty
struct Faculty {
    int id;
    char name[50];
    char department[50];
    char designation[50];
    float salary;
    struct Faculty* next;
};

struct Faculty* head = NULL;

// CREATE - Add Faculty
void addFaculty() {
    struct Faculty* newNode = (struct Faculty*)malloc(sizeof(struct Faculty));

    printf("Enter Faculty ID: ");
    scanf("%d", &newNode->id);

    printf("Enter Name: ");
    scanf("%s", newNode->name);

    printf("Enter Department: ");
    scanf("%s", newNode->department);

    printf("Enter Designation: ");
    scanf("%s", newNode->designation);

    printf("Enter Salary: ");
    scanf("%f", &newNode->salary);

    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Faculty* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    printf("Faculty added successfully!\n");
}

// READ - Display Faculty
void displayFaculty() {
    if (head == NULL) {
        printf("No faculty records found!\n");
        return;
    }

    struct Faculty* temp = head;

    printf("\nID\tName\tDept\tDesignation\tSalary\n");
    while (temp != NULL) {
        printf("%d\t%s\t%s\t%s\t%.2f\n",
               temp->id, temp->name, temp->department,
               temp->designation, temp->salary);
        temp = temp->next;
    }
}

// SEARCH Faculty
void searchFaculty() {
    int id;
    printf("Enter Faculty ID to search: ");
    scanf("%d", &id);

    struct Faculty* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("Found: %d %s %s %s %.2f\n",
                   temp->id, temp->name,
                   temp->department, temp->designation,
                   temp->salary);
            return;
        }
        temp = temp->next;
    }

    printf("Faculty not found!\n");
}

// UPDATE Faculty
void updateFaculty() {
    int id;
    printf("Enter Faculty ID to update: ");
    scanf("%d", &id);

    struct Faculty* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("Enter new Name: ");
            scanf("%s", temp->name);

            printf("Enter new Department: ");
            scanf("%s", temp->department);

            printf("Enter new Designation: ");
            scanf("%s", temp->designation);

            printf("Enter new Salary: ");
            scanf("%f", &temp->salary);

            printf("Faculty updated successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf("Faculty not found!\n");
}

// DELETE Faculty
void deleteFaculty() {
    int id;
    printf("Enter Faculty ID to delete: ");
    scanf("%d", &id);

    struct Faculty *temp = head, *prev = NULL;

    // If head node
    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Faculty deleted successfully!\n");
        return;
    }

    // Search node
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Faculty not found!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Faculty deleted successfully!\n");
}

// MAIN MENU
int main() {
    int choice;

    while (1) {
        printf("\n--- Faculty Management System ---\n");
        printf("1. Add Faculty\n");
        printf("2. Delete Faculty\n");
        printf("3. Update Faculty\n");
        printf("4. Search Faculty\n");
        printf("5. Display Faculty\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addFaculty(); break;
            case 2: deleteFaculty(); break;
            case 3: updateFaculty(); break;
            case 4: searchFaculty(); break;
            case 5: displayFaculty(); break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
