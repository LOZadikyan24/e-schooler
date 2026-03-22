#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "utils.h"
using namespace std;

void showMathStats() {
    clearScreen(); mathBanner();
    cout << bold(yellow("\n  === MATHEMATICS STATISTICS ===\n\n"));

    const int MAX = 100;
    string names[MAX];
    double scores[MAX];
    double maxScores[MAX];
    double percents[MAX];
    string grades[MAX];
    int count = 0;

    ifstream inFile("math_results.txt");
    if (inFile.is_open() != true) {
        cout << red("  No results yet. No student has taken the test.\n");
        pressEnter();
        return;
    }

    string line;
    while (getline(inFile, line) && count < MAX) {
        if (line.empty()) continue;
        int c1 = line.find(',');
        int c2 = line.find(',', c1 + 1);
        int c3 = line.find(',', c2 + 1);
        int c4 = line.find(',', c3 + 1);
        names[count] = line.substr(0, c1);
        scores[count] = stod(line.substr(c1 + 1, c2 - c1 - 1));
        maxScores[count] = stod(line.substr(c2 + 1, c3 - c2 - 1));
        percents[count] = stod(line.substr(c3 + 1, c4 - c3 - 1));
        grades[count] = line.substr(c4 + 1);
        count++;
    }
    inFile.close();

    if (count == 0) {
        cout << red("  No results found.\n");
        pressEnter();
        return;
    }

    int best = 0, worst = 0;
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += percents[i];
        if (percents[i] > percents[best])  best = i;
        if (percents[i] < percents[worst]) worst = i;
    }
    double avg = total / count;

    string avgGrade;
    if (avg >= 88) avgGrade = "6";
    else if (avg >= 63) avgGrade = "5";
    else if (avg >= 38) avgGrade = "4";
    else if (avg >= 25) avgGrade = "3";
    else avgGrade = "2";

    cout << "  Total students tested: " << count << "\n\n";

    cout << green("  HIGHEST SCORE\n");
    cout << "  Student : " << names[best] << "\n";
    cout << "  Score   : " << scores[best] << " / " << maxScores[best] << "\n";
    cout << "  Percent : " << fixed << setprecision(2) << percents[best] << "%\n";
    cout << "  Grade   : " << grades[best] << "\n\n";

    cout << red("  LOWEST SCORE\n");
    cout << "  Student : " << names[worst] << "\n";
    cout << "  Score   : " << scores[worst] << " / " << maxScores[worst] << "\n";
    cout << "  Percent : " << fixed << setprecision(2) << percents[worst] << "%\n";
    cout << "  Grade   : " << grades[worst] << "\n\n";

    cout << yellow("  AVERAGE\n");
    cout << "  Average percent : " << fixed << setprecision(2) << avg << "%\n";
    cout << "  Average grade   : " << avgGrade << "\n\n";

    cout << cyan("  ALL RESULTS\n");
    cout << "  " << left
        << setw(20) << "Name"
        << setw(12) << "Score"
        << setw(10) << "Percent"
        << setw(8) << "Grade" << "\n";
    cout << "  " << string(48, '-') << "\n";
    for (int i = 0; i < count; i++) {
        string scoreStr = to_string((int)scores[i]) + "/" + to_string((int)maxScores[i]);
        string pctStr = to_string((int)percents[i]) + "%";
        cout << "  " << left
            << setw(20) << names[i]
            << setw(12) << scoreStr
            << setw(10) << pctStr
            << setw(8) << grades[i] << "\n";
    }

    pressEnter();
}

void showProgStats() {
    clearScreen(); progBanner();
    cout << bold(yellow("\n  === PROGRAMMING STATISTICS ===\n\n"));

    const int MAX = 100;
    string names[MAX];
    double scores[MAX];
    double maxScores[MAX];
    double percents[MAX];
    string grades[MAX];
    int count = 0;

    ifstream inFile("prog_results.txt");
    if (inFile.is_open() != true) {
        cout << red("  No results yet. No student has taken the test.\n");
        pressEnter();
        return;
    }

    string line;
    while (getline(inFile, line) && count < MAX) {
        if (line.empty()) continue;
        int c1 = line.find(',');
        int c2 = line.find(',', c1 + 1);
        int c3 = line.find(',', c2 + 1);
        int c4 = line.find(',', c3 + 1);
        names[count] = line.substr(0, c1);
        scores[count] = stod(line.substr(c1 + 1, c2 - c1 - 1));
        maxScores[count] = stod(line.substr(c2 + 1, c3 - c2 - 1));
        percents[count] = stod(line.substr(c3 + 1, c4 - c3 - 1));
        grades[count] = line.substr(c4 + 1);
        count++;
    }
    inFile.close();

    if (count == 0) {
        cout << red("  No results found.\n");
        pressEnter();
        return;
    }

    int best = 0, worst = 0;
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += percents[i];
        if (percents[i] > percents[best])  best = i;
        if (percents[i] < percents[worst]) worst = i;
    }
    double avg = total / count;

    string avgGrade;
    if (avg >= 92) avgGrade = "6";
    else if (avg >= 75) avgGrade = "5";
    else if (avg >= 59) avgGrade = "4";
    else if (avg >= 50) avgGrade = "3";
    else avgGrade = "2";

    cout << "  Total students tested: " << count << "\n\n";

    cout << green("  HIGHEST SCORE\n");
    cout << "  Student : " << names[best] << "\n";
    cout << "  Score   : " << scores[best] << " / " << maxScores[best] << "\n";
    cout << "  Percent : " << fixed << setprecision(2) << percents[best] << "%\n";
    cout << "  Grade   : " << grades[best] << "\n\n";

    cout << red("  LOWEST SCORE\n");
    cout << "  Student : " << names[worst] << "\n";
    cout << "  Score   : " << scores[worst] << " / " << maxScores[worst] << "\n";
    cout << "  Percent : " << fixed << setprecision(2) << percents[worst] << "%\n";
    cout << "  Grade   : " << grades[worst] << "\n\n";

    cout << yellow("  AVERAGE\n");
    cout << "  Average percent : " << fixed << setprecision(2) << avg << "%\n";
    cout << "  Average grade   : " << avgGrade << "\n\n";

    cout << cyan("  ALL RESULTS\n");
    cout << "  " << left
        << setw(20) << "Name"
        << setw(12) << "Score"
        << setw(10) << "Percent"
        << setw(8) << "Grade" << "\n";
    cout << "  " << string(48, '-') << "\n";
    for (int i = 0; i < count; i++) {
        string scoreStr = to_string((int)scores[i]) + "/" + to_string((int)maxScores[i]);
        string pctStr = to_string((int)percents[i]) + "%";
        cout << "  " << left
            << setw(20) << names[i]
            << setw(12) << scoreStr
            << setw(10) << pctStr
            << setw(8) << grades[i] << "\n";
    }

    pressEnter();
}