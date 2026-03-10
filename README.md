# 🔤 String Data Structure

![DSA](https://img.shields.io/badge/Data%20Structure-String-blue)
![Language](https://img.shields.io/badge/Language-C++-orange)
![Difficulty](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-green)

---

## 📖 Table of Contents

* [Introduction](#-introduction)
* [Basic Operations](#-basic-operations-on-strings)
* [String Representation](#-string-representation)
* [C++ Implementation](#-c-implementation)
* [Time Complexity](#-time-complexity)
* [Applications of Strings](#-applications-of-strings)
* [Advantages](#-advantages-of-strings)
* [Limitations](#-limitations)
* [Example Problems](#-example-problems-using-strings)
* [Author](#-author)

---

# 📌 Introduction

A **String** is a sequence of characters used to represent **textual data** in programming.

Characters may include:

* Letters (A–Z, a–z)
* Numbers (0–9)
* Symbols (@, #, $, etc.)
* Spaces

Example of a string:

```id="1y2qz0"
"Hello World"
```

In C++, strings can be handled using:

* **Character arrays**
* **`string` class from STL**

---

# 🧱 Basic Operations on Strings

| Operation     | Description                    |
| ------------- | ------------------------------ |
| Length        | Returns number of characters   |
| Concatenation | Combine two strings            |
| Comparison    | Compare two strings            |
| Substring     | Extract part of a string       |
| Find          | Search for a character or word |
| Reverse       | Reverse the string             |

---

# 📊 String Representation

Example string:

```id="c0v6yx"
HELLO
```

Memory representation:

```
Index : 0 1 2 3 4
Value : H E L L O
```

Each character is stored in **contiguous memory locations**.

---

# 💻 C++ Implementation

Example using the **C++ STL string class**

```cpp id="7xq0ta"
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello";

    cout << "String: " << str << endl;

    cout << "Length: " << str.length() << endl;

    str.append(" World");

    cout << "After Concatenation: " << str << endl;

    cout << "First Character: " << str[0] << endl;

    return 0;
}
```

---

# ⚙️ Time Complexity

| Operation        | Complexity |
| ---------------- | ---------- |
| Access character | O(1)       |
| Length           | O(1)       |
| Concatenation    | O(n)       |
| Substring        | O(n)       |
| Search           | O(n)       |

---

# 📚 Applications of Strings

Strings are widely used in **software development and algorithms**.

## 1️⃣ Text Processing

Used in applications like:

* Word processors
* Text editors
* Document processing

---

## 2️⃣ Pattern Matching

Searching patterns inside text.

Example algorithms:

* Naive pattern matching
* KMP algorithm
* Rabin-Karp algorithm

---

## 3️⃣ Data Validation

Used to validate inputs such as:

* Email addresses
* Phone numbers
* Passwords

---

## 4️⃣ Web Development

Strings are used for:

* URLs
* HTML
* JSON
* APIs

---

## 5️⃣ Natural Language Processing (NLP)

Strings are the foundation of:

* Chatbots
* Language translation
* Text classification

---

# 🚀 Advantages of Strings

✔ Easy to manipulate text data
✔ Efficient access using indexing
✔ Built-in library functions available
✔ Essential for many applications

---

# ⚠️ Limitations

❌ Large strings can consume more memory
❌ Some operations like concatenation may take **O(n)** time
❌ Character encoding issues may arise

---

# 📖 Example Problems Using Strings

Some common **DSA problems using strings**:

1️⃣ Reverse a String
2️⃣ Palindrome Check
3️⃣ Longest Substring Without Repeating Characters
4️⃣ Anagram Check
5️⃣ String Compression

---

# 👨‍💻 Author

**Prepared by:**

### MAJID TAMBOLI

🔗 GitHub:
https://github.com/majidtamboli45

📘 Created as part of **Data Structures and Algorithms (DSA) practice using C++**.
