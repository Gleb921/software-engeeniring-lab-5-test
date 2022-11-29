#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Gleba\source\repos\ConsoleApplication27\ConsoleApplication27\ConsoleApplication27.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestS
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		TEST_METHOD(calculate_getnegative10and10_expected0)

		{
			double x = -10;
			int n = 10;
			double expected = 0;

			double actual = calculate(x, n);
			Assert::AreEqual(expected, actual);
		}
	};


	TEST_CLASS(checkBounds_Tests)
	{
	public:
		TEST_METHOD(checkBounds_get2and12_exceptionNotThrown)
		{
			int a = 2;
			int b = 12;

			try
			{
				checkBounds(a, b);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail;
			}
		}


	public:
		TEST_METHOD(checkBounds_get10and5_exceptionThrown)
		{
			int a = 10;
			int b = 5;

			try
			{
				checkBounds(a, b);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

	TEST_CLASS(checkUpperBound_Tests)
	{
	public:
		TEST_METHOD(checkUpperBound_get5_exceptionNotThrown)
		{
			int n = 5;

			try

			{
				checkUpperBound(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkUpperBound_get1_exceptionThrown)
		{
			int n = 1;

			try
			{
				checkUpperBound(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

	TEST_CLASS(checkStep_Tests)

	{
	public:
		TEST_METHOD(checkStep_get3_exceptionNotThrown)
		{
			int h = 3;

			try
			{
				checkStep(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkStep_getnegative5_exceptionThrown)
		{
			int h = -5;

			try
			{
				checkStep(h);
				Assert::Fail();
			}

			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

}
