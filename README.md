# C++ - Module 00
Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic stuff

## Summary
This document contains the exercises of Module 00 from C++ modules.

## Contents
I. [Introduction](#introduction)  
II. [General rules](#general-rules)  
III. [Exercise 00: Megaphone](#exercise-00-megaphone)  
IV. [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)  
V. [Exercise 02: The Job Of Your Dreams](#exercise-02-the-job-of-your-dreams)  
VI. [Submission and peer-evaluation](#submission-and-peer-evaluation)
 **Exercise 00:** [ex00](ex00)

---

## Chapter I: Introduction
C++ is a powerful programming language widely used in enterprise software development. This module introduces foundational concepts such as namespaces, classes, member functions, and more. These are essential for building robust and scalable applications.

## Chapter II: General rules

### Compiling
- **Compile your code**: This process translates your code into machine-readable instructions. Using `-Wall -Wextra -Werror` flags ensures your code is free from common errors.
- **Compatibility**: Ensuring compatibility with `-std=c++98` allows your code to run on older systems without issues.

### Formatting and naming conventions
- **Organized structure**: Exercises are organized into directories (`ex00`, `ex01`, ..., `exn`) for clarity and structure.
- **Naming conventions**: Following UpperCamelCase for class names (`ClassName.hpp/ClassName.h`, `ClassName.cpp`) maintains consistency and readability.
- **Output standards**: Outputs must end with a new-line character (`\n`) and display results clearly to the standard output.

### Allowed/Forbidden
- **Standard Library**: Utilize the C++ Standard Library extensively for efficient and modern coding practices, avoiding older C functions (`*printf()`, `*alloc()`, `free()`).
- **Namespace and Friend**: Unless explicitly allowed, refrain from using `using namespace <ns_name>` and `friend` keywords to promote encapsulation and maintainability.
- **STL Usage**: Limit STL usage until Modules 08 and 09, focusing on foundational programming techniques initially.

### Design Requirements
- **Memory Management**: Implementing proper memory management with `new` to avoid memory leaks is crucial for stable and reliable software.
- **Orthodox Canonical Form**: Structuring classes in the Orthodox Canonical Form (from Module 02 to 09) ensures consistency and readability across your codebase.
- **Header Files**: Ensuring headers are self-contained with include guards prevents issues related to multiple inclusions and maintains code integrity.

### Additional Notes
- **Flexibility**: Supplementary files can be added to enhance code organization, promoting clarity and ease of maintenance.
- **Preparation**: Thoroughly understanding each module's requirements before beginning ensures tasks are completed efficiently and correctly.
- **Coding Clarity**: While no specific coding style is enforced, writing clear and understandable code is essential for effective peer evaluation and teamwork.

---

## Chapter III: Exercise 00: Megaphone
**Directory:** `ex00/`  
**Files:** `Makefile`, `megaphone.cpp`  
**Forbidden Functions:** None

### Importance
Exercise 00 introduces basic string manipulation and input handling techniques. Converting input text to uppercase prepares you for tasks like data normalization and formatting in real-world applications. This exercise emphasizes the importance of precise input/output handling and fundamental string operations, which are foundational for any software development role.

---

## Chapter IV: Exercise 01: My Awesome PhoneBook
**Directory:** `ex01/`  
**Files:** `Makefile`, `*.cpp`, `*.{h, hpp}`  
**Forbidden Functions:** None

### Importance
Building a phonebook application using classes (`PhoneBook` and `Contact`) demonstrates core object-oriented programming (OOP) principles. It highlights the practical use of classes for data management and organization, essential for developing scalable and maintainable software solutions. This exercise prepares you for handling complex data structures and implementing user-friendly applications.

---

## Chapter V: Exercise 02: The Job Of Your Dreams
**Directory:** `ex02/`  
**Files:** `Makefile`, `Account.cpp`, `Account.hpp`, `tests.cpp`  
**Forbidden Functions:** None

### Importance
Recreating the `Account.cpp` file from provided header (`Account.hpp`) and log file simulates real-world scenarios where code recovery and integration are critical. This exercise enhances your skills in file management, debugging, and ensuring code accuracy against existing specifications. It emphasizes adherence to coding standards and practices essential in professional software development environments.

---

## Chapter VI: Submission and peer-evaluation
Ensure all required files are in your Git repository for evaluation during defense. Effective documentation and adherence to coding standards are crucial for peer evaluation and showcasing your coding proficiency.

---

This document provides comprehensive insights into the importance of each exercise, bridging theoretical learning with practical application in enterprise-level software development. Understanding these concepts prepares you for real-world coding challenges and fosters professional growth in the field of C++ programming.
