*This project has been created as part of the 42 curriculum by Luconsta*

# push_swap

**push_swap is an algorithmic sorting project from the 42 curriculum. The goal is to sort a stack of integers in ascending order using the smallest possible number of operations, while respecting a strict and limited set of stack operations.**

The program manipulates two stacks:

Stack a: initially contains a list of unique integers (positive and/or negative).

Stack b: initially empty.

Only predefined operations (swap, push, rotate, reverse rotate) are allowed to move and reorder elements between the two stacks. The challenge lies not only in sorting correctly, but in doing so efficiently, minimizing the total number of operations.

This project emphasizes:

Algorithmic optimization

Data structure manipulation (stacks)

Careful handling of edge cases and errors

Writing clean, efficient C code under strict constraints

## **Rules & Allowed Operations**

You are allowed to use the following operations:

*sa*: swap the first two elements of stack a

*sb*: swap the first two elements of stack b

*ss*: sa and sb simultaneously

*pa*: push the top element of stack b to stack a

*pb*: push the top element of stack a to stack b

*ra*: rotate stack a upwards

*rb*: rotate stack b upwards

*rr*: ra and rb simultaneously

*rra*: reverse rotate stack a

*rrb*: reverse rotate stack b

*rrr*: rra and rrb simultaneously*

If an operation cannot be performed (e.g., stack too small or empty), it does nothing.

## Program Requirements

Program name: push_swap

Input: a list of integers passed as arguments (first argument is the top of stack a)

Output: the shortest possible sequence of operations to sort stack a

Each instruction must be printed on its own line (\n)

No output if no arguments are provided

On error, print Error followed by a newline to stderr

Errors include:

Non-integer arguments

Integer overflow / underflow

Duplicate values

Constraints

Global variables are forbidden

Only allowed functions:

read, write, malloc, free, exit

ft_printf (or equivalent)

Libft is authorized

A valid Makefile must be provided (no unnecessary relinking)


## Instructions
### Compilation

Clone the repository and compile the project using:

***make***

This will generate the push_swap executable.

Available Makefile rules:

***make or make all***

***make clean***

***make fclean***

***make re***

Execution

Run the program by passing a list of integers as arguments:

**./push_swap 2 1 3 6 5 8**

Example output:

**sa**
**pb**
**pb**
**pb**
**sa**
**pa**
**pa**
**pa**

If the input is invalid:

**./push_swap 0 one 2 3**

Output:

**Error**



## Resources
### References

42 Intranet – push_swap subject & checker

### AI Usage Disclosure

AI tools were used responsibly during this project for:

Drafting documentation (README structure and wording)

### All core logic, algorithms, and C source code were designed, implemented, and tested by the student in accordance with 42 rules.
