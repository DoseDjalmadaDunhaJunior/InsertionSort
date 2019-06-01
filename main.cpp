#include "InsertionSort.hpp"
int main() {
    int vet[] = {6,4,2,9,4,0,1,4,0,12}; //tam 10
    for (int i = 0; i < 10; i++) {
        cout<<vet[i]<<" ";
    }
    puts("");
    InsertionSort(vet,10);
    for (int j = 0; j < 10; j++) {
        cout<<vet[j]<<" ";
    }
    puts("");
    return 0;
}