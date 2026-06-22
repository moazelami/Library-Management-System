# 📚 Library Management System

A simple and efficient **Library Management System** built with **C++** using **Object-Oriented Programming (OOP)** principles and fundamental **Data Structures**.

This project allows users to manage books, users, and borrowing operations through a console-based interface while demonstrating practical usage of vectors, queues, stacks, searching, sorting, and file handling.

---

## ✨ Features

### 👤 User Management

* Register User
* Login User
* Logout
* View Profile
* Change Password

### 📖 Book Management

* Add Book
* Remove Book
* Update Book Information
* Search Book by ID
* Search Book by Title
* Display All Books

### 🔄 Borrowing System

* Borrow Book
* Return Book
* View Borrowed Books
* Check Book Availability

### 🛠️ Admin Panel

* Add User
* Delete User
* View All Users
* View Borrow History

### 🚀 Extra Features

* Sort Books by Title
* Sort Books by Author
* Waiting List using Queue
* Undo Last Operation using Stack
* Library Statistics

---

## 🏗️ Project Structure

```text
LibraryManagementSystem/
│
├── main.cpp
│
├── models/
│   ├── User.h
│   ├── Book.h
│   └── BorrowRecord.h
│
├── managers/
│   ├── UserManager.h
│   ├── BookManager.h
│   ├── BorrowManager.h
│   └── AdminManager.h
│
├── data/
│   ├── users.txt
│   ├── books.txt
│   └── history.txt
│
└── README.md
```

---

## 🧠 Concepts Used

* Object-Oriented Programming (OOP)
* Classes & Objects
* Encapsulation
* Vectors
* Queues
* Stacks
* Searching Algorithms
* Sorting Algorithms
* File Handling
* Modular Design

---

## ⚙️ Technologies

* C++
* STL (Vector, Queue, Stack)
* File Streams (fstream)

---

## 🚀 Getting Started

### Clone the repository

```bash
git clone https://github.com/your-username/LibraryManagementSystem.git
cd LibraryManagementSystem
```

### Compile

```bash
g++ main.cpp -o library
```

### Run

```bash
./library
```

---

## 📸 Sample Menu

```text
===== Library Management System =====

1. User Management
2. Book Management
3. Borrowing System
4. Admin Panel
5. Statistics
0. Exit
```

---

## 🎯 Learning Objectives

This project was built to practice:

* Real-world OOP design
* Data Structures implementation
* Console application architecture
* Clean code organization
* Problem-solving using C++

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome.

Feel free to fork the repository and submit a pull request.

---

## ⭐ Support

If you found this project useful, consider giving it a star on GitHub.

Happy Coding! 🚀
