
#include "pointerWrapper.h"

int main() {
    {
        pointerWrapper p(1);
        p.print();
    }

    std::cout << std::endl << "Doing other stuff in the program..." << std::endl << std::endl;

    pointerWrapper pW(64);
    pW.print();

    return 0;
}
