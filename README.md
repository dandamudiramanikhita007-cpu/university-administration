# university-administration
🎓 University Management System (Faculty Management)


📌 1. Project Title

University Management System using Linked List in C


team members

1. nikitha
2. trigun

📌 2. Problem Statement

Managing faculty records manually in a university is time-consuming and error-prone.
There is a need for a system that can:

Store faculty details efficiently
Allow easy addition, modification, and deletion of records
Provide quick access to faculty information

This project aims to develop a menu-driven system using data structures to handle faculty data dynamically.

📌 3. Real-World Application
University administration systems
College management software
HR systems for employee record management
Faculty database management



📌 4. Data Structure Used
🔹 Linked List

A singly linked list is used to store faculty records.

👉 Why Linked List?
Dynamic memory allocation (no fixed size)
Efficient insertion and deletion
Better than arrays for frequent updates



📌 5. System Design
🔸 Structure Definition:
struct Faculty {
    int id;
    char name[50];
    char department[50];
    char subject[50];
    struct Faculty* next;
};
🔸 Components:
Head Pointer → Points to first faculty node
Nodes → Store faculty details
Next Pointer → Links nodes together
🔸 Operations:
Add Faculty
Display Faculty
Update Faculty
Delete Faculty



📌 6. Algorithm
🔹 Add Faculty
Create a new node using malloc
Enter faculty details
Insert node at the end of the list
🔹 Display Faculty
Start from head
Traverse until NULL
Print each node’s data
🔹 Update Faculty
Input faculty ID
Traverse list to find matching ID
Update details
🔹 Delete Faculty
Input faculty ID
Search for node
Adjust links (previous → next)
Free memory

📌 7. Implementation
Language: C
Concepts Used:
struct
Pointers
Dynamic Memory Allocation (malloc, free)
Functions (modular programming)
Menu-driven program



📌 8. Demo Output
--- University Management System ---
1. Add Faculty
2. Display Faculty
3. Update Faculty
4. Delete Faculty
5. Exit

Enter your choice: 1

Enter Faculty ID: 101
Enter Name: Ravi
Enter Department: CSE
Enter Subject: DataStructures

Faculty Added Successfully!

Enter your choice: 2

Faculty List:
ID: 101 | Name: Ravi | Dept: CSE | Subject: DataStructures
<img width="724" height="771" alt="Screenshot 2026-04-03 141739" src="https://github.com/user-attachments/assets/ff378c71-83b1-42a3-ba89-d8a500b31a72" />
<img width="778" height="694" alt="Screenshot 2026-04-03 141801" src="https://github.com/user-attachments/assets/8422b231-177e-4314-8eaf-12a6790a569b" />
<img width="779" height="698" alt="Screenshot 2026-04-03 141830" src="https://github.com/user-attachments/assets/b93d884a-9771-4364-b527-e38ee970fe87" />
<img width="707" height="766" alt="Screenshot 2026-04-03 141929" src="https://github.com/user-attachments/assets/90dbc205-d22b-4002-91c5-d22c117c8302" />
<img width="737" height="772" alt="Screenshot 2026-04-03 141945" src="https://github.com/user-attachments/assets/f4846a75-b1eb-4439-bfb0-0a3bb83887ab" />
<img width="872" height="933" alt="Screenshot 2026-04-03 142017" src="https://github.com/user-attachments/assets/e7896a09-1ecd-443a-9a55-f92f99da6e24" />

📌 9. Conclusion

The University Management System using linked list:

Efficiently manages faculty records
Supports all CRUD operations
Uses dynamic memory for flexibility
Demonstrates real-world use of data structures

This project provides a strong foundation for building advanced systems like:

Student management
Course allocation
Full university ERP systems
