#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include "utils.h"
#include "math_questions.h"
using namespace std;

void runTest() {
    Question test[31];
    loadQuestions(test);

    int totalQ = 31;
    int testQ = 20;
    double score = 0;
    double maxScore = 0;

    int index[31];
    for (int i = 0; i < totalQ; i++) {
        index[i] = i;
    }
    mt19937 rng(time(0));
    shuffle(index, index + totalQ, rng);

    clearScreen(); mathBanner();

    cout << bold(yellow("\n  === TEST: 20 Random Questions ===\n"));
    cout << "  Answer with A, B, C or D.\n";
    pressEnter();

    for (int i = 0; i < testQ; i++) {
        clearScreen(); mathBanner();

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
            if (answer >= 'a' && answer <= 'd') {
                answer -= 32;
            }
            if (answer >= 'A' && answer <= 'D') {
                break;
            }
            else {
                cout << red("  Please enter A, B, C or D.\n");
            }
        }

        if (test[y].category == 0) maxScore += 1;
        else if (test[y].category == 1) maxScore += 2;
        else if (test[y].category == 2) maxScore += 3;

        if (answer - 'A' == test[y].answer) {
            cout << green("\n  CORRECT!\n");
            if (test[y].category == 0) {
                score += 1;
            }
            else if (test[y].category == 1) {
                score += 2;
            }
            else if (test[y].category == 2) {
                score += 3;
            }
            pressEnter();
        }
        else {
            cout << red("\n  WRONG. ") << test[y].explanation << "\n";
            pressEnter();
        }
    }
    clearScreen(); mathBanner();
    cout << bold(yellow("\n  === RESULT ===\n\n"));
    double percent = (score * 100) / maxScore;
    cout << "  Your score: " << score << " / " << maxScore << "\n";
    cout << "  Percent: " << fixed << setprecision(2) << percent << "%\n";

    if (percent >= 88) {
        cout << green("  Grade: A\n");
    }
    else if (percent >= 63) {
        cout << yellow("  Grade: B\n");
    }
    else if (percent >= 38) {
        cout << cyan("  Grade: C\n");
    }
    else if (percent >= 25) {
        cout << cyan("  Grade: D\n");
    }
    else {
        cout << red("  Grade: F\n");
    }
    cout << "\n Press ENTER to continue...";
    cin.ignore();
}