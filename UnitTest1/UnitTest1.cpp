#pragma warning(disable : 4996)
#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1,3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT81SFC
{
	TEST_CLASS(UT81SFC)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;

			t = Count("wewr");

			Assert::AreEqual(t, 0);
		}
	};
}