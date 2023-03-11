#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(getPerimeter_TEST)
		{
			// This unit test will test the getPerimeter function in the main code
			int len = 20;
			int wid = 40;
			int answer = 120;
			int result = getPerimeter(&len, &wid);
			Assert::AreEqual(answer, result);

		}

		TEST_METHOD(getArea_TEST)
		{
			// This unit test will test the getArea function in the main code
			int answer;
			int len = 10;
			int wid = 20;
			answer = getArea(&len, &wid);
			Assert::AreEqual(200, answer);
		}
		TEST_METHOD(setLength_inrange_TEST)
		{
			// This unit test will test the setLength function that the len is out of the given range or not 
			int len;
			setLength(97, &len);
			Assert::AreEqual(97, len);
		}
		TEST_METHOD(setLength_negativerange_TEST)
		{
			// This unit test will test the setLength function that the len is in negative or not 
			int len;
			setLength(-8, &len);
			Assert::AreEqual(-8, len);
		}
		TEST_METHOD(setLength_outrange_TEST)
		{
			// This unit test will test the setLength function that the len is out of the given range or not 
			int len;
			setLength(899, &len);
			Assert::AreEqual(899, len);
		}
		TEST_METHOD(setWidth_inrange_TEST)
		{
			// This unit test will test the setWidth function that the len is out of the given range or not 
			int wid;
			setWidth(92, &wid);
			Assert::AreEqual(92, wid);
		}
		TEST_METHOD(setWidth_outrange_TEST)
		{
			// This unit test will test the setWidth function that the len is out of the given range or not 
			int wid;
			setWidth(857889, &wid);
			Assert::AreEqual(857889, wid);
		}
		TEST_METHOD(setWidth_negative_TEST)
		{
			// This unit test will test the setWidth function that the len is in negative or not 
			int wid;
			setWidth(-789, &wid);
			Assert::AreEqual(-789, wid);
		}

	};
}