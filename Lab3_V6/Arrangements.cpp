#include "Arrangements.h"

using namespace std;

unsigned long long Arrangement::getFactorial(unsigned int n) {
	if (n == 0) return 1;
	return n * getFactorial(n - 1);
}

void Arrangement::Input() {
	unsigned int n = 0, r = 0;
	string checkN, checkR;
	do {
		try {
			cout << "������ ������� �������� N(���� ������ �����, �� 0): ";
			getline(cin, checkN);
			if (stol(checkN) <= 0) {
				throw std::out_of_range("N �� ���� ���� 0 ��� ��'�����.");
			}
			n = stoul(checkN);
			cout << "������ ������� ���������� �������� R(���� ������ �����, �� 0 �� �� ����� �� ������� N): ";
			getline(cin, checkR);
			if (stol(checkR) <= 0 || stoul(checkR) > n) {
				throw std::out_of_range("R �� ���� ���� 0 ��� ������ �� N.");
			}			
			r = stoul(checkR);

			this->n = n;
			this->r = r;
			break;
		}
		catch (const std::invalid_argument&) {
			std::cerr << "����������� ������ ������ ��������, ��������� �� ���" << endl;
			continue;
		}
		catch (const std::out_of_range& e) {
			std::cerr << "����������� ������ ������ ��������, ��������� �� ���" << endl;
			continue;
		}
	} while (true);
}

unsigned long long Arrangement::getArrangementNoRepetition() {
	if (this->n == 0 && this->r == 0) {		
		return 0;
	}
	unsigned long long P1 = getFactorial(this->n);
	unsigned long long P2 = getFactorial(this->n - this->r);
	
	cout << endl << " r     n!" << endl;
	cout << "A = ________  "<< endl;
	cout << " n  (n - r)! " << endl << endl;

	cout << "\t" << this->n << "! / (" << this->n << " - " << this->r << ")! = ";
	cout << P1 << " / " << this->n - this->r << "! = " << P1 << " / " << P2;
	cout << " = " << P1 / P2 << endl;

	cout << " " << this->r << endl;
	cout << "A = " <<  P1 / P2 << endl;
	cout << " " << this->n << endl;

	return P1 / P2;
}

Arrangement::Arrangement(unsigned int n, unsigned int r) {
	if (n < r) {
		return;
	}
	else {
		this->n = n;
		this->r = r;
	}
}

Arrangement::Arrangement() {}