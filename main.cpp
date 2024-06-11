#include <iostream>
#include <vector>
#include <list>
#include "IteratorFunctions.hpp"

int main() {
    std::vector<int> vec = {2, 4, 5, 3, 3, 13, 6, 8};
    
    removePrimeNumsFromVec(vec);
    printVec(vec);

    std::cout << std::endl;

    std::list<int> thisList = {2, 6, 6, 1, 0};

    removeLowerThatArithmeticAverage(thisList);
    printList(thisList);

    return 0;
}