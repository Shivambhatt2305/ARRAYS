#include <iostream>
#include <algorithm>
using namespace std;
void permutation(int size, int arr[]) {
    int index = -1;
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        reverse(arr, arr + size);
        return;
    }
    for (int i = size - 1; i > index; i--) {
        if (arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr + index + 1, arr + size);
}
int main() {
    int arr[3] = {1,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    permutation(size, arr);
    cout << "Next permutation: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
