#include<iostream>
using namespace std;
int maximum(int size,int arr[]){
    int max=0,maxi;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            maxi=max;
            maxi=arr[i];
        }
    }
    return maxi;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max1=maximum(size,arr);
    cout<<max1;
    return 0;
}
