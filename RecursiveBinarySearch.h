#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch{
    public:
    std::vector<int> sort(std::vector<int> list);
    std::vector<int> sortingYay(std::vector<int> list, int object, int start, int end);
};

#endif