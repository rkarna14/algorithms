#include <iostream>
#include "algos/InsertionSort.h"

using namespace std;

int main() {
    int numbers[] = {5, 2, 4, 6, 1, 3};
    InsertionSort isort(6, numbers);
    isort.displaySortedList();
    return 0;
}