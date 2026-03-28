# Mini-Programmer-Management-System
# 🚀 Programmer Management System (C++)

A simple yet powerful console-based **Employee Management System** built in C++ using Object-Oriented Programming concepts.  
This project demonstrates real-world implementation of **single-level inheritance**, encapsulation, and basic authentication.

---

## 📌 Project Overview

This system allows you to:

- Add multiple programmers (employees)  
- Store their personal and professional details  
- Calculate salary based on working hours  
- Track experience based on dates  
- Secure login system with limited attempts  
- Display structured employee profiles  

---

## 🧠 Concepts Used

This mini project is designed to strengthen core C++ OOP concepts:

- ✅ Classes & Objects  
- ✅ Encapsulation (private/protected/public members)  
- ✅ Single-Level Inheritance  
- ✅ Function Overloading (logical separation of tasks)  
- ✅ Static Data Members  
- ✅ Basic Authentication Logic  
- ✅ Date-based Experience Calculation  

---

## 🏗️ Inheritance Structure

We used **Single-Level Inheritance** in this project:

### 🔹 employee (Base Class)

Contains:
- Personal info (name, ID, email)  
- Salary calculation  
- Experience tracking  
- Login system  

### 🔹 programmer (Derived Class)

Extends:
- Programming language  
- Role (e.g., frontend, backend)  

🔒 **Inheritance Type:** Private Inheritance  

---

## 🔐 Features

### 👤 Employee Setup
- Name, ID, working hours  
- Salary per hour  
- Email & password (with validation)  

### 💰 Salary Calculation
- Daily Salary = hours × pay/hour  
- Monthly Salary = daily × 30  

### 📅 Experience System
- Auto-calculated from joining date to current date  

**Rating Levels:**
- ⭐ Senior (5+ years)  
- ⭐ Associate (3–5 years)  
- ⭐ Newcomer (1–3 years)  

### 🔑 Login System
- Email & password authentication  
- Maximum 3 attempts  
- Access control before showing data  

---

## 🖥️ Sample Workflow

1. Enter number of programmers  
2. Input details for each employee  
3. Login for each employee  
4. If login successful → display profile  
5. Otherwise → access denied  

---
