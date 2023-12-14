#pragma once
#include <iostream>

class pointerWrapper {
public:
    pointerWrapper(int value);
    ~pointerWrapper();

    void print() const;

private:
    int* p;
};
