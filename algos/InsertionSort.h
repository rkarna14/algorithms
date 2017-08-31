//
// Created by dark-devil on 8/31/17.
//

#ifndef ALGORITHMS_INSERTIONSORT_H
#define ALGORITHMS_INSERTIONSORT_H


class InsertionSort {
private:
    int length;
    int* unsortedList;
    int* sortedList;

    void sortNumbers();

public:
    InsertionSort(int length, int* unsortedList);

    int *getSortedList();

    void displaySortedList();
};


#endif //ALGORITHMS_INSERTIONSORT_H
