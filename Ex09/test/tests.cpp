/*// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
	MyStack<int> st(5);
	EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test2) {
	MyStack<char> st(5);
	EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test3) {
	MyStack<int> st(5);
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test4) {
	MyStack<int> st(5);
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	EXPECT_EQ(true, st.isFull());
}
TEST(MyStackTest, test5) {
	MyStack<int> st(5);
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	EXPECT_EQ(1, st.get());
}
TEST(MyStackTest, test6) {
	MyStack<int> st(5);
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	st.pop();
	EXPECT_EQ(2, st.pop());
}
TEST(MyStackTest, test7) {
	MyStack<char> st(5);
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');
	st.push('e');
	st.pop();
	st.pop();
	EXPECT_EQ('c', st.pop());
}
TEST(MyStackTest, test8) {
	MyStack<char> st(5);
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');
	st.push('e');
	st.pop();
	st.pop();
	EXPECT_EQ('c', st.get());
}
TEST(MyStackTest, test9) {
	MyStack<int> st(5);
	EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test10) {
	MyStack<int> st(5);
	EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test11) {
	MyStack<int> st(5);
	EXPECT_EQ(true, st.isEmpty());
}*/
