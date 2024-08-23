 #include<iostream>
using namespace std;
void Spiral(int arr[3][3],int i,int j){
    int right=2,left=0,top=0,bottom=2;
    for(i=left;i<=right;i++){
        cout<<arr[top][i];
    }
    for(i=++top;i<=bottom;i++){
        cout<<arr[i][right];
    }
    for(i=--right;i>=left;i--){
        cout<<arr[bottom][i];
    }
    for(i=--bottom;i<top;i--){
        cout<<arr[left][i];
    }
    for(i=left;i<=right;i++){
        cout<<arr[bottom][i];
    }
}
main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    Spiral(arr,i,j);
}

