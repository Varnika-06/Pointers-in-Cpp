# Pointers-Basics-in-Cpp

**Name**: Varnika Maurya  
**PRN**: 24070123160  
**Experiment No**: 9  
**Title**: Pointers Basics in C++

---

## Objective
To understand the concept of pointers in C++ by:
- Declaring and initializing a pointer.
- Displaying the value and address of a variable.
- Displaying the value stored in a pointer.
- Using the dereference operator to access the value stored at the pointer location.
- Pointer interaction with arrays.
- Modifying values using pointers.

---

## Algorithm: Understanding Pointers in C++  

Step1: Start  
Step 2: Declare an integer variable a and initialize it with a value (e.g., a = 10).  
Step 3: Declare a pointer variable aptr and assign it the address of a using the address-of operator &.  
Step 4: Display the following using cout:  
- Value of a
- Address of a (i.e., &a)
- Value of aptr (which should be same as &a)
- Value pointed to by aptr using the dereference operator *.
Step 5: Display:
- Address of the pointer variable aptr
- Size of a, aptr, and data types using sizeof().
Step 6: End

---

## Algorithm: Pointer Arithmetic

Step 1: Start  
Step 2: Declare integer `a` and initialize it.  
Step 3: Declare pointer `aptr` and store the address of `a`.  
Step 4: Print original address stored in `aptr`.  
Step 5: Increment the pointer using `aptr++`.  
Step 6: Print new address stored in `aptr`.  
Step 7: End

---

## Algorithm: Pointers with arrays and value modification

Step 1: Start  
Step 2: Declare integer `a` and pointer `aptr` pointing.  
Step 3: Modify value of `a` via `*aptr = 20`.  
Step 4: Declare array `arr[]= {10,20,30}`.  
Step 5: Declare pointer `ptr` to point to first element of `arr`.  
Step 6: Loop from `i=0` to `2`:  
 - Print value at `*ptr`.
 - Increment pointer to next element.
Step 7: End

---

## Conclusion
These programs help in understanding:
- How pointers reference memory locations.
- How values can be modified using pointers.
- How pointer arithmetic and array access work in C++.

This foundational knowledge is crucial for working with dynamic memory, data structures, and system-level programming.
