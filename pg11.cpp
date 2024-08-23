#include<iostream>
using namespace std;

int Consecutive(int size, int arr[]) {
    int count = 0, c1 = 0;
    for(int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > c1) {
                c1 = count;  
            }
        } else {
            count = 0;  
        }
    }
    return c1;
}

int main() {
    int arr[10] = {0, 0, 0, 1, 1, 1,0, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = Consecutive(size, arr);
    cout << result;
    return 0;
}
