#pragma once
#include <iostream>
#include <string>
using namespace std;

extern const int totalQ;
extern const int testQ;

extern int qCat[];
extern string qText[];
extern string qOpt[][4];
extern int qAns[];
extern string qExp[];

void loadQuestions();