#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.6/Rational1.h"
#include "../lab1.6/Rational1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational1::Pair a, b;
			Rational1 f;
			a.Init(1, 2);
			b.Init(4, 3);

			double res1, res2;
			res1 = f.ComparePairs(a, b);
			res2 = f.ComparePairs(a, b);
			Assert::AreEqual(res1, 2.0);
			Assert::AreEqual(res2, 2.0);
		}
		
	};
}
