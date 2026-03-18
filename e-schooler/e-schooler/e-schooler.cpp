#include <iostream>
#include <string>
#include "utils.h"
#include "math_lessons.h"
#include "math_questions.h"
#include "math_test.h"
using namespace std;

int main() {
    while (true) {
        clearScreen(); banner();
        cout <<
            "  LESSONS\n"
            "  -----------------------------------\n"
            "   1.  What is a Quadratic Equation?\n"
            "   2.  How to Solve Them\n"
            "   3.  Word Problems\n"
            "   4.  Practice Exercises\n"
            "   5.  Homework\n"
            "\n"
            "  TEST\n"
            "  -----------------------------------\n"
            "   6.  Take the Test  (20 questions)\n"
            "\n"
            "  STATS\n"
            "  -----------------------------------\n"
            "   7.  Class Statistics\n"
            "\n"
            "   0.  Exit\n\n";

        int c;
        cout << "  Enter choice: ";
        cin >> c;

        switch (c) {
        case 1: lesson1(); break;
        case 2: lesson2(); break;
        case 3: lesson3(); break;
        case 4: exercises(); break;
        case 5: homework(); break;
        case 6: runTest(); break;
        case 7: break;
        case 0:
            cout << green("\n See you next time!");
            return 0;
        }
    }
}