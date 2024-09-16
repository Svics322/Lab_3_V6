#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

class StirBellDigits {
private:
	const unsigned int i = 6;
	unsigned int N = i + 5;
	
	vector<vector<unsigned int>> F;
	vector<unsigned int> B;

	void calcStirlingDigits();	
public:	
	bool checkStirlingDigit(int row, int column, int val);
	bool checkBellDigit(int number, int val);
	
	void printTable();

	StirBellDigits();
	StirBellDigits(unsigned int N);
};