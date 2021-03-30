#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3.3B/Money.cpp"
#include "../Project3.3B/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),b(0,0,0,0,0,0,0,0,0,0,0);
			bool k = a.getk500();
			Assert::AreEqual(k,false);

		}
	};
}
