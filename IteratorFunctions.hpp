#ifndef __ITERATORFUNCTIONS__
#define __ITERATORFUNCTIONS__
#include <iostream>
#include <vector>
#include <list>
#include <cmath>

void printVec(std::vector<int>& vec);
void printList(std::list<int>& thisList);
void removePrimeNumsFromVec(std::vector<int>& vec);
bool isPrime(const int& num);
int arithmeticAverageList(std::list<int>& thisList);
void removeLowerThatArithmeticAverage(std::list<int>& thisList);

#endif // __ITERATORFUNCTIONS__