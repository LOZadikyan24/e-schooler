#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include "utils.h"
#include "prog_questions.h"
using namespace std;

// Runs the 20‑question programming test
void runProgTest() {
    ProgQuestion test[32];
    loadProgQuestions(test);

    int totalQ = 32;
    int testQ = 20;
    double score = 0;
    double maxScore = 0;

    // Separate questions by category
    int theory[12], basic[11], applied[9];
    int tCount = 0, bCount = 0, aCount = 0;
    for (int i = 0; i < totalQ; i++) {
        if (test[i].category == 0) theory[tCount++] = i;
        else if (test[i].category == 1) basic[bCount++] = i;
        else if (test[i].category == 2) applied[aCount++] = i;
    }
    mt19937 rng(time(0));
    shuffle(theory, theory + tCount, rng);
    shuffle(basic, basic + bCount, rng);
    shuffle(applied, applied + aCount, rng);

    int index[20];
    for (int i = 0; i < 8; i++) {
        index[i] = theory[i];
    }
    for (int i = 0; i < 7; i++) index[8 + i] = basic[i];
    for (int i = 0; i < 5; i++) index[15 + i] = applied[i];
    shuffle(index, index + 20, rng);

    // Get student name
    clearScreen(); progBanner();
    string studentName;
    cout << "\n  Enter your name: ";
    cin.ignore(1000, '\n');
    getline(cin, studentName);
    while (studentName.empty()) {
        cout << red("  Please enter a name: ");
        getline(cin, studentName);
    }

    clearScreen(); progBanner();
    cout << bold(yellow("\n  === TEST: 20 Random Questions ===\n"));
    cout << "  Answer with A, B, C or D.\n";
    cout << "\n  Press ENTER to continue...";
    cin.ignore(1000, '\n');

    // Question loop
    for (int i = 0; i < testQ; i++) {
        clearScreen(); progBanner();

        int y = index[i];
        cout << " Question " << i + 1 << "/20\n" << " " << test[y].text << "\n\n";
        char labels[4] = { 'A', 'B', 'C', 'D' };
        for (int z = 0; z < 4; z++) {
            cout << "  " << labels[z] << ") " << test[y].options[z] << "\n";
        }
        char answer;
        while (true) {
            cout << "\n  Your answer: ";
            cin >> answer;
            cin.ignore(1000, '\n');
            if (answer >= 'a' && answer <= 'd') answer -= 32;
            if (answer >= 'A' && answer <= 'D') break;
            else cout << red("  Please enter A, B, C or D.\n");
        }

        if (test[y].category == 0) maxScore += 1;
        else if (test[y].category == 1) maxScore += 2;
        else if (test[y].category == 2) maxScore += 3;

        if (answer - 'A' == test[y].answer) {
            cout << green("\n  CORRECT!\n");
            if (test[y].category == 0) score += 1;
            else if (test[y].category == 1) score += 2;
            else if (test[y].category == 2) score += 3;
            cout << "\n  Press ENTER to continue...";
            cin.ignore(1000, '\n');
        }
        else {
            cout << red("\n  WRONG. ") << test[y].explanation << "\n";
            cout << "\n  Press ENTER to continue...";
            cin.ignore(1000, '\n');
        }
    }

    // Final results
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === RESULT ===\n\n"));
    double percent = (score * 100.0) / maxScore;

    string grade;
    if (percent >= 92) grade = "6";
    else if (percent >= 75) grade = "5";
    else if (percent >= 59) grade = "4";
    else if (percent >= 50) grade = "3";
    else grade = "2";

    cout << "  Student: " << studentName << "\n";
    cout << "  Score:   " << score << " / " << maxScore << "\n";
    cout << "  Percent: " << fixed << setprecision(2) << percent << "%\n";

    if (grade == "6") cout << green("  Grade: 6\n");
    else if (grade == "5") cout << yellow("  Grade: 5\n");
    else if (grade == "4") cout << cyan("  Grade: 4\n");
    else if (grade == "3") cout << cyan("  Grade: 3\n");
    else                   cout << red("  Grade: 2\n");

    ofstream outFile("prog_results.txt", ios::app);
    if (outFile.is_open()) {
        outFile << studentName << ","
            << score << ","
            << maxScore << ","
            << fixed << setprecision(2) << percent << ","
            << grade << "\n";
        outFile.close();
        cout << green("\n  Result saved to prog_results.txt\n");
    }
    else {
        cout << red("\n  Could not save result.\n");
    }

    cout << "\n  Press ENTER to continue...";
    cin.ignore(1000, '\n');
}
