#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab3_V6\Arrangements.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(checkV6)
		{
			Arrangement arrangement = Arrangement(10, 9);
			unsigned long long res = arrangement.getArrangementNoRepetition();
			Assert::AreEqual((int)res, 3'628'800);
		}
		TEST_METHOD(checkV6_Error)
		{
			Arrangement arrangement = Arrangement(10, 9);
			unsigned long long res = arrangement.getArrangementNoRepetition();
			Assert::AreEqual((int)res, 3'028'800);
		}
		TEST_METHOD(check)
		{
			Arrangement arrangement = Arrangement(15, 5);
			unsigned long long res = arrangement.getArrangementNoRepetition();
			Assert::AreEqual((int)res, 360'360);
		}
	};
}
