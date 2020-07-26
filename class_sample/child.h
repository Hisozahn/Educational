#ifndef CLASS_SAMPLE_CHILD_H
#define CLASS_SAMPLE_CHILD_H

#include "base.h"

class child : public base {
private:
    unsigned int print_indent;
public:
    // explicit - to deny implicit conversion
    explicit child(unsigned int print_indent);
    // Child's version of print method
    void print() override;
};

#endif //CLASS_SAMPLE_CHILD_H