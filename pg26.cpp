#include<iostream>
using namespace std;
void Rotate(int arr[3][3],int i,int j){
    for(j=0;j<3;j++){
        for(i=2;i>=0;i--){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    Rotate(arr,i,j);
}
