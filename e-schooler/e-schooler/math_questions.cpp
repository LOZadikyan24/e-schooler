#include <iostream>
#include "math_questions.h"
using namespace std;

void loadQuestions(Question q[]) {
    int i = 0;

    // --- THEORY ---
    q[i].category = 0; q[i].text = "What is the standard form of a quadratic equation?";
    q[i].options[0] = "ax + b = 0"; q[i].options[1] = "ax^3 + b = 0";
    q[i].options[2] = "a/x + b = 0"; q[i].options[3] = "ax^2 + bx + c = 0";
    q[i].answer = 3; q[i].explanation = "Standard form: ax^2 + bx + c = 0, where a is not 0."; i++;

    q[i].category = 0; q[i].text = "In ax^2 + bx + c = 0, what does 'a' represent?";
    q[i].options[0] = "The constant term"; q[i].options[1] = "The solution";
    q[i].options[2] = "The x coefficient"; q[i].options[3] = "The x^2 coefficient";
    q[i].answer = 3; q[i].explanation = "'a' is the number in front of x^2."; i++;

    q[i].category = 0; q[i].text = "What is the discriminant formula?";
    q[i].options[0] = "-b / 2a"; q[i].options[1] = "b^2 + 4ac";
    q[i].options[2] = "b^2 - 4ac"; q[i].options[3] = "2a / b";
    q[i].answer = 2; q[i].explanation = "D = b^2 - 4ac. It tells us how many solutions there are."; i++;

    q[i].category = 0; q[i].text = "If D > 0, how many solutions does the equation have?";
    q[i].options[0] = "Three solutions"; q[i].options[1] = "No solutions";
    q[i].options[2] = "One solution"; q[i].options[3] = "Two solutions";
    q[i].answer = 3; q[i].explanation = "D > 0 means two different solutions."; i++;

    q[i].category = 0; q[i].text = "If D = 0, how many solutions does the equation have?";
    q[i].options[0] = "Two solutions"; q[i].options[1] = "One solution";
    q[i].options[2] = "No solutions"; q[i].options[3] = "Infinitely many";
    q[i].answer = 1; q[i].explanation = "D = 0 means exactly one solution (repeated)."; i++;

    q[i].category = 0; q[i].text = "If D < 0, what can we say?";
    q[i].options[0] = "One solution"; q[i].options[1] = "Two positive solutions";
    q[i].options[2] = "No real solutions"; q[i].options[3] = "Two negative solutions";
    q[i].answer = 2; q[i].explanation = "D < 0 means there are no real number solutions."; i++;

    q[i].category = 0; q[i].text = "What is the quadratic formula?";
    q[i].options[0] = "sqrt(b^2 - 4ac)"; q[i].options[1] = "b^2 - 4ac";
    q[i].options[2] = "-b / 2a"; q[i].options[3] = "(-b +/- sqrt(D)) / 2a";
    q[i].answer = 3; q[i].explanation = "x = (-b +/- sqrt(b^2 - 4ac)) / (2a)"; i++;

    q[i].category = 0; q[i].text = "Which of these is a quadratic equation?";
    q[i].options[0] = "3x + 5 = 0"; q[i].options[1] = "x^2 + 2x - 8 = 0";
    q[i].options[2] = "5/x = 2"; q[i].options[3] = "x^3 - 1 = 0";
    q[i].answer = 1; q[i].explanation = "Only x^2 + 2x - 8 = 0 has x^2 as the highest power."; i++;

    q[i].category = 0; q[i].text = "In x^2 - 4x + 4 = 0, what is b?";
    q[i].options[0] = "4"; q[i].options[1] = "0";
    q[i].options[2] = "1"; q[i].options[3] = "-4";
    q[i].answer = 3; q[i].explanation = "b is the number in front of x. Here b = -4."; i++;

    q[i].category = 0; q[i].text = "In 3x^2 + 5x - 2 = 0, what is c?";
    q[i].options[0] = "5"; q[i].options[1] = "3";
    q[i].options[2] = "-2"; q[i].options[3] = "2";
    q[i].answer = 2; q[i].explanation = "c is the constant term. Here c = -2."; i++;

    q[i].category = 0; q[i].text = "What does a double root mean?";
    q[i].options[0] = "No solution"; q[i].options[1] = "Three solutions";
    q[i].options[2] = "Two different solutions"; q[i].options[3] = "The same solution twice";
    q[i].answer = 3; q[i].explanation = "Double root means D = 0 and there is one repeated solution."; i++;

    q[i].category = 0; q[i].text = "Can 0x^2 + 3x + 1 = 0 be called quadratic?";
    q[i].options[0] = "Only if c = 0"; q[i].options[1] = "Yes always";
    q[i].options[2] = "No, because a = 0"; q[i].options[3] = "Yes if b is not 0";
    q[i].answer = 2; q[i].explanation = "For a quadratic, a must not be zero."; i++;

    // --- BASIC ---
    q[i].category = 1; q[i].text = "Solve: x^2 - 9 = 0";
    q[i].options[0] = "x = 9"; q[i].options[1] = "x = -3";
    q[i].options[2] = "x = 3"; q[i].options[3] = "x = 3 or x = -3";
    q[i].answer = 3; q[i].explanation = "x^2 = 9, so x = 3 or x = -3."; i++;

    q[i].category = 1; q[i].text = "Solve: x^2 - 5x + 6 = 0";
    q[i].options[0] = "x = 2 or x = 3"; q[i].options[1] = "x = 5 or x = 1";
    q[i].options[2] = "x = -2 or x = -3"; q[i].options[3] = "x = 1 or x = 6";
    q[i].answer = 0; q[i].explanation = "Factor: (x-2)(x-3) = 0. So x = 2 or x = 3."; i++;

    q[i].category = 1; q[i].text = "Solve: x^2 + 4x = 0";
    q[i].options[0] = "x = -4"; q[i].options[1] = "x = 0 or x = 4";
    q[i].options[2] = "x = 4"; q[i].options[3] = "x = 0 or x = -4";
    q[i].answer = 3; q[i].explanation = "Factor: x(x+4) = 0. So x = 0 or x = -4."; i++;

    q[i].category = 1; q[i].text = "What is the discriminant of x^2 - 4x + 4 = 0?";
    q[i].options[0] = "D = -8"; q[i].options[1] = "D = 0";
    q[i].options[2] = "D = 16"; q[i].options[3] = "D = 8";
    q[i].answer = 1; q[i].explanation = "D = (-4)^2 - 4*1*4 = 16 - 16 = 0."; i++;

    q[i].category = 1; q[i].text = "Solve: x^2 + 6x + 9 = 0";
    q[i].options[0] = "x = 3 or x = -3"; q[i].options[1] = "No solution";
    q[i].options[2] = "x = 3"; q[i].options[3] = "x = -3 (double root)";
    q[i].answer = 3; q[i].explanation = "D = 36 - 36 = 0. x = -6/2 = -3. Double root."; i++;

    q[i].category = 1; q[i].text = "Solve: x^2 - 16 = 0";
    q[i].options[0] = "x = 16"; q[i].options[1] = "x = 8 or x = -8";
    q[i].options[2] = "x = 4"; q[i].options[3] = "x = 4 or x = -4";
    q[i].answer = 3; q[i].explanation = "x^2 = 16, so x = 4 or x = -4."; i++;

    q[i].category = 1; q[i].text = "Which equation has solutions x = 1 and x = -5?";
    q[i].options[0] = "x^2 - 6x + 5 = 0"; q[i].options[1] = "x^2 + 4x - 5 = 0";
    q[i].options[2] = "x^2 - 4x - 5 = 0"; q[i].options[3] = "x^2 + 6x + 5 = 0";
    q[i].answer = 1; q[i].explanation = "Sum = -4, product = -5. So x^2 + 4x - 5 = 0."; i++;

    q[i].category = 1; q[i].text = "Solve: 2x^2 - 8 = 0";
    q[i].options[0] = "x = 8"; q[i].options[1] = "x = 4 or x = -4";
    q[i].options[2] = "x = 2 or x = -2"; q[i].options[3] = "x = 2";
    q[i].answer = 2; q[i].explanation = "2x^2 = 8, x^2 = 4, x = 2 or x = -2."; i++;

    q[i].category = 1; q[i].text = "Solve: x^2 - 7x + 10 = 0";
    q[i].options[0] = "x = 7 or x = 1"; q[i].options[1] = "x = -5 or x = -2";
    q[i].options[2] = "x = 10 or x = 1"; q[i].options[3] = "x = 5 or x = 2";
    q[i].answer = 3; q[i].explanation = "Factor: (x-5)(x-2) = 0."; i++;

    q[i].category = 1; q[i].text = "What is the discriminant of x^2 + 2x + 5 = 0?";
    q[i].options[0] = "D = 0"; q[i].options[1] = "D = 4";
    q[i].options[2] = "D = 16"; q[i].options[3] = "D = -16";
    q[i].answer = 3; q[i].explanation = "D = 4 - 20 = -16. No real solutions."; i++;

    q[i].category = 1; q[i].text = "Solve: x^2 + x - 12 = 0";
    q[i].options[0] = "x = 12 or x = -1"; q[i].options[1] = "x = 6 or x = -2";
    q[i].options[2] = "x = -3 or x = 4"; q[i].options[3] = "x = 3 or x = -4";
    q[i].answer = 3; q[i].explanation = "Factor: (x+4)(x-3) = 0."; i++;

    // --- APPLIED ---
    q[i].category = 2; q[i].text = "Two consecutive numbers have product 20. The equation is:";
    q[i].options[0] = "x + (x+1) = 20"; q[i].options[1] = "x(x+1) = 20";
    q[i].options[2] = "x^2 = 20"; q[i].options[3] = "2x = 20";
    q[i].answer = 1; q[i].explanation = "x and x+1 are consecutive, so x(x+1) = 20."; i++;

    q[i].category = 2; q[i].text = "A square has area 49 cm^2. What is the side length?";
    q[i].options[0] = "x = 14"; q[i].options[1] = "x = 24.5";
    q[i].options[2] = "x = 7 or x = -7"; q[i].options[3] = "x = 7";
    q[i].answer = 3; q[i].explanation = "x^2 = 49, x = 7. (Negative side makes no sense.)"; i++;

    q[i].category = 2; q[i].text = "Rectangle: length = x+3, width = x, area = 18. Find x.";
    q[i].options[0] = "x = 2"; q[i].options[1] = "x = 9";
    q[i].options[2] = "x = 6"; q[i].options[3] = "x = 3";
    q[i].answer = 3; q[i].explanation = "x(x+3)=18 -> x^2+3x-18=0 -> (x+6)(x-3)=0 -> x=3."; i++;

    q[i].category = 2; q[i].text = "Which equation has NO real solutions?";
    q[i].options[0] = "x^2 - 4x = 0"; q[i].options[1] = "x^2 + 4x + 4 = 0";
    q[i].options[2] = "x^2 - 5 = 0"; q[i].options[3] = "x^2 + 4 = 0";
    q[i].answer = 3; q[i].explanation = "x^2 + 4 = 0 means x^2 = -4. A square can't be negative."; i++;

    q[i].category = 2; q[i].text = "Find D for x^2 - 6x + 5 = 0";
    q[i].options[0] = "D = 36"; q[i].options[1] = "D = 16";
    q[i].options[2] = "D = 56"; q[i].options[3] = "D = 0";
    q[i].answer = 1; q[i].explanation = "D = 36 - 20 = 16."; i++;

    q[i].category = 2; q[i].text = "h = -x^2 + 4x. When is h = 0?";
    q[i].options[0] = "x = 2"; q[i].options[1] = "x = 4 only";
    q[i].options[2] = "x = 0 or x = 4"; q[i].options[3] = "x = 0 only";
    q[i].answer = 2; q[i].explanation = "-x^2+4x=0 -> x(-x+4)=0 -> x=0 or x=4."; i++;

    q[i].category = 2; q[i].text = "A number added to its square equals 6. The equation is:";
    q[i].options[0] = "x^2 - x = 6"; q[i].options[1] = "2x^2 = 6";
    q[i].options[2] = "x * x^2 = 6"; q[i].options[3] = "x + x^2 = 6";
    q[i].answer = 3; q[i].explanation = "x + x^2 = 6."; i++;

    q[i].category = 2; q[i].text = "x^2 - 4x + 3 = 0 factors as:";
    q[i].options[0] = "(x+1)(x-3)"; q[i].options[1] = "(x+1)(x+3)";
    q[i].options[2] = "(x-2)(x-2)"; q[i].options[3] = "(x-1)(x-3)";
    q[i].answer = 3; q[i].explanation = "Need two numbers: multiply to 3, add to -4: -1 and -3."; i++;
}