#include<iostream>
using namespace std;
int Max_Sum(int size, int arr[]) {
    int i,j,sum,Maximum=0;
    for(i=0;i<size;i++){
        sum=0;
        for(j=i;j<size;j++){
            sum+=arr[j];
            Maximum=max(Maximum,sum);
        }
    }
    return Maximum;
}
int main() {
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr) / sizeof(arr[0]);   
    int R= Max_Sum(size, arr);
    cout<<R;
    return 0;
}
