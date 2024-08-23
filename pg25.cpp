 #include<iostream>
using namespace std;
int Zero_matrix(int arr[3][3],int i,int j){
    int temp1=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]==0){
                while(temp1<3){
                    arr[i][temp1]=0;
                    arr[temp1][j]=0;
                    temp1++;
                }
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
main(){
    int arr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
    int i,j;
    Zero_matrix(arr,i,j);
}
