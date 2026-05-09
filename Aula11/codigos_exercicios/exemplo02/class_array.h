#include <iostream>

using namespace std;

template <typename T>
class MyArray {
    private:
        T* p;
        int size;
    public:
        MyArray(T array[], int s);
        void print();
        T* ordenaArray(int s);
};

template <typename T>
MyArray<T>::MyArray(T array[], int s) {
    p = new T[s];
    size = s;
    for(int i = 0; i < size; i++) {
        p[i] = array[i];
    }
}

template <typename T>
void MyArray<T>::print() {
    for(int i = 0; i < size; i++) {
        cout << " " << *(p + i);
    }
    cout << endl;
}

template <typename T>
T* MyArray<T>::ordenaArray(int s) {
    int trocou = 1;
    while (trocou == 1)
    {
        trocou = 0;
        for (int i = 0; i < s-1; i++)
        {
            if (p[i] > p[i+1])
            {
                T aux = 0;
                aux = p[i];
                p[i] = p[i+1];
                p[i+1] = aux;
                trocou = 1;
            }
        }
    }
    return p;
}

