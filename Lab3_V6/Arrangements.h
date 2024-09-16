#pragma once
#include<iostream>
#include<string>

class Arrangement {
private:
	unsigned int n = 0, r = 0;
	unsigned long long getFactorial(unsigned int n);
public:
	void Input();
	unsigned long long getArrangementNoRepetition();
	Arrangement();
	Arrangement(unsigned int n, unsigned int r);
};