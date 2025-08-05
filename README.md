# Pointers-Basics-in-Cpp

** Name**: Varnika Maurya  
**PRN**: 24070123160  
**Experiment No**: 9  
**File Name**: `l9.cpp`

---

## 📚 Objective
To understand the concept of pointers in C++ by:
- Declaring and initializing a pointer.
- Displaying the value and address of a variable.
- Displaying the value stored in a pointer.
- Using the dereference operator to access the value stored at the pointer location.

---

## 📝 Description
This program demonstrates:
- How a pointer holds the address of a variable.
- How to access the value stored at a particular address using a pointer.
- Basic usage of the `&` (address-of) and `*` (dereference) operators.

---

## 📌 Code Summary
```cpp
int a = 10;                // Integer variable
int *aptr = &a;            // Pointer to the integer variable

cout << a;                 // Prints value of a
cout << &a;                // Prints address of a
cout << aptr;              // Prints value of aptr (address of a)
cout << *aptr;             // Prints value pointed to by aptr (value of a)
```

Optional lines (commented out in code) include:
- Displaying address of the pointer
- Sizes of variables and pointers using `sizeof()` operator

---

## ⚙️ How to Compile and Run
```bash
g++ l9.cpp -o l9      # Compiles the code
./l9                  # Runs the compiled program
```

---

## 💻 Sample Output
```
Value of a: 10  
Address of a: 0x60ff08  
Value of aptr: 0x60ff08  
Value pointed to by aptr: 10  
```

---

## 📌 Key Concepts Covered
- Pointers
- Address-of operator `&`
- Dereference operator `*`
- Pointer and data type sizes (if uncommented)

---

## ✅ Conclusion
This experiment helps reinforce understanding of pointer fundamentals in C++. It lays the groundwork for dynamic memory allocation and pointer arithmetic in future programs.
