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
- 📚 Pagination for large datasets
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
### 🖥️ Sample Output
========================================
    STUDENT MARK SYSTEM

1. Add Mark
2. Display Record
3. Search Record
4. Exit

Example:

Please enter your name (first name, last name): John Doe

Please enter your marks for subject HCI : 80

Please enter your marks for subject OSS : 65
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
- Works best on Windows (uses system("cls") for screen clearing)
## 🚀 Future Improvements
- Add GUI (e.g., using Qt or C#)
- Improve search functionality (partial match, case-insensitive)
- Use database instead of text file
- Add edit/delete student records
