#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab54ut
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double s;
            s = S0(1);
            Assert::AreEqual(s, 0.390128, 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            double s;
            s = S1(1, 1);
            Assert::AreEqual(s, 0.390128, 0.00001);
        }

        TEST_METHOD(TestMethod3)
        {
            double s;
            s = S2(1, 1);
            Assert::AreEqual(s, 0.390128, 0.00001);
        }

        TEST_METHOD(TestMethod4)
        {
            double s;
            s = S3(1, 1, 0);
            Assert::AreEqual(s, 0.390128, 0.00001);
        }

        TEST_METHOD(TestMethod5)
        {
            double s;
            s = S4(1, 1, 0);
            Assert::AreEqual(s, 0.390128, 0.00001);
        }
    };
}