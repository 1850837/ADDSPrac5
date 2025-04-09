#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch{
    public:
    bool search(std::vector<int>, int);
    int searchingFunction(std::vector<int> list, int object, int start, int end);
};

#endif