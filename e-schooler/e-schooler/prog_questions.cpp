#include <iostream>
using namespace std;
#include "prog_questions.h"

void loadProgQuestions(ProgQuestion q[]) {
    int i = 0;

    // --- THEORY ---

    q[i].category = 0; q[i].text = "What is a variable?";
    q[i].options[0] = "A named storage location in memory";
    q[i].options[1] = "A fixed value that never changes";
    q[i].options[2] = "A type of loop";
    q[i].options[3] = "A mathematical operator";
    q[i].answer = 0; q[i].explanation = "A variable is a named location in memory used to store a value."; i++;

    q[i].category = 0; q[i].text = "Which of these is a valid variable name?";
    q[i].options[0] = "2score"; q[i].options[1] = "my_score";
    q[i].options[2] = "my-score"; q[i].options[3] = "int";
    q[i].answer = 1; q[i].explanation = "Variable names can't start with a digit, use hyphens, or be keywords."; i++;

    q[i].category = 0; q[i].text = "What data type stores whole numbers in C++?";
    q[i].options[0] = "double"; q[i].options[1] = "char";
    q[i].options[2] = "int"; q[i].options[3] = "bool";
    q[i].answer = 2; q[i].explanation = "int stores whole numbers like 0, 5, -3, 100."; i++;

    q[i].category = 0; q[i].text = "What data type stores decimal numbers?";
    q[i].options[0] = "double"; q[i].options[1] = "int";
    q[i].options[2] = "char"; q[i].options[3] = "bool";
    q[i].answer = 0; q[i].explanation = "double stores decimal numbers like 3.14 or 9.99."; i++;

    q[i].category = 0; q[i].text = "What data type stores a single character?";
    q[i].options[0] = "string"; q[i].options[1] = "int";
    q[i].options[2] = "bool"; q[i].options[3] = "char";
    q[i].answer = 3; q[i].explanation = "char stores a single character like 'A' or '5'."; i++;

    q[i].category = 0; q[i].text = "What are the only two values a bool can hold?";
    q[i].options[0] = "yes and no"; q[i].options[1] = "true and false";
    q[i].options[2] = "0 and 1"; q[i].options[3] = "on and off";
    q[i].answer = 1; q[i].explanation = "bool holds true or false."; i++;

    q[i].category = 0; q[i].text = "Which quotes are used for a char value?";
    q[i].options[0] = "Backticks ``"; q[i].options[1] = "No quotes needed";
    q[i].options[2] = "Double quotes \"\""; q[i].options[3] = "Single quotes ''";
    q[i].answer = 3; q[i].explanation = "char uses single quotes: char c = 'A';"; i++;

    q[i].category = 0; q[i].text = "Which quotes are used for a string value?";
    q[i].options[0] = "Double quotes \"\""; q[i].options[1] = "Single quotes ''";
    q[i].options[2] = "Backticks ``"; q[i].options[3] = "No quotes needed";
    q[i].answer = 0; q[i].explanation = "string uses double quotes: string name = \"Alice\";"; i++;

    q[i].category = 0; q[i].text = "Are variable names case-sensitive in C++?";
    q[i].options[0] = "Only for int variables"; q[i].options[1] = "No, never";
    q[i].options[2] = "Yes, always"; q[i].options[3] = "Only for string variables";
    q[i].answer = 2; q[i].explanation = "C++ is case-sensitive: 'score' and 'Score' are different variables."; i++;

    q[i].category = 0; q[i].text = "What header is needed to use string in C++?";
    q[i].options[0] = "#include <char>"; q[i].options[1] = "#include <string>";
    q[i].options[2] = "#include <text>"; q[i].options[3] = "No header needed";
    q[i].answer = 1; q[i].explanation = "#include <string> is needed to use the string type."; i++;

    q[i].category = 0; q[i].text = "What does 'declaring a variable' mean?";
    q[i].options[0] = "Telling the computer its type and name"; q[i].options[1] = "Printing its value";
    q[i].options[2] = "Deleting it from memory"; q[i].options[3] = "Changing its value";
    q[i].answer = 0; q[i].explanation = "Declaration means specifying the type and name: int age;"; i++;

    q[i].category = 0; q[i].text = "Which keyword is NOT a data type in C++?";
    q[i].options[0] = "int"; q[i].options[1] = "real";
    q[i].options[2] = "double"; q[i].options[3] = "bool";
    q[i].answer = 1; q[i].explanation = "'real' is not a C++ type. Use double for decimal numbers."; i++;

    // --- BASIC ---

    q[i].category = 1; q[i].text = "What is the value of x?  int x = 4 + 3;";
    q[i].options[0] = "4"; q[i].options[1] = "43";
    q[i].options[2] = "7"; q[i].options[3] = "3";
    q[i].answer = 2; q[i].explanation = "4 + 3 = 7, so x = 7."; i++;

    q[i].category = 1; q[i].text = "What type should 'temperature = 36.6' be?";
    q[i].options[0] = "int"; q[i].options[1] = "char";
    q[i].options[2] = "bool"; q[i].options[3] = "double";
    q[i].answer = 3; q[i].explanation = "36.6 is a decimal number, so use double."; i++;

    q[i].category = 1; q[i].text = "What is wrong?  char letter = \"Z\";";
    q[i].options[0] = "char should use single quotes"; q[i].options[1] = "Z is not a letter";
    q[i].options[2] = "Nothing is wrong"; q[i].options[3] = "letter is a bad name";
    q[i].answer = 0; q[i].explanation = "char uses single quotes: char letter = 'Z';"; i++;

    q[i].category = 1; q[i].text = "What is the result of (int)7.9 in C++?";
    q[i].options[0] = "Error"; q[i].options[1] = "8";
    q[i].options[2] = "7.9"; q[i].options[3] = "7";
    q[i].answer = 3; q[i].explanation = "Casting to int truncates (cuts) the decimal: result is 7."; i++;

    q[i].category = 1; q[i].text = "int x = 10; x = x * 2 - 3; What is x?";
    q[i].options[0] = "23"; q[i].options[1] = "17";
    q[i].options[2] = "7"; q[i].options[3] = "20";
    q[i].answer = 1; q[i].explanation = "10 * 2 = 20, 20 - 3 = 17."; i++;

    q[i].category = 1; q[i].text = "Which declaration is correct?";
    q[i].options[0] = "int x = 5;"; q[i].options[1] = "int = 5 x;";
    q[i].options[2] = "5 int x;"; q[i].options[3] = "x int = 5;";
    q[i].answer = 0; q[i].explanation = "Correct syntax: type name = value;"; i++;

    q[i].category = 1; q[i].text = "What type is best for storing 'true' or 'false'?";
    q[i].options[0] = "string"; q[i].options[1] = "char";
    q[i].options[2] = "bool"; q[i].options[3] = "int";
    q[i].answer = 2; q[i].explanation = "bool is designed specifically for true/false values."; i++;

    q[i].category = 1; q[i].text = "What does cin >> x; do?";
    q[i].options[0] = "Declares x"; q[i].options[1] = "Reads a value from the user into x";
    q[i].options[2] = "Deletes x"; q[i].options[3] = "Prints x to screen";
    q[i].answer = 1; q[i].explanation = "cin >> reads input from the keyboard into the variable."; i++;

    q[i].category = 1; q[i].text = "int a = 5; double b = a; What is b?";
    q[i].options[0] = "Error"; q[i].options[1] = "0";
    q[i].options[2] = "5"; q[i].options[3] = "5.0";
    q[i].answer = 3; q[i].explanation = "int 5 converts to double 5.0 automatically."; i++;

    q[i].category = 1; q[i].text = "Can you store 3.5 in an int variable?";
    q[i].options[0] = "Yes, it stays 3.5"; q[i].options[1] = "No, it causes a crash";
    q[i].options[2] = "No, the decimal is lost: stored as 3"; q[i].options[3] = "Yes, it becomes 4";
    q[i].answer = 2; q[i].explanation = "int truncates decimals: 3.5 becomes 3."; i++;

    q[i].category = 1; q[i].text = "What is the value of x?  int x = 10 / 3;";
    q[i].options[0] = "3"; q[i].options[1] = "Error";
    q[i].options[2] = "4"; q[i].options[3] = "3.33";
    q[i].answer = 0; q[i].explanation = "Integer division: 10 / 3 = 3 (remainder is discarded)."; i++;

    // --- APPLIED ---

    q[i].category = 2; q[i].text = "Which variable name follows best practice?";
    q[i].options[0] = "sa"; q[i].options[1] = "studentAge";
    q[i].options[2] = "A"; q[i].options[3] = "x";
    q[i].answer = 1; q[i].explanation = "Descriptive names like studentAge make code easier to read."; i++;

    q[i].category = 2; q[i].text = "What type would you use for a student's GPA (e.g. 3.75)?";
    q[i].options[0] = "char"; q[i].options[1] = "bool";
    q[i].options[2] = "double"; q[i].options[3] = "int";
    q[i].answer = 2; q[i].explanation = "GPA has decimals, so double is the right choice."; i++;

    q[i].category = 2; q[i].text = "What type for storing whether a student passed (yes/no)?";
    q[i].options[0] = "int"; q[i].options[1] = "char";
    q[i].options[2] = "string"; q[i].options[3] = "bool";
    q[i].answer = 3; q[i].explanation = "bool passed = true; is perfect for yes/no values."; i++;

    q[i].category = 2; q[i].text = "int x = 5; x = x + 1; What is x now?";
    q[i].options[0] = "Error"; q[i].options[1] = "51";
    q[i].options[2] = "5"; q[i].options[3] = "6";
    q[i].answer = 3; q[i].explanation = "x + 1 = 6. This is called incrementing."; i++;

    q[i].category = 2; q[i].text = "Which line correctly reads an integer from the user?";
    q[i].options[0] = "cin >> age;"; q[i].options[1] = "cout >> age;";
    q[i].options[2] = "int >> age;"; q[i].options[3] = "cin << age;";
    q[i].answer = 0; q[i].explanation = "cin >> variable; reads input from the user."; i++;

    q[i].category = 2; q[i].text = "double x = 5.0 / 2.0; What is x?";
    q[i].options[0] = "3"; q[i].options[1] = "Error";
    q[i].options[2] = "2"; q[i].options[3] = "2.5";
    q[i].answer = 3; q[i].explanation = "5.0 / 2.0 = 2.5. Double division keeps the decimal."; i++;

    q[i].category = 2; q[i].text = "What is wrong?  int name = \"Bob\";";
    q[i].options[0] = "Nothing is wrong"; q[i].options[1] = "int can't hold text; use string";
    q[i].options[2] = "Bob is too short"; q[i].options[3] = "You can't use = for strings";
    q[i].answer = 1; q[i].explanation = "int holds numbers only. Use string name = \"Bob\";"; i++;

    q[i].category = 2; q[i].text = "How many variables are declared here?  int a, b, c;";
    q[i].options[0] = "2"; q[i].options[1] = "4";
    q[i].options[2] = "3"; q[i].options[3] = "1";
    q[i].answer = 2; q[i].explanation = "int a, b, c; declares three int variables at once."; i++;

    q[i].category = 2; q[i].text = "int x = 3; x *= 4; What is x?";
    q[i].options[0] = "7"; q[i].options[1] = "34";
    q[i].options[2] = "4"; q[i].options[3] = "12";
    q[i].answer = 3; q[i].explanation = "x *= 4 means x = x * 4 = 3 * 4 = 12."; i++;
}