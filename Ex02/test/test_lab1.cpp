#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(2.500000, average(2.0, 3.0));

}
TEST(task1, test2)
{
    ASSERT_EQ(0.000000, good(5.0, 8.0));

}
TEST(task1, test3)
{
    ASSERT_FLOAT_EQ(4.142857, improve(7.0, 9.0));

}
TEST(task1, test4)
{
    ASSERT_FLOAT_EQ(23.724460, calc(562.85));

}
TEST(task1, test5)
{
    ASSERT_FLOAT_EQ(6.708204, calc(45.0));

}
TEST(task1, test6)
{
    ASSERT_FLOAT_EQ(9.380832, calc(88.0));

}
TEST(task1, test7)
{
    ASSERT_FLOAT_EQ(3.000000, iter(7.0, 9.0));

}
TEST(task1, test8)
{
    ASSERT_FLOAT_EQ(8.602325, iter(85.0, 74.0));

}
TEST(task1, test9)
{
    ASSERT_FLOAT_EQ(1.000000, good(0.0, 0.0));

}
TEST(task1, test10)
{
    ASSERT_FLOAT_EQ(27.404379, calc(751.0));

}

