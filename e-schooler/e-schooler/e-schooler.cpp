#include <iostream>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string green(string t) { return "\033[32m" + t + "\033[0m"; }
string yellow(string t) { return "\033[33m" + t + "\033[0m"; }
string red(string t) { return "\033[31m" + t + "\033[0m"; }
string cyan(string t) { return "\033[36m" + t + "\033[0m"; }
string bold(string t) { return "\033[1m" + t + "\033[0m"; }

void banner() {
    cout << bold(cyan(
        "\n  +------------------------------------------------------+\n"
        "  |        E-SCHOOL: QUADRATIC EQUATIONS                |\n"
        "  |               Mathematics - Grade 9                 |\n"
        "  +------------------------------------------------------+\n"
    )) << "\n";
}

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
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        case 0:
            cout << green("\n See you next time!");
            return 0;
        }
    }
}