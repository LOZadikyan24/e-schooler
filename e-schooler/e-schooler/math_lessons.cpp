#include <iostream>
#include "utils.h"
using namespace std;

void lesson1() {
    clearScreen(); banner();
    cout << bold(yellow("\n  === LESSON 1 - What is a Quadratic Equation? ===\n\n"));
    cout <<
        "  A quadratic equation looks like this:\n"
        "\n"
        "        ax^2 + bx + c = 0\n"
        "\n"
        "  where a, b, c are numbers and a cannot be zero.\n"
        "\n"
        "  - a is the number in front of x^2\n"
        "  - b is the number in front of x\n"
        "  - c is just a plain number\n"
        "\n"
        "  Examples:\n"
        "    x^2 - 5x + 6 = 0      (a=1, b=-5, c=6)\n"
        "    2x^2 + 3x - 2 = 0     (a=2, b=3,  c=-2)\n"
        "    x^2 - 9 = 0           (a=1, b=0,  c=-9)\n"
        "\n"
        "  THE DISCRIMINANT\n"
        "  ----------------\n"
        "  D = b^2 - 4ac\n"
        "\n";
    cout << green("    D > 0  -->  two different solutions\n");
    cout << yellow("    D = 0  -->  exactly one solution\n");
    cout << red("    D < 0  -->  no real solutions\n");
    pressEnter();
}

void lesson2() {
    clearScreen(); banner();
    cout << bold(yellow("\n  === LESSON 2 - How to Solve Quadratic Equations ===\n\n"));
    cout <<
        "  METHOD 1: Factoring\n"
        "  -------------------\n"
        "  Find two numbers that multiply to c and add to b.\n"
        "\n"
        "  Example: x^2 - 5x + 6 = 0\n"
        "    Numbers that multiply to 6 and add to -5: -2 and -3\n"
        "    (x - 2)(x - 3) = 0\n"
        "    Answer: x = 2  or  x = 3\n"
        "\n"
        "  METHOD 2: Square Root\n"
        "  ---------------------\n"
        "  Use when there is no x term (b = 0).\n"
        "\n"
        "  Example: x^2 - 16 = 0\n"
        "    x^2 = 16\n"
        "    Answer: x = 4  or  x = -4\n"
        "\n"
        "  METHOD 3: Quadratic Formula\n"
        "  ---------------------------\n"
        "  Works for any quadratic equation.\n"
        "\n"
        "           -b +/- sqrt(b^2 - 4ac)\n"
        "    x =   -------------------------\n"
        "                    2a\n"
        "\n"
        "  Example: 2x^2 - 3x - 2 = 0\n"
        "    a=2, b=-3, c=-2\n"
        "    D = 9 + 16 = 25\n"
        "    x = (3 + 5) / 4 = 2   or   x = (3 - 5) / 4 = -0.5\n";
    pressEnter();
}

void lesson3() {
    clearScreen(); banner();
    cout << bold(yellow("\n  === LESSON 3 - Word Problems with Quadratics ===\n\n"));
    cout <<
        "  Quadratic equations appear in everyday problems.\n"
        "  The key steps are always the same:\n"
        "\n"
        "    1. Read the problem carefully.\n"
        "    2. Choose a variable (usually x).\n"
        "    3. Write an equation.\n"
        "    4. Solve the equation.\n"
        "    5. Check the answer makes sense.\n"
        "\n"
        "\n"
        "  EXAMPLE 1 - Area Problem\n"
        "  -------------------------\n"
        "  A rectangle has area 24 m^2.\n"
        "  The length is 2 m more than the width.\n"
        "  Find the width.\n"
        "\n"
        "  Let width = x, then length = x + 2\n"
        "  Area = x * (x + 2) = 24\n"
        "  x^2 + 2x - 24 = 0\n"
        "  (x + 6)(x - 4) = 0\n"
        "  x = -6 (not valid, width can't be negative)  or  x = 4\n"
        "  Answer: width = 4 m, length = 6 m\n"
        "\n"
        "\n"
        "  EXAMPLE 2 - Number Problem\n"
        "  ---------------------------\n"
        "  A number added to its square equals 12.\n"
        "  What is the number?\n"
        "\n"
        "  x + x^2 = 12\n"
        "  x^2 + x - 12 = 0\n"
        "  (x + 4)(x - 3) = 0\n"
        "  Answer: x = 3  or  x = -4  (both are valid here)\n"
        "\n";
    pressEnter();
}

void exercises() {
    clearScreen(); banner();
    cout << bold(yellow("\n  === PRACTICE EXERCISES ===\n\n"));
    cout <<
        "  Try to solve these yourself before looking at the answers!\n"
        "\n"
        "  EASY\n"
        "  ----\n"
        "  1.  x^2 - 4 = 0\n"
        "  2.  x^2 + 3x = 0\n"
        "  3.  x^2 - 7x + 12 = 0\n"
        "  4.  x^2 + 6x + 9 = 0\n"
        "\n"
        "  MEDIUM\n"
        "  ------\n"
        "  5.  2x^2 - 8 = 0\n"
        "  6.  x^2 - x - 6 = 0\n"
        "  7.  3x^2 + 6x = 0\n"
        "  8.  x^2 - 4x + 4 = 0\n"
        "\n"
        "  HARDER\n"
        "  ------\n"
        "  9.  2x^2 - 5x + 3 = 0\n"
        "  10. x^2 + 2x - 15 = 0\n"
        "\n";
    cout << cyan("  --- ANSWERS ---\n\n");
    cout <<
        "  1.  x = 2 or x = -2\n"
        "  2.  x = 0 or x = -3\n"
        "  3.  x = 3 or x = 4\n"
        "  4.  x = -3 (one answer, repeated)\n"
        "  5.  x = 2 or x = -2\n"
        "  6.  x = 3 or x = -2\n"
        "  7.  x = 0 or x = -2\n"
        "  8.  x = 2 (one answer, repeated)\n"
        "  9.  x = 1 or x = 1.5\n"
        "  10. x = 3 or x = -5\n";
    pressEnter();
}

void homework() {
    clearScreen(); banner();
    cout << bold(yellow("\n  === HOMEWORK ===\n\n"));
    cout <<
        "  Show all your working. Due next class.\n"
        "\n"
        "  PART A - Solve the equations  (2 points each)\n"
        "  -----------------------------------------------\n"
        "  1.  x^2 - 25 = 0\n"
        "  2.  x^2 + 5x + 6 = 0\n"
        "  3.  x^2 - 8x + 16 = 0\n"
        "  4.  2x^2 + 4x = 0\n"
        "  5.  x^2 - 3x - 10 = 0\n"
        "\n"
        "  PART B - Word problems  (4 points each)\n"
        "  -----------------------------------------\n"
        "  6.  Two numbers differ by 3. Their product is 28.\n"
        "      Find both numbers.\n"
        "\n"
        "  7.  A square garden has its side increased by 2 m.\n"
        "      The new area is 25 m^2.\n"
        "      What was the original side length?\n"
        "\n"
        "  8.  The sum of a number and its square is 20.\n"
        "      Find the number.\n"
        "\n"
        "  TOTAL: 26 points. Pass = 13 points (50%)\n";
    pressEnter();
}