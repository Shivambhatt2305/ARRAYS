#include <iostream>
using namespace std;

void Union(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else {
            cout << arr1[i++] << " ";
            j++;
        }
    
    while (i < n1)
        cout << arr1[i++] << " ";
    while (j < n2)
        cout << arr2[j++] << " ";
}
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of the two arrays is: ";
    Union(arr1, n1, arr2, n2);

    return 0;
}
