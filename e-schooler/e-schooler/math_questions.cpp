#include <iostream>
using namespace std;

extern const int totalQ = 31;
extern const int testQ = 20;

int qCat[totalQ];
string qText[totalQ];
string qOpt[totalQ][4];
int qAns[totalQ];
string qExp[totalQ];

void loadQuestions() {
    int i = 0;

    // --- THEORY ---
    qCat[i] = 0; qText[i] = "What is the standard form of a quadratic equation?";
    qOpt[i][0] = "ax + b = 0"; qOpt[i][1] = "ax^3 + b = 0";
    qOpt[i][2] = "a/x + b = 0"; qOpt[i][3] = "ax^2 + bx + c = 0";
    qAns[i] = 3; qExp[i] = "Standard form: ax^2 + bx + c = 0, where a is not 0."; i++;

    qCat[i] = 0; qText[i] = "In ax^2 + bx + c = 0, what does 'a' represent?";
    qOpt[i][0] = "The constant term"; qOpt[i][1] = "The solution";
    qOpt[i][2] = "The x coefficient"; qOpt[i][3] = "The x^2 coefficient";
    qAns[i] = 3; qExp[i] = "'a' is the number in front of x^2."; i++;

    qCat[i] = 0; qText[i] = "What is the discriminant formula?";
    qOpt[i][0] = "-b / 2a"; qOpt[i][1] = "b^2 + 4ac";
    qOpt[i][2] = "b^2 - 4ac"; qOpt[i][3] = "2a / b";
    qAns[i] = 2; qExp[i] = "D = b^2 - 4ac. It tells us how many solutions there are."; i++;

    qCat[i] = 0; qText[i] = "If D > 0, how many solutions does the equation have?";
    qOpt[i][0] = "Three solutions"; qOpt[i][1] = "No solutions";
    qOpt[i][2] = "One solution"; qOpt[i][3] = "Two solutions";
    qAns[i] = 3; qExp[i] = "D > 0 means two different solutions."; i++;

    qCat[i] = 0; qText[i] = "If D = 0, how many solutions does the equation have?";
    qOpt[i][0] = "Two solutions"; qOpt[i][1] = "One solution";
    qOpt[i][2] = "No solutions"; qOpt[i][3] = "Infinitely many";
    qAns[i] = 1; qExp[i] = "D = 0 means exactly one solution (repeated)."; i++;

    qCat[i] = 0; qText[i] = "If D < 0, what can we say?";
    qOpt[i][0] = "One solution"; qOpt[i][1] = "Two positive solutions";
    qOpt[i][2] = "No real solutions"; qOpt[i][3] = "Two negative solutions";
    qAns[i] = 2; qExp[i] = "D < 0 means there are no real number solutions."; i++;

    qCat[i] = 0; qText[i] = "What is the quadratic formula?";
    qOpt[i][0] = "sqrt(b^2 - 4ac)"; qOpt[i][1] = "b^2 - 4ac";
    qOpt[i][2] = "-b / 2a"; qOpt[i][3] = "(-b +/- sqrt(D)) / 2a";
    qAns[i] = 3; qExp[i] = "x = (-b +/- sqrt(b^2 - 4ac)) / (2a)"; i++;

    qCat[i] = 0; qText[i] = "Which of these is a quadratic equation?";
    qOpt[i][0] = "3x + 5 = 0"; qOpt[i][1] = "x^2 + 2x - 8 = 0";
    qOpt[i][2] = "5/x = 2"; qOpt[i][3] = "x^3 - 1 = 0";
    qAns[i] = 1; qExp[i] = "Only x^2 + 2x - 8 = 0 has x^2 as the highest power."; i++;

    qCat[i] = 0; qText[i] = "In x^2 - 4x + 4 = 0, what is b?";
    qOpt[i][0] = "4"; qOpt[i][1] = "0";
    qOpt[i][2] = "1"; qOpt[i][3] = "-4";
    qAns[i] = 3; qExp[i] = "b is the number in front of x. Here b = -4."; i++;

    qCat[i] = 0; qText[i] = "In 3x^2 + 5x - 2 = 0, what is c?";
    qOpt[i][0] = "5"; qOpt[i][1] = "3";
    qOpt[i][2] = "-2"; qOpt[i][3] = "2";
    qAns[i] = 2; qExp[i] = "c is the constant term. Here c = -2."; i++;

    qCat[i] = 0; qText[i] = "What does a double root mean?";
    qOpt[i][0] = "No solution"; qOpt[i][1] = "Three solutions";
    qOpt[i][2] = "Two different solutions"; qOpt[i][3] = "The same solution twice";
    qAns[i] = 3; qExp[i] = "Double root means D = 0 and there is one repeated solution."; i++;

    qCat[i] = 0; qText[i] = "Can 0x^2 + 3x + 1 = 0 be called quadratic?";
    qOpt[i][0] = "Only if c = 0"; qOpt[i][1] = "Yes always";
    qOpt[i][2] = "No, because a = 0"; qOpt[i][3] = "Yes if b is not 0";
    qAns[i] = 2; qExp[i] = "For a quadratic, a must not be zero."; i++;

    // --- BASIC ---
    qCat[i] = 1; qText[i] = "Solve: x^2 - 9 = 0";
    qOpt[i][0] = "x = 9"; qOpt[i][1] = "x = -3";
    qOpt[i][2] = "x = 3"; qOpt[i][3] = "x = 3 or x = -3";
    qAns[i] = 3; qExp[i] = "x^2 = 9, so x = 3 or x = -3."; i++;

    qCat[i] = 1; qText[i] = "Solve: x^2 - 5x + 6 = 0";
    qOpt[i][0] = "x = 2 or x = 3"; qOpt[i][1] = "x = 5 or x = 1";
    qOpt[i][2] = "x = -2 or x = -3"; qOpt[i][3] = "x = 1 or x = 6";
    qAns[i] = 0; qExp[i] = "Factor: (x-2)(x-3) = 0. So x = 2 or x = 3."; i++;

    qCat[i] = 1; qText[i] = "Solve: x^2 + 4x = 0";
    qOpt[i][0] = "x = -4"; qOpt[i][1] = "x = 0 or x = 4";
    qOpt[i][2] = "x = 4"; qOpt[i][3] = "x = 0 or x = -4";
    qAns[i] = 3; qExp[i] = "Factor: x(x+4) = 0. So x = 0 or x = -4."; i++;

    qCat[i] = 1; qText[i] = "What is the discriminant of x^2 - 4x + 4 = 0?";
    qOpt[i][0] = "D = -8"; qOpt[i][1] = "D = 0";
    qOpt[i][2] = "D = 16"; qOpt[i][3] = "D = 8";
    qAns[i] = 1; qExp[i] = "D = (-4)^2 - 4*1*4 = 16 - 16 = 0."; i++;

    qCat[i] = 1; qText[i] = "Solve: x^2 + 6x + 9 = 0";
    qOpt[i][0] = "x = 3 or x = -3"; qOpt[i][1] = "No solution";
    qOpt[i][2] = "x = 3"; qOpt[i][3] = "x = -3 (double root)";
    qAns[i] = 3; qExp[i] = "D = 36 - 36 = 0. x = -6/2 = -3. Double root."; i++;

    qCat[i] = 1; qText[i] = "Solve: x^2 - 16 = 0";
    qOpt[i][0] = "x = 16"; qOpt[i][1] = "x = 8 or x = -8";
    qOpt[i][2] = "x = 4"; qOpt[i][3] = "x = 4 or x = -4";
    qAns[i] = 3; qExp[i] = "x^2 = 16, so x = 4 or x = -4."; i++;

    qCat[i] = 1; qText[i] = "Which equation has solutions x = 1 and x = -5?";
    qOpt[i][0] = "x^2 - 6x + 5 = 0"; qOpt[i][1] = "x^2 + 4x - 5 = 0";
    qOpt[i][2] = "x^2 - 4x - 5 = 0"; qOpt[i][3] = "x^2 + 6x + 5 = 0";
    qAns[i] = 1; qExp[i] = "Sum = -4, product = -5. So x^2 + 4x - 5 = 0."; i++;

    qCat[i] = 1; qText[i] = "Solve: 2x^2 - 8 = 0";
    qOpt[i][0] = "x = 8"; qOpt[i][1] = "x = 4 or x = -4";
    qOpt[i][2] = "x = 2 or x = -2"; qOpt[i][3] = "x = 2";
    qAns[i] = 2; qExp[i] = "2x^2 = 8, x^2 = 4, x = 2 or x = -2."; i++;

    qCat[i] = 1; qText[i] = "Solve: x^2 - 7x + 10 = 0";
    qOpt[i][0] = "x = 7 or x = 1"; qOpt[i][1] = "x = -5 or x = -2";
    qOpt[i][2] = "x = 10 or x = 1"; qOpt[i][3] = "x = 5 or x = 2";
    qAns[i] = 3; qExp[i] = "Factor: (x-5)(x-2) = 0."; i++;

    qCat[i] = 1; qText[i] = "What is the discriminant of x^2 + 2x + 5 = 0?";
    qOpt[i][0] = "D = 0"; qOpt[i][1] = "D = 4";
    qOpt[i][2] = "D = 16"; qOpt[i][3] = "D = -16";
    qAns[i] = 3; qExp[i] = "D = 4 - 20 = -16. No real solutions."; i++;

    qCat[i] = 1; qText[i] = "Solve: x^2 + x - 12 = 0";
    qOpt[i][0] = "x = 12 or x = -1"; qOpt[i][1] = "x = 6 or x = -2";
    qOpt[i][2] = "x = -3 or x = 4"; qOpt[i][3] = "x = 3 or x = -4";
    qAns[i] = 3; qExp[i] = "Factor: (x+4)(x-3) = 0."; i++;

    // --- APPLIED ---
    qCat[i] = 2; qText[i] = "Two consecutive numbers have product 20. The equation is:";
    qOpt[i][0] = "x + (x+1) = 20"; qOpt[i][1] = "x(x+1) = 20";
    qOpt[i][2] = "x^2 = 20"; qOpt[i][3] = "2x = 20";
    qAns[i] = 1; qExp[i] = "x and x+1 are consecutive, so x(x+1) = 20."; i++;

    qCat[i] = 2; qText[i] = "A square has area 49 cm^2. What is the side length?";
    qOpt[i][0] = "x = 14"; qOpt[i][1] = "x = 24.5";
    qOpt[i][2] = "x = 7 or x = -7"; qOpt[i][3] = "x = 7";
    qAns[i] = 3; qExp[i] = "x^2 = 49, x = 7. (Negative side makes no sense.)"; i++;

    qCat[i] = 2; qText[i] = "Rectangle: length = x+3, width = x, area = 18. Find x.";
    qOpt[i][0] = "x = 2"; qOpt[i][1] = "x = 9";
    qOpt[i][2] = "x = 6"; qOpt[i][3] = "x = 3";
    qAns[i] = 3; qExp[i] = "x(x+3)=18 -> x^2+3x-18=0 -> (x+6)(x-3)=0 -> x=3."; i++;

    qCat[i] = 2; qText[i] = "Which equation has NO real solutions?";
    qOpt[i][0] = "x^2 - 4x = 0"; qOpt[i][1] = "x^2 + 4x + 4 = 0";
    qOpt[i][2] = "x^2 - 5 = 0"; qOpt[i][3] = "x^2 + 4 = 0";
    qAns[i] = 3; qExp[i] = "x^2 + 4 = 0 means x^2 = -4. A square can't be negative."; i++;

    qCat[i] = 2; qText[i] = "Find D for x^2 - 6x + 5 = 0";
    qOpt[i][0] = "D = 36"; qOpt[i][1] = "D = 16";
    qOpt[i][2] = "D = 56"; qOpt[i][3] = "D = 0";
    qAns[i] = 1; qExp[i] = "D = 36 - 20 = 16."; i++;

    qCat[i] = 2; qText[i] = "h = -x^2 + 4x. When is h = 0?";
    qOpt[i][0] = "x = 2"; qOpt[i][1] = "x = 4 only";
    qOpt[i][2] = "x = 0 or x = 4"; qOpt[i][3] = "x = 0 only";
    qAns[i] = 2; qExp[i] = "-x^2+4x=0 -> x(-x+4)=0 -> x=0 or x=4."; i++;

    qCat[i] = 2; qText[i] = "A number added to its square equals 6. The equation is:";
    qOpt[i][0] = "x^2 - x = 6"; qOpt[i][1] = "2x^2 = 6";
    qOpt[i][2] = "x * x^2 = 6"; qOpt[i][3] = "x + x^2 = 6";
    qAns[i] = 3; qExp[i] = "x + x^2 = 6."; i++;

    qCat[i] = 2; qText[i] = "x^2 - 4x + 3 = 0 factors as:";
    qOpt[i][0] = "(x+1)(x-3)"; qOpt[i][1] = "(x+1)(x+3)";
    qOpt[i][2] = "(x-2)(x-2)"; qOpt[i][3] = "(x-1)(x-3)";
    qAns[i] = 3; qExp[i] = "Need two numbers: multiply to 3, add to -4: -1 and -3."; i++;
}