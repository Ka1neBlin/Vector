#include "pch.h"
#include <vector>
TEST(TestCaseName, TestName) {
	vector<int> vec = { 1, 2, 3 };
	vector<int> returned = increace(vec, 1);
	ASSERT_EQ(returned[0], 2);
	voidIncreace(vec, 2);
	ASSERT_EQ(vec[0], 3);
}