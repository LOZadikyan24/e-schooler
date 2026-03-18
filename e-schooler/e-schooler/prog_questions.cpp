#include <iostream>
#include "prog_questions.h"
using namespace std;

const int progTotalQ = 31;
const int progTestQ = 20;

int    pqCat[31];
string pqText[31];
string pqOpt[31][4];
int    pqAns[31];
string pqExp[31];

void loadProgQuestions() {
    int i = 0;

    // --- THEORY ---
    pqCat[i] = 0; pqText[i] = "What is a variable?";
    pqOpt[i][0] = "A fixed value that never changes";
    pqOpt[i][1] = "A named storage location in memory";
    pqOpt[i][2] = "A type of loop";
    pqOpt[i][3] = "A mathematical operator";
    pqAns[i] = 1; pqExp[i] = "A variable is a named location in memory used to store a value."; i++;

    pqCat[i] = 0; pqText[i] = "Which of these is a valid variable name?";
    pqOpt[i][0] = "2score"; pqOpt[i][1] = "my-score";
    pqOpt[i][2] = "my_score"; pqOpt[i][3] = "int";
    pqAns[i] = 2; pqExp[i] = "Variable names can't start with a digit, use hyphens, or be keywords."; i++;

    pqCat[i] = 0; pqText[i] = "What data type stores whole numbers in C++?";
    pqOpt[i][0] = "double"; pqOpt[i][1] = "char";
    pqOpt[i][2] = "bool"; pqOpt[i][3] = "int";
    pqAns[i] = 3; pqExp[i] = "int stores whole numbers like 0, 5, -3, 100."; i++;

    pqCat[i] = 0; pqText[i] = "What data type stores decimal numbers?";
    pqOpt[i][0] = "int"; pqOpt[i][1] = "double";
    pqOpt[i][2] = "char"; pqOpt[i][3] = "bool";
    pqAns[i] = 1; pqExp[i] = "double stores decimal numbers like 3.14 or 9.99."; i++;

    pqCat[i] = 0; pqText[i] = "What data type stores a single character?";
    pqOpt[i][0] = "string"; pqOpt[i][1] = "int";
    pqOpt[i][2] = "char"; pqOpt[i][3] = "bool";
    pqAns[i] = 2; pqExp[i] = "char stores a single character like 'A' or '5'."; i++;

    pqCat[i] = 0; pqText[i] = "What are the only two values a bool can hold?";
    pqOpt[i][0] = "0 and 1"; pqOpt[i][1] = "yes and no";
    pqOpt[i][2] = "true and false"; pqOpt[i][3] = "on and off";
    pqAns[i] = 2; pqExp[i] = "bool holds true or false."; i++;

    pqCat[i] = 0; pqText[i] = "Which quotes are used for a char value?";
    pqOpt[i][0] = "Double quotes \"\""; pqOpt[i][1] = "Single quotes ''";
    pqOpt[i][2] = "Backticks ``"; pqOpt[i][3] = "No quotes needed";
    pqAns[i] = 1; pqExp[i] = "char uses single quotes: char c = 'A';"; i++;

    pqCat[i] = 0; pqText[i] = "Which quotes are used for a string value?";
    pqOpt[i][0] = "Single quotes ''"; pqOpt[i][1] = "Backticks ``";
    pqOpt[i][2] = "No quotes needed"; pqOpt[i][3] = "Double quotes \"\"";
    pqAns[i] = 3; pqExp[i] = "string uses double quotes: string name = \"Alice\";"; i++;

    pqCat[i] = 0; pqText[i] = "Are variable names case-sensitive in C++?";
    pqOpt[i][0] = "Only for int variables"; pqOpt[i][1] = "No, never";
    pqOpt[i][2] = "Only for string variables"; pqOpt[i][3] = "Yes, always";
    pqAns[i] = 3; pqExp[i] = "C++ is case-sensitive: 'score' and 'Score' are different variables."; i++;

    pqCat[i] = 0; pqText[i] = "What header is needed to use string in C++?";
    pqOpt[i][0] = "#include <string>"; pqOpt[i][1] = "#include <text>";
    pqOpt[i][2] = "#include <char>"; pqOpt[i][3] = "No header needed";
    pqAns[i] = 0; pqExp[i] = "#include <string> is needed to use the string type."; i++;

    pqCat[i] = 0; pqText[i] = "What does 'declaring a variable' mean?";
    pqOpt[i][0] = "Deleting it from memory"; pqOpt[i][1] = "Printing its value";
    pqOpt[i][2] = "Changing its value"; pqOpt[i][3] = "Telling the computer its type and name";
    pqAns[i] = 3; pqExp[i] = "Declaration means specifying the type and name: int age;"; i++;

    pqCat[i] = 0; pqText[i] = "Which keyword is NOT a data type in C++?";
    pqOpt[i][0] = "int"; pqOpt[i][1] = "double";
    pqOpt[i][2] = "real"; pqOpt[i][3] = "bool";
    pqAns[i] = 2; pqExp[i] = "'real' is not a C++ type. Use double for decimal numbers."; i++;

    // --- BASIC ---
    pqCat[i] = 1; pqText[i] = "What is the value of x?  int x = 4 + 3;";
    pqOpt[i][0] = "43"; pqOpt[i][1] = "4";
    pqOpt[i][2] = "3"; pqOpt[i][3] = "7";
    pqAns[i] = 3; pqExp[i] = "4 + 3 = 7, so x = 7."; i++;

    pqCat[i] = 1; pqText[i] = "What type should 'temperature = 36.6' be?";
    pqOpt[i][0] = "int"; pqOpt[i][1] = "char";
    pqOpt[i][2] = "double"; pqOpt[i][3] = "bool";
    pqAns[i] = 2; pqExp[i] = "36.6 is a decimal number, so use double."; i++;

    pqCat[i] = 1; pqText[i] = "What is wrong?  char letter = \"Z\";";
    pqOpt[i][0] = "Z is not a letter"; pqOpt[i][1] = "char should use single quotes";
    pqOpt[i][2] = "letter is a bad name"; pqOpt[i][3] = "Nothing is wrong";
    pqAns[i] = 1; pqExp[i] = "char uses single quotes: char letter = 'Z';"; i++;

    pqCat[i] = 1; pqText[i] = "What is the result of (int)7.9 in C++?";
    pqOpt[i][0] = "8"; pqOpt[i][1] = "7.9";
    pqOpt[i][2] = "7"; pqOpt[i][3] = "Error";
    pqAns[i] = 2; pqExp[i] = "Casting to int truncates (cuts) the decimal: result is 7."; i++;

    pqCat[i] = 1; pqText[i] = "int x = 10; x = x * 2 - 3; What is x?";
    pqOpt[i][0] = "20"; pqOpt[i][1] = "7";
    pqOpt[i][2] = "17"; pqOpt[i][3] = "23";
    pqAns[i] = 2; pqExp[i] = "10 * 2 = 20, 20 - 3 = 17."; i++;

    pqCat[i] = 1; pqText[i] = "Which declaration is correct?";
    pqOpt[i][0] = "int = 5 x;"; pqOpt[i][1] = "5 int x;";
    pqOpt[i][2] = "x int = 5;"; pqOpt[i][3] = "int x = 5;";
    pqAns[i] = 3; pqExp[i] = "Correct syntax: type name = value;"; i++;

    pqCat[i] = 1; pqText[i] = "What type is best for storing 'true' or 'false'?";
    pqOpt[i][0] = "int"; pqOpt[i][1] = "string";
    pqOpt[i][2] = "char"; pqOpt[i][3] = "bool";
    pqAns[i] = 3; pqExp[i] = "bool is designed specifically for true/false values."; i++;

    pqCat[i] = 1; pqText[i] = "What does cin >> x; do?";
    pqOpt[i][0] = "Prints x to screen"; pqOpt[i][1] = "Deletes x";
    pqOpt[i][2] = "Reads a value from the user into x"; pqOpt[i][3] = "Declares x";
    pqAns[i] = 2; pqExp[i] = "cin >> reads input from the keyboard into the variable."; i++;

    pqCat[i] = 1; pqText[i] = "int a = 5; double b = a; What is b?";
    pqOpt[i][0] = "Error"; pqOpt[i][1] = "5";
    pqOpt[i][2] = "5.0"; pqOpt[i][3] = "0";
    pqAns[i] = 2; pqExp[i] = "int 5 converts to double 5.0 automatically."; i++;

    pqCat[i] = 1; pqText[i] = "Can you store 3.5 in an int variable?";
    pqOpt[i][0] = "Yes, it becomes 4"; pqOpt[i][1] = "Yes, it stays 3.5";
    pqOpt[i][2] = "No, it causes a crash"; pqOpt[i][3] = "No, the decimal is lost: stored as 3";
    pqAns[i] = 3; pqExp[i] = "int truncates decimals: 3.5 becomes 3."; i++;

    pqCat[i] = 1; pqText[i] = "What is the value of x?  int x = 10 / 3;";
    pqOpt[i][0] = "3.33"; pqOpt[i][1] = "4";
    pqOpt[i][2] = "3"; pqOpt[i][3] = "Error";
    pqAns[i] = 2; pqExp[i] = "Integer division: 10 / 3 = 3 (remainder is discarded)."; i++;

    // --- APPLIED ---
    pqCat[i] = 2; pqText[i] = "Which variable name follows best practice?";
    pqOpt[i][0] = "x"; pqOpt[i][1] = "A";
    pqOpt[i][2] = "studentAge"; pqOpt[i][3] = "sa";
    pqAns[i] = 2; pqExp[i] = "Descriptive names like studentAge make code easier to read."; i++;

    pqCat[i] = 2; pqText[i] = "What type would you use for a student's GPA (e.g. 3.75)?";
    pqOpt[i][0] = "int"; pqOpt[i][1] = "char";
    pqOpt[i][2] = "bool"; pqOpt[i][3] = "double";
    pqAns[i] = 3; pqExp[i] = "GPA has decimals, so double is the right choice."; i++;

    pqCat[i] = 2; pqText[i] = "What type for storing whether a student passed (yes/no)?";
    pqOpt[i][0] = "bool"; pqOpt[i][1] = "int";
    pqOpt[i][2] = "string"; pqOpt[i][3] = "char";
    pqAns[i] = 0; pqExp[i] = "bool passed = true; is perfect for yes/no values."; i++;

    pqCat[i] = 2; pqText[i] = "int x = 5; x = x + 1; What is x now?";
    pqOpt[i][0] = "5"; pqOpt[i][1] = "51";
    pqOpt[i][2] = "6"; pqOpt[i][3] = "Error";
    pqAns[i] = 2; pqExp[i] = "x + 1 = 6. This is called incrementing."; i++;

    pqCat[i] = 2; pqText[i] = "Which line correctly reads an integer from the user?";
    pqOpt[i][0] = "cin << age;"; pqOpt[i][1] = "cout >> age;";
    pqOpt[i][2] = "int >> age;"; pqOpt[i][3] = "cin >> age;";
    pqAns[i] = 3; pqExp[i] = "cin >> variable; reads input from the user."; i++;

    pqCat[i] = 2; pqText[i] = "double x = 5.0 / 2.0; What is x?";
    pqOpt[i][0] = "2"; pqOpt[i][1] = "2.5";
    pqOpt[i][2] = "3"; pqOpt[i][3] = "Error";
    pqAns[i] = 1; pqExp[i] = "5.0 / 2.0 = 2.5. Double division keeps the decimal."; i++;

    pqCat[i] = 2; pqText[i] = "What is wrong?  int name = \"Bob\";";
    pqOpt[i][0] = "Bob is too short"; pqOpt[i][1] = "You can't use = for strings";
    pqOpt[i][2] = "int can't hold text; use string"; pqOpt[i][3] = "Nothing is wrong";
    pqAns[i] = 2; pqExp[i] = "int holds numbers only. Use string name = \"Bob\";"; i++;

    pqCat[i] = 2; pqText[i] = "How many variables are declared here?  int a, b, c;";
    pqOpt[i][0] = "1"; pqOpt[i][1] = "2";
    pqOpt[i][2] = "4"; pqOpt[i][3] = "3";
    pqAns[i] = 3; pqExp[i] = "int a, b, c; declares three int variables at once."; i++;

    pqCat[i] = 2; pqText[i] = "int x = 3; x *= 4; What is x?";
    pqOpt[i][0] = "34"; pqOpt[i][1] = "7";
    pqOpt[i][2] = "12"; pqOpt[i][3] = "4";
    pqAns[i] = 2; pqExp[i] = "x *= 4 means x = x * 4 = 3 * 4 = 12."; i++;
}