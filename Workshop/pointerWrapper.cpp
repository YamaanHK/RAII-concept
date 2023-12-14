#include "pointerWrapper.h"

pointerWrapper::pointerWrapper(int value) {
    std::cout << "Allocating memory for int pointer" << std::endl;
    p = new int(value);
}

pointerWrapper::~pointerWrapper() {
    std::cout << "Releasing memory from int pointer" << std::endl;
    delete p;
}

void pointerWrapper::print() const {
    std::cout << "Hi, I am a wrapped pointer with value: " << *p << std::endl;
}
