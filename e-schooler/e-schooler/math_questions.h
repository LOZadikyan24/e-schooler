#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Question {
    int category = 0;
    string text;
    string options[4];
    int answer = 0;
    string explanation;
};

void loadQuestions(Question q[]);