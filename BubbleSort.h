#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"

class BubbleSort : public Sort {
    private:

    public:
    BubbleSort();
    std::vector<int> sort(std::vector<int> list) override;
};

#endif