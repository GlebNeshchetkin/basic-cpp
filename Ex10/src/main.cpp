// Copyright 2020 GN
#include <string>
#include <iostream>
#include "postfix.h"
int main() {
    std::string s1("2 + 6 * 3 / (4 - 2)");
    std::string s2 = infix2postfix(s1);
    std::cout << s2;  // 2 6 3 * 4 2 - / +
    std::string s3("2 + 2");
    std::string s4 = infix2postfix(s3);
    std::cout << s4;  // 2 2 +
    std::string s5("(2 + 8.3) * (6 - 3.2)");
    std::string s6 = infix2postfix(s5);
    std::cout << s6;  // 2 8.3 + 6 3.2 - *
    std::string s7("(6 * (4 - 2) + 5) * (2.6 + 3 * 7) - 9");
    std::string s8 = infix2postfix(s7);
    std::cout << s8;  // 6 4 2 - * 5 + 2.6 3 7 * + * 9 -
}
