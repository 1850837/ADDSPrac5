#include "BubbleSort.h"
#include <iostream>

int main(){

    std::vector<int> list = {9, 8, 7, 6, 0, 3, 5, 2};

    BubbleSort a = BubbleSort();

    list = a.sort(list);

    for (int i = 0; i < 8; i++){
        std::cout << list[i] << " ";
    }
    std::cout << "\n";

    return 0;
}