#include<iostream>
using namespace std;
int main(){
    int n,i,a[]={1,5,4,4,1,4,8,6,3};
    int count=0;
    n=10;
    for(i=0;i<n;i++){
        if(a[i]<a[i+1]){
            count++;
        }
    }
    if(count==n){
        cout<<"ARRAY is sorted";
    }
    else{
        cout<<"ARRAY is not sorted";
        }
}