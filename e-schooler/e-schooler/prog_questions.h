#pragma once
#include <iostream>
#include <string>
using namespace std;

struct ProgQuestion {
    int category;
    string text;
    string options[4];
    int answer = 0;
    string explanation;
};

void loadProgQuestions(ProgQuestion q[]);