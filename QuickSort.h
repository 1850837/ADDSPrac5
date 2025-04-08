#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort {
    private:

    public:
    // QuickSort();
    std::vector<int> sort(std::vector<int> list) override;
    std::vector<int> sorterFunction(std::vector<int> list, int start, int end);
};

#endif