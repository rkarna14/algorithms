//
// Created by dark-devil on 8/31/17.
//

#include "InsertionSort.h"
#include <iostream>

InsertionSort::InsertionSort(int length, int* unsortedList){
    this->length = length;
    this->unsortedList = unsortedList;
}

void InsertionSort::sortNumbers(){
    this->sortedList = unsortedList;
    for(int j=1; j<length; j++){
        int key = this->sortedList[j];
        int i = j-1;
        while(i>-1 && this->sortedList[i]>key){
            this->sortedList[i+1] = this->sortedList[i];
            i = i-1;
            this->sortedList[i+1] = key;
        }
    }
}

int* InsertionSort::getSortedList() {
    this->sortNumbers();
    return this->sortedList;
}

void InsertionSort::displaySortedList() {
    this->getSortedList();
    for(int i = 0; i<this->length; i++){
        std::cout<<this->sortedList[i]<<std::endl;
    }
}



