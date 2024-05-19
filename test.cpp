#include "pch.h"
#include <vector>
TEST(TestCaseName, TestName) {
	vector<int> test(4);
	voidHuge(test, 6);
	ASSERT_EQ(test.size(), 10);
}