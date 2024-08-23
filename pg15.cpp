#include<iostream>
using namespace std;
void two_sum(int size,int arr[],int sum){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"true"<<endl;
                return;
            }
        }
    }
}
main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=5;
    two_sum(size,arr,sum);
}
