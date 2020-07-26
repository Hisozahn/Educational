#include <iostream>
#include "child.h"

child::child(unsigned int print_indent) : print_indent{print_indent} {}

void child::print() {
    unsigned int indent = print_indent;

    if (indent > 10)
        indent = 10;

    std::cout << std::string(indent, ' ') << "Child print" << std::endl;
}