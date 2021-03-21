#include "pch.h"
#include "CppUnitTest.h"
#include "../Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point A;
			A.SetX(5);
			int test = A.GetX();
			Assert::AreEqual(test, 2);
		}
	};
}
