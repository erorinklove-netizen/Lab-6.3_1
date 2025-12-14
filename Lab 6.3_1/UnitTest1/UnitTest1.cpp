#include "pch.h"
#include "CppUnitTest.h"
#include <climits>
#include "D:\education\Lab 6.3_1\Lab 6.3_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int FindMinOdd(int* a, const int size);

template <typename T>
T FindMinOdd(T* a, const int size);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(NoOddNumbers)
        {
            int a[] = { 2, 4, 6, 8 };
            Assert::AreEqual(INT_MAX, FindMinOdd(a, 4));
        }

        TEST_METHOD(AllOddNumbers)
        {
            int a[] = { 7, 3, 9, 5 };
            Assert::AreEqual(3, FindMinOdd(a, 4));
        }

        TEST_METHOD(MixedNumbers)
        {
            int a[] = { 12, 7, 4, 9, 2, 15, 8, 3 };
            Assert::AreEqual(3, FindMinOdd(a, 8));
        }

        TEST_METHOD(NegativeOddNumbers)
        {
            int a[] = { -5, -3, -7, 2 };
            Assert::AreEqual(-7, FindMinOdd(a, 4));
        }

        TEST_METHOD(TemplateInt)
        {
            int a[] = { 11, 6, 9 };
            Assert::AreEqual(9, FindMinOdd<int>(a, 3));
        }
    };
} 