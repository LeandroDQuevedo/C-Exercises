#include <iostream>
#include "class_array.h"

#define SIZE 4

using namespace std;

int main() {
    int array[SIZE] = {4,3,2,1};
    int arrayordenado[SIZE];
    MyArray<int> a(array, SIZE);

    a.print();

    MyArray<int> b(array,SIZE);
    b.print();
    b.ordenaArray(SIZE);
    b.print();
    
    
    return 0;
}
