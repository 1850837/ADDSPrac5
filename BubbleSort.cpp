#include "BubbleSort.h"

BubbleSort::BubbleSort(){

}

std::vector<int> BubbleSort::sort(std::vector<int> list){
    //dummy variable for swaps
    int dummy;

    //algorithm
    for (int i = list.size() - 1; i > 1; i--){
        for (int j = 0; j < i; j++){
            if(list[j] > list[j + 1]){
                dummy = list[j];
                list[j] = list[j + 1];
                list[j + 1] = dummy;
            }
        }
    }

    return list;
}