#include "StirBellDigits.h"

StirBellDigits::StirBellDigits() {
	this->F.resize(this->N, vector<unsigned int>(this->N, 0));
	this->B.resize(this->N, 0);
	calcStirlingDigits();
}

StirBellDigits::StirBellDigits(unsigned int N) {
    this->N = N;
    this->F.resize(this->N, vector<unsigned int>(this->N, 0));
    this->B.resize(this->N, 0);
    calcStirlingDigits();
}

bool StirBellDigits::checkStirlingDigit(int row, int column, int val) {
    row--;
    column--;
    if (row >= this->N || column >= this->N)
        return false;
    if (this->F[row][column] == val)
        return true;
    else return false;
}

bool StirBellDigits::checkBellDigit(int number, int val) {
    number--;
    if (number >= this->N)
        return false;
    if(this->B[number] == val)
        return true;
    else return false;
}

void StirBellDigits::calcStirlingDigits() {
	for (size_t j = 0; j < N; j++) {
		this->F[j][0] =1;
		this->F[j][j] = 1;
	}
	for (size_t j = 2; j < N; j++) 
		for (size_t k = 1; k < j; k++) 
			F[j][k] = F[j - 1][k - 1] + (k + 1) * F[j - 1][k];	

	for (size_t j = 0; j < N; j++)
		for (size_t k = 0; k < N; k++)
			B[j] += F[j][k];    
}

void StirBellDigits::printTable() {
    
    cout << "+-----";
    for (size_t j = 0; j < N; j++) {
        cout << "+--------";
    }
    cout << "+------------+" << endl;

    cout << "| n\\k ";
    for (size_t j = 0; j < N; j++) {
        cout << "| " << setw(6) << j + 1 << " ";
    }
    cout << "|  F(n)      |" << endl;

    cout << "+-----";
    for (size_t j = 0; j < N; j++) {
        cout << "+--------";
    }
    cout << "+------------+" << endl;

    for (size_t j = 0; j < N; j++) {
        cout << "| " << setw(3) << j + 1 << " ";
        for (size_t k = 0; k < N; k++) {
            if (F[j][k] != 0) {
                cout << "| " << setw(6) << F[j][k] << " ";
            }
            else {
                cout << "| " << setw(6) << "-" << " ";
            }
        }
        cout << "| " << setw(8) << B[j] << "   |" << endl;

        cout << "+-----";
        for (size_t k = 0; k < N; k++) {
            cout << "+--------";
        }
        cout << "+------------+" << endl;
    }
}
