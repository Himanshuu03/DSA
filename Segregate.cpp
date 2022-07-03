#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,0,2,0,0,1,3,4};
    int  n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0 ;i<n;i++){
        if(arr[i] != 0){
            arr[count] =arr[i];
            count++;
        }
    }
    for(int j =count ;j<n;j++){
        arr[j] = 0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}
