 #include<iostream>
using namespace std;
int majority(int size,int arr[]){
    int count=0,Max=0;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=i;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>Max){
                    Max=count;
                }
            }
        }
    }
    return Max;
}
main(){
    int arr[10]={1,2,3,4,5,5,5,5,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int R=majority(size,arr);
    cout<<R;
}
