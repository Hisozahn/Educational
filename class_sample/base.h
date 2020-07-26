#ifndef CLASS_SAMPLE_BASE_H
#define CLASS_SAMPLE_BASE_H


class base {
public:
    // Use default constructor
    base() = default;
    // Declare the method virtual (so that it can be overridden)
    virtual void print();
};


#endif //CLASS_SAMPLE_BASE_H
