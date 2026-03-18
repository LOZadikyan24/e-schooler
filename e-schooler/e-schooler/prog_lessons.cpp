#include <iostream>
#include "utils.h"
using namespace std;

void progLesson1() {
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === LESSON 1 - What are Variables? ===\n\n"));
    cout <<
        "  A variable is a named storage location in memory.\n"
        "  You give it a name and store a value inside it.\n"
        "\n"
        "  Syntax:\n"
        "        type name = value;\n"
        "\n"
        "  Examples:\n"
        "    int age = 15;\n"
        "    double price = 9.99;\n"
        "    char grade = 'A';\n"
        "    bool passed = true;\n"
        "\n"
        "  RULES FOR NAMING VARIABLES\n"
        "  --------------------------\n"
        "  - Must start with a letter or underscore\n"
        "  - Can contain letters, digits, underscores\n"
        "  - Cannot be a keyword (int, for, if, etc.)\n"
        "  - Case sensitive: 'score' and 'Score' are different\n"
        "\n"
        "  Good names:   age, totalScore, first_name\n"
        "  Bad names:    1age, int, my-score\n";
    pressEnter();
}

void progLesson2() {
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === LESSON 2 - Data Types ===\n\n"));
    cout <<
        "  A data type tells the computer what kind of value\n"
        "  a variable will hold.\n"
        "\n"
        "  BASIC DATA TYPES IN C++\n"
        "  -----------------------\n"
        "\n"
        "  int    - whole numbers\n"
        "           Example: int score = 100;\n"
        "           Range: about -2 billion to +2 billion\n"
        "\n"
        "  double - decimal numbers\n"
        "           Example: double pi = 3.14159;\n"
        "           Use for money, measurements, etc.\n"
        "\n"
        "  char   - a single character\n"
        "           Example: char letter = 'B';\n"
        "           Always use single quotes ' '\n"
        "\n"
        "  bool   - true or false only\n"
        "           Example: bool isRaining = false;\n"
        "\n"
        "  string - a sequence of characters (text)\n"
        "           Example: string name = \"Alice\";\n"
        "           Always use double quotes \" \"\n"
        "           Needs: #include <string>\n";
    pressEnter();
}

void progLesson3() {
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === LESSON 3 - Using Variables ===\n\n"));
    cout <<
        "  Once declared, you can read and change variables.\n"
        "\n"
        "  ASSIGNING A NEW VALUE\n"
        "  ---------------------\n"
        "    int x = 5;   // declare and set\n"
        "    x = 10;      // change the value\n"
        "    x = x + 3;   // x is now 13\n"
        "\n"
        "  READING FROM THE USER\n"
        "  ---------------------\n"
        "    int age;\n"
        "    cout << \"Enter your age: \";\n"
        "    cin >> age;\n"
        "\n"
        "  EXAMPLE PROGRAM\n"
        "  ---------------\n"
        "    #include <iostream>\n"
        "    using namespace std;\n"
        "    int main() {\n"
        "        string name;\n"
        "        int age;\n"
        "        cout << \"Name: \";  cin >> name;\n"
        "        cout << \"Age: \";   cin >> age;\n"
        "        cout << \"Hello \" << name << \"!\\n\";\n"
        "        cout << \"You are \" << age << \" years old.\\n\";\n"
        "        return 0;\n"
        "    }\n"
        "\n"
        "  TYPE CONVERSION\n"
        "  ---------------\n"
        "    int a = 5;\n"
        "    double b = a;        // int to double: OK\n"
        "    int c = (int)3.9;    // double to int: c = 3 (truncated!)\n";
    pressEnter();
}

void progExercises() {
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === PRACTICE EXERCISES ===\n\n"));
    cout <<
        "  Try to answer before looking at the answers!\n"
        "\n"
        "  EASY\n"
        "  ----\n"
        "  1.  What type would you use for someone's age?\n"
        "  2.  What type would you use for a price like 4.99?\n"
        "  3.  What type would you use for a single letter grade?\n"
        "  4.  Is this valid?  int 2score = 0;\n"
        "\n"
        "  MEDIUM\n"
        "  ------\n"
        "  5.  What is the value of x after:  int x = 10;  x = x * 2 - 3;\n"
        "  6.  What is wrong?  char name = \"Alice\";\n"
        "  7.  What does bool store?\n"
        "  8.  What is the result of (int)7.9?\n"
        "\n"
        "  HARDER\n"
        "  ------\n"
        "  9.  Declare a variable to store a student's GPA (e.g. 3.75).\n"
        "  10. Write code to ask the user for their name and print it back.\n"
        "\n";
    cout << cyan("  --- ANSWERS ---\n\n");
    cout <<
        "  1.  int\n"
        "  2.  double\n"
        "  3.  char\n"
        "  4.  Not valid - variable names can't start with a digit\n"
        "  5.  x = 17\n"
        "  6.  char holds one character; use string for text\n"
        "  7.  bool stores true or false\n"
        "  8.  7 (decimal part is cut off)\n"
        "  9.  double gpa = 3.75;\n"
        "  10. string name; cout << \"Name: \"; cin >> name; cout << name;\n";
    pressEnter();
}

void progHomework() {
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === HOMEWORK ===\n\n"));
    cout <<
        "  Show all your working. Due next class.\n"
        "\n"
        "  PART A - Choose the correct data type  (2 points each)\n"
        "  --------------------------------------------------------\n"
        "  1.  Number of students in a class\n"
        "  2.  Temperature in degrees (e.g. 36.6)\n"
        "  3.  The first letter of a name\n"
        "  4.  Whether a light is on or off\n"
        "  5.  A person's full name\n"
        "\n"
        "  PART B - Find the errors  (2 points each)\n"
        "  -------------------------------------------\n"
        "  6.  int my-score = 10;\n"
        "  7.  char letter = \"Z\";\n"
        "  8.  bool flag = 5;\n"
        "\n"
        "  PART C - Write the code  (4 points each)\n"
        "  ------------------------------------------\n"
        "  9.  Declare an int called 'year' with value 2025.\n"
        "  10. Ask the user for two numbers and print their sum.\n"
        "\n"
        "  TOTAL: 26 points. Pass = 13 points (50%)\n";
    pressEnter();
}