# Data Structures and Algorithms in C

A comprehensive collection of **Data Structures and Algorithms** implementations in pure C. This repository is designed for learning and interview preparation, covering all fundamental DSA concepts with practical code examples.

---

## 📚 Table of Contents

1. [Overview](#overview)
2. [Repository Structure](#repository-structure)
3. [Data Structures](#data-structures)
4. [Algorithms](#algorithms)
5. [Getting Started](#getting-started)
6. [Compilation & Execution](#compilation--execution)
7. [Topics Covered](#topics-covered)
8. [Contributing](#contributing)
9. [License](#license)

---

## 🎯 Overview

This repository contains implementations of essential data structures and algorithms needed for:
- **Technical Interviews**
- **Competitive Programming**
- **Academic Learning**
- **Problem Solving**

All implementations are written in **C** with clear, commented code for better understanding.

---

## 📂 Repository Structure

```
DSA-Codes/
├── Arrays/
│   ├── array_ADT.c              # Array Abstract Data Type operations
│   └── insertion.c, deletion.c  # Basic array operations
│
├── Sorting/
│   ├── bubble_sort.c            # Bubble Sort (O(n²))
│   ├── insertion_sort.c         # Insertion Sort (O(n²))
│   ├── selection_sort.c         # Selection Sort (O(n²))
│   ├── mergeSort.c              # Merge Sort (O(n log n))
│   ├── quickSort.c              # Quick Sort (O(n log n))
│   └── countSort.c              # Count Sort (O(n+k))
│
├── Searching/
│   └── binary_search.c          # Binary Search (O(log n))
│
├── Stacks/
│   ├── stack_using_array.c      # Stack implementation using arrays
│   ├── stack_using_ll.c         # Stack implementation using linked lists
│   ├── stack_operatins.c        # Stack push/pop/peek operations
│   ├── stack_stackTopBotttom.c  # Stack top and bottom operations
│   └── peek_array_stack.c       # Peek operations on array-based stacks
│
├── Queues/
│   ├── Queue_opertions.c        # Queue basic operations
│   ├── circular_queue.c         # Circular Queue implementation
│   ├── double_ended_Queue.c     # Double-ended Queue (Deque)
│   └── queue_using_linked_list.c # Queue using linked lists
│
├── Linked Lists/
│   ├── linked_list_traversal.c     # Singly Linked List traversal
│   ├── linked_list_insertion.c     # Insertion in singly linked list
│   ├── deletion_linked_list.c      # Deletion from singly linked list
│   ├── doubly_ll.c                 # Doubly Linked List operations
│   └── circle_linked_list.c        # Circular Linked List operations
│
├── Applications/
│   ├── parenthesis_matching.c      # Parenthesis matching using stack
│   ├── different_paranthesis_match.c # Matching different bracket types
│   └── Notation_using_stack.c      # Infix/Postfix notation conversion
│
├── Trees/
│   └── linked_representation_binary_tree.c # Binary tree using linked list
│
└── README.md                       # This file
```

---

## 🏗️ Data Structures

### 1. **Arrays**
- Dynamic and static arrays
- Array Abstract Data Type (ADT)
- Insertion and deletion operations

### 2. **Linked Lists**
- **Singly Linked Lists**: Basic traversal, insertion, deletion
- **Doubly Linked Lists**: Bidirectional traversal
- **Circular Linked Lists**: Last node points to first node

### 3. **Stacks**
- Array-based implementation
- Linked list-based implementation
- LIFO (Last In First Out) principle
- Operations: Push, Pop, Peek

### 4. **Queues**
- Linear Queue
- **Circular Queue**: Optimal space utilization
- **Double-ended Queue (Deque)**: Insertion/deletion from both ends
- Queue using linked lists
- FIFO (First In First Out) principle

### 5. **Trees**
- **Binary Trees**: Linked representation
- Traversals (Inorder, Preorder, Postorder)

---

## ⚙️ Algorithms

### **Sorting Algorithms**

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|-----------|-----------|--------------|-----------|-------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✓ |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✓ |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ✗ |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✓ |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ✗ |
| Count Sort | O(n+k) | O(n+k) | O(n+k) | O(k) | ✓ |

### **Searching Algorithms**
- **Linear Search**: O(n)
- **Binary Search**: O(log n) - requires sorted array

### **Stack Applications**
- Parenthesis matching
- Expression conversion (Infix to Postfix)
- Function call management

---

## 🚀 Getting Started

### Prerequisites
- **C Compiler** (GCC recommended)
- Basic understanding of C programming
- Terminal/Command Prompt access

### Installation
```bash
# Clone the repository
git clone https://github.com/Souvik2857/DSA-Codes.git
cd DSA-Codes
```

---

## 📝 Compilation & Execution

### Compile a single file:
```bash
gcc -o program_name source_file.c
```

### Run the compiled program:
```bash
./program_name       # On Linux/Mac
program_name.exe     # On Windows
```

### Example:
```bash
gcc -o bubble_sort bubble_sort.c
./bubble_sort
```

---

## 📖 Topics Covered

### ✅ **Data Structures**
- [x] Arrays & ADT
- [x] Linked Lists (Singly, Doubly, Circular)
- [x] Stacks
- [x] Queues (Simple, Circular, Deque)
- [x] Binary Trees

### ✅ **Sorting Algorithms**
- [x] Bubble Sort
- [x] Insertion Sort
- [x] Selection Sort
- [x] Merge Sort
- [x] Quick Sort
- [x] Count Sort

### ✅ **Searching Algorithms**
- [x] Linear Search
- [x] Binary Search

### ✅ **Applications**
- [x] Parenthesis Matching
- [x] Expression Notation Conversion
- [x] Stack and Queue operations

---

## 💡 Learning Path

**Beginner → Intermediate → Advanced**

1. **Start with Arrays** - Understand basic memory management
2. **Learn Linked Lists** - Understand dynamic memory allocation
3. **Master Stacks & Queues** - Understand abstract data types
4. **Study Sorting** - Understand algorithm complexity
5. **Practice Searching** - Understand optimization techniques
6. **Explore Trees** - Understand hierarchical data structures

---

## 🤝 Contributing

Contributions are welcome! To contribute:

1. Fork the repository
2. Create a feature branch (git checkout -b feature/YourFeature)
3. Commit your changes (git commit -m 'Add YourFeature')
4. Push to the branch (git push origin feature/YourFeature)
5. Open a Pull Request

---

## 📜 License

This project is open source and available under the MIT License.

---

## 📞 Contact & Support

For questions or suggestions, feel free to open an issue or contact the repository owner.

---

**Happy Learning! 🎓**

> "*Every master was once a beginner. Practice makes perfect!*"