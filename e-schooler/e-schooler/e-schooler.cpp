#include <iostream>
#include <string>
#include "utils.h"
#include "math_lessons.h"
#include "math_questions.h"
#include "math_test.h"
#include "prog_lessons.h"
#include "prog_questions.h"
#include "prog_test.h"
using namespace std;

void mathMenu() {
    while (true) {
        clearScreen(); mathBanner();
        cout <<
            "  SUBJECT: Mathematics - Quadratic Equations\n"
            "\n"
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
            "   0.  Back to Main Menu\n\n";

        int choice;
        cout << "  Enter choice: ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore();
        }
        else {
            switch (choice) {
            case 1: lesson1(); break;
            case 2: lesson2(); break;
            case 3: lesson3(); break;
            case 4: exercises(); break;
            case 5: homework(); break;
            case 6: runTest(); break;
            case 0: return;
            }
        }
    }
}

void progMenu() {
    while (true) {
        clearScreen(); progBanner();
        cout <<
            "  SUBJECT: Programming - Variables & Data Types\n"
            "\n"
            "  LESSONS\n"
            "  -----------------------------------\n"
            "   1.  What are Variables?\n"
            "   2.  Data Types\n"
            "   3.  Using Variables\n"
            "   4.  Practice Exercises\n"
            "   5.  Homework\n"
            "\n"
            "  TEST\n"
            "  -----------------------------------\n"
            "   6.  Take the Test  (20 questions)\n"
            "\n"
            "   0.  Back to Main Menu\n\n";

        int choice;
        cout << "  Enter choice: ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore();
        }
        else {
            switch (choice) {
            case 1: progLesson1(); break;
            case 2: progLesson2(); break;
            case 3: progLesson3(); break;
            case 4: progExercises(); break;
            case 5: progHomework(); break;
            case 6: runProgTest(); break;
            case 0: return;
            }
        }
    }
}

int main() {
    while (true) {
        clearScreen(); banner();
        cout <<
            "  SELECT A SUBJECT\n"
            "  -----------------------------------\n"
            "   1.  Mathematics\n"
            "       Quadratic Equations\n"
            "\n"
            "   2.  Programming\n"
            "       Variables & Data Types\n"
            "\n"
            "   0.  Exit\n\n";

        int choice;
        cout << "  Enter choice: ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore();
        }
        else {
            switch (choice) {
            case 1: mathMenu(); break;
            case 2: progMenu(); break;
            case 0:
                cout << green("\n  See you next time!\n");
                return 0;
            }
        }
    }
}