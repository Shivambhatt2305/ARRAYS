#include<iostream>
using namespace std;
int inversions(int arr[],int size){
    int i,j,count=0;
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(i<j){
                if(arr[j]<arr[i]){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int arr[5]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int r=inversions(arr,size);
    cout<<r;
}