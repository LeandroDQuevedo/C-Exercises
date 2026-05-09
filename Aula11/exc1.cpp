#include <iostream>

using namespace std;

template <typename M>
M mult_function(M a, M b) {
    return a*b;  
}

int main() {

    cout << mult_function<int>(4,5) << endl;
    cout << mult_function<double>(4.8,3.9) << endl;

    return 0;
}

