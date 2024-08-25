#include<iostream>
using namespace std;
void Pascal(int size,int arr[5][5]){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<=i;j++){
            if(j==0||j==i){
                cout<<"1"<<" ";
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
main(){
    int arr[5][5];
    int size=5;
    Pascal(size,arr);
}

