#include <iostream>
#include <string>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pressEnter() {
    cout << "\n                    Press ENTER to continue...";
    cin.ignore();
    cin.get();
}

string green(string t) { return "\033[32m" + t + "\033[0m"; }
string yellow(string t) { return "\033[33m" + t + "\033[0m"; }
string red(string t) { return "\033[31m" + t + "\033[0m"; }
string cyan(string t) { return "\033[36m" + t + "\033[0m"; }
string bold(string t) { return "\033[1m" + t + "\033[0m"; }

void banner() {
    cout << bold(cyan("\n\n                       E-schoolers\n"
        "                  Mathematics - Grade 9\n\n"));
}

void lesson1() {
    clearScreen(); banner();
    cout << bold(yellow("              LESSON 1 - What is a Quadratic Equation?\n\n"));
    cout << "          A quadratic equation looks like this:\n"
        << "\n"
        << "                   ax^2 + bx + c = 0\n"
        << "\n"
        << "          where a, b, c are numbers and a cannot be zero.\n"
        << "\n"
        << "          - a is the number in front of x^2\n"
        << "          - b is the number in front of x\n"
        << "          - c is just a plain number\n"
        << "\n"
        << "          Examples:\n"
        << "            x^2 - 5x + 6 = 0      (a=1, b=-5, c=6)\n"
        << "            2x^2 + 3x - 2 = 0     (a=2, b=3,  c=-2)\n"
        << "            x^2 - 9 = 0           (a=1, b=0,  c=-9)\n"
        << "\n"
        << "          THE DISCRIMINANT\n"
        << "          ----------------\n"
        << "          D = b^2 - 4ac\n"
        << "\n";
    cout << green("            D > 0  -->  two different solutions\n");
    cout << yellow("            D = 0  -->  exactly one solution\n");
    cout << red("            D < 0  -->  no real solutions\n");
    pressEnter();
}

void lesson2() {
    clearScreen(); banner();
    cout << bold(yellow("              LESSON 2 - How to Solve Quadratic Equations\n\n"));
    cout << "          METHOD 1: Factoring\n"
        << "          -------------------\n"
        << "          Find two numbers that multiply to c and add to b.\n"
        << "\n"
        << "          Example: x^2 - 5x + 6 = 0\n"
        << "            Numbers that multiply to 6 and add to -5: -2 and -3\n"
        << "            (x - 2)(x - 3) = 0\n"
        << "            Answer: x = 2  or  x = 3\n"
        << "\n"
        << "          METHOD 2: Square Root\n"
        << "          ---------------------\n"
        << "          Use when there is no x term (b = 0).\n"
        << "\n"
        << "          Example: x^2 - 16 = 0\n"
        << "            x^2 = 16\n"
        << "            Answer: x = 4  or  x = -4\n"
        << "\n"
        << "          METHOD 3: Quadratic Formula\n"
        << "          ---------------------------\n"
        << "          Works for any quadratic equation.\n"
        << "\n"
        << "                   -b +/- sqrt(b^2 - 4ac)\n"
        << "            x =   -------------------------\n"
        << "                            2a\n"
        << "\n"
        << "          Example: 2x^2 - 3x - 2 = 0\n"
        << "            a=2, b=-3, c=-2\n"
        << "            D = 9 + 16 = 25\n"
        << "            x = (3 + 5) / 4 = 2   or   x = (3 - 5) / 4 = -0.5\n";
    pressEnter();
}

void lesson3() {
    // lesson3() goes here
}

void mathsMenu() {
    bool done1 = false, done2 = false, done3 = false;

    while (true) {
        clearScreen(); banner();
        cout << bold(yellow("                         Maths\n\n"));
        cout << "                   1.  Lesson 1 - What is a Quadratic Equation?"
            << (done1 ? green("  [done]") : "") << "\n";
        cout << "                   2.  Lesson 2 - How to Solve Them"
            << (done2 ? green("  [done]") : "") << "\n";
        cout << "                   3.  Lesson 3 - Word Problems"
            << (done3 ? green("  [done]") : "") << "\n";
        cout << "\n";

        if (done1 && done2 && done3) {
            cout << bold(green("                   4.  Take the Test  (20 questions)\n"));
        }
        else {
            cout << "\033[90m                   4.  Take the Test  (finish all lessons first)\033[0m\n";
        }

        cout << "\n"
            << "                   0.  Back\n\n"
            << "                   => ";

        int c;
        cin >> c;

        switch (c) {
        case 1: lesson1(); done1 = true; break;
        case 2: lesson2(); done2 = true; break;
        case 3: lesson3(); done3 = true; break;
        case 4:
            if (done1 && done2 && done3) {
                // takeTest() goes here
            }
            else {
                cout << red("\n                   Finish all lessons first!\n");
                pressEnter();
            }
            break;
        case 0: return;
        }
    }
}

void englishMenu() {
    bool done1 = false, done2 = false, done3 = false;

    while (true) {
        clearScreen(); banner();
        cout << bold(yellow("                         English\n\n"));
        cout << "                   1.  Lesson 1 - Coming soon"
            << (done1 ? green("  [done]") : "") << "\n";
        cout << "                   2.  Lesson 2 - Coming soon"
            << (done2 ? green("  [done]") : "") << "\n";
        cout << "                   3.  Lesson 3 - Coming soon"
            << (done3 ? green("  [done]") : "") << "\n";
        cout << "\n";

        if (done1 && done2 && done3) {
            cout << bold(green("                   4.  Take the Test  (20 questions)\n"));
        }
        else {
            cout << "\033[90m                   4.  Take the Test  (finish all lessons first)\033[0m\n";
        }

        cout << "\n"
            << "                   0.  Back\n\n"
            << "                   => ";

        int c;
        cin >> c;
        if (c == 0) return;
    }
}

void programmingMenu() {
    bool done1 = false, done2 = false, done3 = false;

    while (true) {
        clearScreen(); banner();
        cout << bold(yellow("                         Programming\n\n"));
        cout << "                   1.  Lesson 1 - Coming soon"
            << (done1 ? green("  [done]") : "") << "\n";
        cout << "                   2.  Lesson 2 - Coming soon"
            << (done2 ? green("  [done]") : "") << "\n";
        cout << "                   3.  Lesson 3 - Coming soon"
            << (done3 ? green("  [done]") : "") << "\n";
        cout << "\n";

        if (done1 && done2 && done3) {
            cout << bold(green("                   4.  Take the Test  (20 questions)\n"));
        }
        else {
            cout << "\033[90m                   4.  Take the Test  (finish all lessons first)\033[0m\n";
        }

        cout << "\n"
            << "                   0.  Back\n\n"
            << "                   => ";

        int c;
        cin >> c;
        if (c == 0) return;
    }
}

int main() {
    while (true) {
        clearScreen(); banner();

        cout << bold("                         Lessons\n\n")
            << "                   1.  Maths\n"
            << "                   2.  English\n"
            << "                   3.  Programming\n"
            << bold("\n                         Stats\n\n")
            << "                   4.  Class statistics\n"
            << "                   0.  Exit\n\n"
            << "                   => ";

        int c;
        cin >> c;

        switch (c) {
        case 1: mathsMenu();       break;
        case 2: englishMenu();     break;
        case 3: programmingMenu(); break;
        case 4: break;
        case 0:
            cout << green("\n                   See you next time!\n\n");
            return 0;
        }
    }
}