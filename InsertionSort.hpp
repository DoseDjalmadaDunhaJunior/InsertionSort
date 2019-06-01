//
// Created by josé djalma da cunha júnior on 2019-06-01.
//

#ifndef INSERTIONSORT_INSERTIONSORT_HPP
#define INSERTIONSORT_INSERTIONSORT_HPP
#include <iostream>
using namespace std;

class InsertionSort {
public:
    InsertionSort(int* vet, int tam){
        for (int i = 1; i < tam; i++) {
            int key = vet[i];
            int j = i - 1;
            while ((j > 0) && (vet[j] > key)){
                vet[j+1] = vet[j];
                j--;
            }
            vet[j+1] = key;
        }
    }
};


#endif //INSERTIONSORT_INSERTIONSORT_HPP
