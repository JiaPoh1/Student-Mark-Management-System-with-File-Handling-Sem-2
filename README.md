# 📊 Student Mark Management System (C++)

📌 Description

This project is a console-based Student Mark Management System developed in C++. It allows users to record, store, and manage students’ academic performance using file handling.

Users can input student details such as first name, last name, and marks for multiple subjects (HCI, OSS, CAL, PRO, and SAD). The system automatically calculates and assigns grades (A–E) based on predefined grading criteria.

All records are saved in a text file (studentdata.txt), ensuring that data is preserved even after the program is closed.

## ✨ Features
- ➕ Add student marks and automatically generate grades
- 💾 Store data using file handling (fstream)
- 📄 Display all student records in a formatted table
- 🔍 Search student by ID or name
- ✅ Input validation (marks must be between 0–100)

## 🛠️ Technologies Used
- C++
- File Handling (ifstream, ofstream)
- Structures (struct)
- Arrays

## ▶️ How to Run

Clone this repository:
```
git clone https://github.com/JiaPoh1/Student-Mark-Management-System-with-File-Handling-Sem-2.git
Open the project in your C++ compiler (e.g., Visual Studio / Code::Blocks)

Compile and run the program:

g++ main.cpp -o program
./program
```
## 🖥️ Sample Output
========================================
    STUDENT MARK SYSTEM

1. Add Mark
2. Display Record
3. Search Record
4. Exit

Example (Add Mark):
```text
Please enter your name (first name, last name): Alex Tann

Please enter your marks for subject HCI : 55

Please enter your marks for subject OSS : 62

Please enter your marks for subject CAL : 75

Please enter your marks for subject PRO : 86

Please enter your marks for subject SAD : 90

Type any letter and press enter to continue. y
```

Example (Display Record):
```text
ID      NAME            HCI     OSS     CAL     PRO     SAD

0       Acap Mochi      50(C)   60(B)   30(E)   70(B)   80(A)

1       Jien Hue        60(B)   70(B)   80(A)   90(A)   20(E)

2       Drew Miller     31(E)   73(B)   20(E)   59(C)   40(D)

3       Jamie Brown     81(A)   74(B)   92(A)   70(B)   52(C)

4       Morgan Davis    50(C)   45(D)   40(D)   27(E)   24(E)

5       Taylor Johnson  98(A)   20(E)   46(D)   80(A)   27(E)

6       Casey Jones     93(A)   46(D)   47(C)   22(E)   66(B)

7       Taylor Clark    73(B)   72(B)   71(B)   33(E)   89(A)

8       Jamie Miller    36(E)   27(E)   21(E)   78(A)   87(A)

9       Quinn Williams  89(A)   31(E)   73(B)   97(A)   42(D)

10      Alex Miller     92(A)   34(E)   47(C)   22(E)   22(E)
```

Example (Search Record):
```text
Enter the ID/NAME of the person you want to search: 3

ID      NAME            HCI     OSS     CAL     PRO     SAD

3       Jamie Brown     81(A)   74(B)   92(A)   70(B)   52(C)

Type any letter and press enter to continue. y
```
```text
Enter the ID/NAME of the person you want to search: Riley

ID      NAME            HCI     OSS     CAL     PRO     SAD

17      Riley Johnson   72(B)   71(B)   25(E)   20(E)   60(B)

35      Riley Williams  56(C)   91(A)   73(B)   29(E)   53(C)

51      Riley Lee       87(A)   20(E)   59(C)   54(C)   73(B)

67      Riley Clark     74(B)   20(E)   35(E)   82(A)   72(B)
```


...

## 📁 File Structure
```
📦 Student-Mark-System
├── main.cpp
├── studentdata.txt
└── README.md
 ```
## ⚠️ Notes
- Ensure studentdata.txt exists in the same directory as the program
- The program runs in the console (no GUI)
