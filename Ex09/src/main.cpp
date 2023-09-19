// Copyright 2020 GN
#include "MyStack.h"
int main() {
    MyStack<char> st(10);
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('c');
    st.push('c');
    MyStack<char> st1(st);
    std::cout << st.getSize() << " ";
    std::cout << st1.isFull() << " ";
    while (!st1.isEmpty())
        std::cout << st1.pop() << " ";
    std::cout << st1.isFull() << " ";
    std::cout << st1.isEmpty() << " ";
    return 0;
}
