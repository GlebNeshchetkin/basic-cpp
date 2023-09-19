// Copyright 2020 GN
#ifndef INCLUDE_POSTFIX_H_
#define INCLUDE_POSTFIX_H_
#include <iostream>
#include <string>
bool isOperator(char c);
int getPriority(char C);
std::string infix2postfix(std::string infix);
#endif  // INCLUDE_POSTFIX_H_
