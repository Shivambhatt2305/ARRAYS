#include<iostream>
using namespace std;
void traversal(int a[], int &size, int i) {
    size++;
    a[size-1] = a[0];
    for(i=0; i<size-1; i++){
        a[i] = a[i+1];
    }
    size--;
}
int main(){
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int i;
    traversal(a, size, i);
    for(i=0; i<size; i++){
        cout << a[i] << " ";
    }
    return 0;
}
