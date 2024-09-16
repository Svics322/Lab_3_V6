#include<Windows.h>
#include"Arrangements.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Arrangement arrangement;
	arrangement.Input();
	arrangement.getArrangementNoRepetition();
}