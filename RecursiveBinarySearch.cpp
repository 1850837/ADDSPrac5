#include "RecursiveBinarySearch.h"
#include <math.h>

bool RecursiveBinarySearch::search(std::vector<int> list, int object){
    int a = searchingFunction(list, object, 0, list.size() - 1);
    if (a == -1){
        return false;
    }
    else {
        return true;
    }
}

int RecursiveBinarySearch::searchingFunction(std::vector<int> list, int object, int start, int end){
    //variables
    int middle = floor((end + start) / 2);

    //base case (one element)
    if (start == end){
        if (list[start] == object){
            return start;
        }
        else {
            return -1;
        }
    }

    //base case (two elements)
    if ((end - start) == 1){
        for (int i = start; i < (end + 1); i++){
            if (list[i] == object){
                return i;
            }
        }

        return -1;
    }

    //examining the middle element
    if (list[middle] == object){
        return middle;
    }

    else {
        int dummyA = searchingFunction(list, object, start, middle - 1);
        int dummyB = searchingFunction(list, object, middle + 1, end);

        if (dummyA != -1){
            return dummyA;
        }

        if (dummyB != -1){
            return dummyB;
        }

        return -1;
    }

    // return -1;
}