#include<iostream>
using namespace std;
int Reverse_pair(int arr[],int size){
    int i,j,count=0;
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(arr[i]>2*arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[5]= {1,3,2,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<Reverse_pair(arr,size);
}