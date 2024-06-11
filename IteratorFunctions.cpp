#include "IteratorFunctions.hpp"

bool isPrime(const int& num) {
    if(num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void removePrimeNumsFromVec(std::vector<int>& vec) {
    std::vector<int>::iterator it = vec.begin();
    std::vector<int>::iterator itEnd = vec.end();
    while(it != itEnd) {
        if (isPrime(*it)) {
            it = vec.erase(it);
        }
        else {
            ++it;
        }
    }
}

void removeLowerThatArithmeticAverage(std::list<int>& thisList) {
    std::list<int>::iterator it = thisList.begin();
    std::list<int>::iterator itEnd = thisList.end();
    int average = arithmeticAverageList(thisList);
    while (it != itEnd) {
        if (*it < average) {
            it = thisList.erase(it);
        }
        else {
            ++it;
        }
    }
    
}

void printVec(std::vector<int>& vec) {
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
}

void printList(std::list<int>& thisList) {
    for (std::list<int>::iterator it = thisList.begin(); it != thisList.end(); ++it) {
        std::cout << *it << " ";
    }
}

int arithmeticAverageList(std::list<int>& thisList) {
    int sum = 0;
        for (std::list<int>::iterator it = thisList.begin(); it != thisList.end(); ++it) {
            sum += *it;
        }
    return sum / thisList.size();
}