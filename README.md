# 🎯 OOP in C++ — From Real Life to Code

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](./LICENSE)
[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-00599C.svg?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Status: Active](https://img.shields.io/badge/Status-Active-brightgreen.svg)]()
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-blue.svg)](./CONTRIBUTING.md)

> A beginner-friendly, concept-first guide to **Object Oriented Programming (OOP) in C++** — explained the way you actually live it, then translated into code. No jargon without a real-world anchor.

---

## 📖 Table of Contents

- [About](#-about)
- [Why This Repo](#-why-this-repo)
- [Topics Covered](#-topics-covered)
- [Folder Structure](#-folder-structure)
- [Getting Started](#-getting-started)
- [How to Use This Repo](#-how-to-use-this-repo)
- [Concept Map](#-concept-map)
- [Example Snippet](#-example-snippet)
- [Webpage](#-webpage)
- [Contributing](#-contributing)
- [License](#-license)
- [Author](#-author)

---

## 🧠 About

This repository is a **learning path** for Object Oriented Programming in C++. Instead of starting with syntax, it starts with **life**: every OOP concept is first introduced as something you already do every day (driving a car, using a bank account, inheriting traits), and only then is it written in C++.

Each topic lives in its own folder where you can keep your notes, diagrams, and code experiments as you learn.

---

## 💡 Why This Repo

- **Concept → Code**: every idea is anchored to a real-world analogy before any syntax appears.
- **One concept per folder**: no mixing; you always know *what* you are learning.
- **Hands-on**: every folder is a sandbox for your own notes and experiments.
- **Beginner safe**: progressive difficulty from "OOP in life" to advanced miscellaneous concepts.
- **Webpage included**: a visual, interactive companion site lives in `docs/index.html`.

---

## 📚 Topics Covered

| # | Topic | What You Learn |
|---|-------|----------------|
| 01 | OOPs in Life | Real-world analogies: objects, classes, state & behavior |
| 02 | How to create objects in C++ | Classes, constructors, stack vs heap, `new`/`delete` |
| 03 | Encapsulation in C++ | Data hiding, access specifiers, getters/setters |
| 04 | Implementation inheritance in C++ | Base/derived, `is-a`, access modes, virtual functions |
| 05 | Polymorphism in C++ | Compile-time & run-time polymorphism |
| 06 | Abstraction in C++ | Abstract classes, interfaces, pure virtual functions |
| 07 | Miscellaneous Concepts | `static`, `friend`, operator overloading, copy ctor, destructor, `this` |

---

## 🗂️ Folder Structure

```
oop-s/
├── docs/
│   └── index.html                            # Companion webpage
├── README.md
├── LICENSE
├── CONTRIBUTING.md
└── .gitignore
```

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler: `g++` (GCC), `clang++`, or MSVC
- (Optional) Git

### Compile & Run Your Own Example

```bash
# From the repo root (example)
g++ your_example.cpp -o your_example && ./your_example
```

On Windows (PowerShell):

```powershell
g++ your_example.cpp -o your_example.exe; .\your_example.exe
```

---

## 🧭 How to Use This Repo

1. Read the topics in order (01 → 07) on the webpage.
2. Study each topic's explanation and code snippet.
3. Try the snippets yourself in a C++ compiler.
4. Modify values, break things, observe — that's how it sticks.
5. Visit the webpage for a visual summary.

---

## 🗺️ Concept Map

```
                  ┌──────────────┐
                  │   Real Life  │
                  └──────┬───────┘
                         │
        ┌────────────────┼────────────────┐
        │                │                │
   ┌────▼────┐     ┌─────▼─────┐    ┌────▼────┐
   │  Class  │     │  Object   │    │ State & │
   │(blueprint)    │(instance) │    │Behavior │
   └────┬────┘     └───────────┘    └─────────┘
        │
   ┌────┴────────────────────────────────────┐
   │                                         │
 Encapsulation ──► Inheritance ──► Polymorphism ──► Abstraction
   │                                         │
   └──────────── Miscellaneous (static, friend, operators, …)
```

---

## 💻 Example Snippet

```cpp
class BankAccount {
private:
    double balance;          // hidden state (encapsulation)
public:
    BankAccount(double b) : balance(b) {}
    void deposit(double amt) { balance += amt; }
    double getBalance() const { return balance; }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    // acc.balance = 0;  // ❌ not allowed — encapsulated!
    std::cout << acc.getBalance(); // 1500
}
```

---

## 🌐 Webpage

A visual companion site is included: open `docs/index.html` in any browser. It summarizes every topic with diagrams and code highlights.

---

## 🤝 Contributing

Contributions are welcome! Please read CONTRIBUTING.md and open a PR.

1. Fork the repo
2. Create a feature branch (`git checkout -b feat/topic`)
3. Commit your changes
4. Push and open a Pull Request

---

## 📄 License

This project is licensed under the **MIT License** — see LICENSE for details.

---

## 👤 Author

**Shubham Mourya** — [@shubham17290](https://github.com/shubham17290)

> _"Code is just life, written in syntax."_

---

⭐ If this helped you, give the repo a star!