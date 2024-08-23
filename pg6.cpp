#include <iostream>
using namespace std;

void traversal(int a[], int size, int& i, int d) {
    i = (i + d) % size;
    int temp = a[i];
    for (int j = i; j < size - 1; j++) {
        a[j] = a[j + 1];
    }
    a[size - 1] = temp;
}

int main(){
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int i = 0;
    int d = 3;
    traversal(a, size, i, d);
    for(i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    return 0;
}