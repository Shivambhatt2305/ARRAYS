#include<iostream>
using namespace std;
int Count_Sums(int size,int arr[],int key){
    int i,j,count=0,sum;
    for(i=0;i<size-1;i++){
        sum=0;
        for(j=0;j<size;j++){
            if(arr[j]!=key){
                sum+=arr[j];
                if(sum==key){
                    count++;
                }
            }
        }
    }
    return count;
    }
main(){
    int arr[3]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int R=Count_Sums(size,arr,key);
    cout<<R;
}

