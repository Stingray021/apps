#include "pch.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"
#include "gtest/gtest.h"

TEST(TestCaseName, TestName) {
  char* str = findWords("aaa", 'a');
  ASSERT_STREQ("aaa", str);
}