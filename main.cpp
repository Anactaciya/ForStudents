#include <iostream>

#include "some_functions.h"




int main() {
    //std::cout << FindFib(45);
    //std::cout << "Rec = " << FindFibRec(43) << "; Arr = " << FindFibArr(43) << "; Simple = " << FindFib(43) << std::endl;
    double * parr  = new double[9] {1.0, 2.0, 3.0, 0, 1.0, 2.0, 3.0, 4.0, 5.0};


    std::cout << parr[3];
    return 0;
}
