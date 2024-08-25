#include<iostream>
using namespace std;
int xor_subarrays(int arr[],int size,int key){
    int i,j,count=0,temp;
    for(i=0;i<size;i++){
        temp=0;
        for(j=i;j<size;j++){
            temp=temp^arr[j];
            if(temp==key){
                count++;
            }
        }
    }
    return count;
}
main(){
    int arr[5]={5, 6, 7, 8, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    int result=xor_subarrays(arr,size,key);
    cout<<result;
}
