#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int R;
			double x = 5;
			double j = 2;

			R = -(pow(x, 2) / (4 * pow(j, 2) - 2 * j));
			Assert::AreEqual(R, - 25 / 12);
		}
	};
}
