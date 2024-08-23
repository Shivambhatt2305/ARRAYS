#include <iostream>
using namespace std;
void traversal(int a[], int size, int d) { 
    for (int i = 0; i < size; i++) {
        cout << a[(i + d) % size] << " ";
    }
}

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int d = 4;
    
    traversal(a, size, d);
    return 0;
}