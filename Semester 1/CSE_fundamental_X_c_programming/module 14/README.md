# 🚀 C Functions - Ultimate Guide

## 📌 Table of Contents
- [Introduction](#-introduction)
- [Syntax](#-syntax)
- [Types](#-types)
- [Examples](#-examples)
- [Best Practices](#-best-practices)
- [Cheat Sheet](#-cheat-sheet)

## 🌟 Introduction
Functions are reusable code blocks that:
1. Perform specific tasks
2. Make code modular
3. Reduce repetition
4. Improve readability

## 📝 Syntax
```c
return_type name(parameters) {
    // Code
    return value; // Omit if void
}

Key Parts:
Part	Description	Example
Return Type	Data type of output (void for none)	int, float
Name	Unique identifier	calculate_area
Parameters	Input variables (optional)	(int radius)
🔢 Types
1. With Return + Parameters
c

int add(int a, int b) {
    return a + b;
}

2. With Return Only
c

float get_pi() {
    return 3.14159;
}

3. With Parameters Only
c

void print_hello(char name[]) {
    printf("Hello %s!", name);
}

4. No Return/Parameters
c

void beep() {
    printf("\a"); // System beep
}

💻 Examples
Complete Program
c

#include <stdio.h>

// Declaration
int cube(int num);

int main() {
    printf("Cube of 3: %d", cube(3));
    return 0;
}

// Definition
int cube(int num) {
    return num * num * num;
}

Output: Cube of 3: 27
🏆 Best Practices

    Naming: Use verbs (e.g., calculate_total())

    Length: Keep under 30 lines

    Parameters: Max 3-4 inputs

    Comments: Explain complex logic

    Error Handling: Validate inputs

    Consistency: Same return type for similar functions

📊 Cheat Sheet
Declaration Rules
c

// Before main()
int function(int a, float b); 

// After main()
int function(int a, float b) {
    return a + (int)b;
}

Return Types
Type	When to Use
int	Most calculations
float	Decimal operations
void	When no return needed
char*	String manipulations
Common Pitfalls

    Forgetting to declare functions

    Missing return statements

    Parameter type mismatches

    Unused return values