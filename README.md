# C++ Module 00: Introduction to C++ and Object-Oriented Programming

## Overview

Welcome to Module 00 of your C++ journey! This module aims to introduce you to the basics of C++ and Object-Oriented Programming (OOP). You will start with simple programs and progressively tackle more complex exercises. Throughout this module, you will learn about namespaces, classes, member functions, initialization lists, static members, constants, and other fundamental concepts.

## Contents

1. [Introduction](#introduction)
2. [General Rules](#general-rules)
3. [Exercise 00: Megaphone](#exercise-00-megaphone)
4. [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)
5. [Exercise 02: The Job of Your Dreams](#exercise-02-the-job-of-your-dreams)
6. [Submission and Peer-Evaluation](#submission-and-peer-evaluation)

## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, often referred to as "C with Classes." The goal of these modules is to introduce you to Object-Oriented Programming using C++. We will adhere to the C++98 standard to keep things simple and ensure compatibility.

## General Rules

### Compiling

- Compile your code with `c++` and the flags `-Wall -Wextra -Werror`.
- Your code should still compile if you add the flag `-std=c++98`.

### Formatting and Naming Conventions

- Exercise directories should be named `ex00`, `ex01`, ..., `exn`.
- Name your files, classes, functions, member functions, and attributes as required in the guidelines.
- Class names should be in UpperCamelCase format. Files containing class code should be named accordingly, e.g., `ClassName.hpp/ClassName.h`, `ClassName.cpp`, or `ClassName.tpp`.
- Every output message must end with a new-line character and be displayed to the standard output.

### Allowed/Forbidden

- Use almost everything from the standard library, but avoid C++11, Boost libraries, and functions like `*printf()`, `*alloc()`, and `free()`.
- The `using namespace <ns_name>` and `friend` keywords are forbidden unless explicitly stated otherwise.
- The STL (Standard Template Library) can only be used in Modules 08 and 09.

### Design Requirements

- Avoid memory leaks when allocating memory using `new`.
- From Module 02 to Module 09, design your classes in the Orthodox Canonical Form unless stated otherwise.
- Implementations in header files (except for function templates) result in a grade of 0.
- Ensure headers can be used independently and include guards to avoid double inclusion.

### Additional Notes

- Feel free to add additional files if needed, as long as the mandatory files are included.
- Read each module completely before starting.
- Use your brain and don’t be lazy.

## Exercise 00: Megaphone

**Directory:** `ex00/`  
**Files:** `Makefile, megaphone.cpp`  
**Forbidden Functions:** None

Write a program that converts input text to uppercase. The program should behave as follows:

$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```
