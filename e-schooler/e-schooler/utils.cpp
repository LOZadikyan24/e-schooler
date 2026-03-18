#include <iostream>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pressEnter() {
    cout << "\n  Press ENTER to continue...";
    cin.ignore();
    cin.get();
}

string green(string text) { return "\033[32m" + text + "\033[0m"; }
string yellow(string text) { return "\033[33m" + text + "\033[0m"; }
string red(string text) { return "\033[31m" + text + "\033[0m"; }
string cyan(string text) { return "\033[36m" + text + "\033[0m"; }
string bold(string text) { return "\033[1m" + text + "\033[0m"; }

void banner() {
    cout << bold(cyan(
        "\n  +------------------------------------------------------+\n"
        "  |                    E-SCHOOL                         |\n"
        "  |                    Grade 9                          |\n"
        "  +------------------------------------------------------+\n"
    )) << "\n";
}

void mathBanner() {
    cout << bold(cyan(
        "\n  +------------------------------------------------------+\n"
        "  |        E-SCHOOL: QUADRATIC EQUATIONS                |\n"
        "  |             Mathematics - Grade 9                   |\n"
        "  +------------------------------------------------------+\n"
    )) << "\n";
}

void progBanner() {
    cout << bold(cyan(
        "\n  +------------------------------------------------------+\n"
        "  |          E-SCHOOL: VARIABLES & DATA TYPES           |\n"
        "  |             Programming - Grade 9                   |\n"
        "  +------------------------------------------------------+\n"
    )) << "\n";
}