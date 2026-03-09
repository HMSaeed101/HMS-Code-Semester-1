1. Pointer and Array Manipulation

Write a C program to read 10 integers into an array using pointers. Then, reverse the array using only pointer arithmetic (no array indexing) and print the reversed array.

Key Focus: Array to pointer decay, pointer arithmetic, dereferencing.

2. Pointer to Pointer (Double Pointers)

Write a function `void swapStrings(char str1, char str2)` that swaps the addresses of two strings. In the main function, declare two strings, call the function, and print both strings after swapping.

Key Focus: Double pointers, function call by reference, memory addresses.

3. Pointer Arithmetic and Memory Access


Predict the output of the following code:

```c
#include <stdio.h>
int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int *p = arr;
    printf("%d ", *p + 3);
    printf("%d ", *(p+2));
    printf("%d ", *(p+4) - *(p+1));
    return 0;
}
```

Also, explain step by step how each value is computed using pointer arithmetic.

Key Focus: Pointer movement, dereferencing, addition/subtraction with pointers.

4. Pointers with Functions


Write a function `int findMax(int *arr, int n)` that returns the maximum value of an array passed using a pointer. The main function should read `n` integers, call the function, and print the maximum value.

Key Focus: Passing arrays to functions via pointers, dereferencing, returning values.

5. Dynamic Memory Allocation

Write a program that:

1. Reads an integer `n` from the user.
2. Dynamically allocates memory for an array of `n` integers.
3. Reads `n` values into the array.
4. Doubles the size of the array using `realloc` and fills the new elements with `0`.
5. Prints all elements of the new array.
6. Frees the memory.

Key Focus: `malloc`, `realloc`, `free`, pointer arithmetic with dynamic arrays.

6. Structures and Pointers

Define a structure `Student` with fields `name` (string of 20 chars) and `marks` (int).

1. Declare a pointer to `Student` and dynamically allocate memory for 3 students.
2. Read the names and marks of 3 students.
3. Print the student with the highest marks using pointer notation (`->`).
4. Free the memory.

Key Focus: Struct pointers, dynamic memory, `->` operator.

7. Pointer Logic / Multiple Concepts Combined

Write a program that:

1. Reads an integer `n` (number of students).
2. Dynamically allocates memory for `n` student structures with `name` and `marks`.
3. Reads the students’ details.
4. Calculates the average marks using a function that takes a pointer to the array.
5. Prints the names of students who scored above average.
6. Frees all allocated memory.

Key Focus: Dynamic memory, structures, arrays of pointers, pointer arithmetic, functions with pointers, logic combination.