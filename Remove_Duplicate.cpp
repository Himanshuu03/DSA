#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,1,2,3,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i =1 ;i<n;i++){
        if(arr[j]!=arr[i]){
            arr[j+1] =arr[i];
            j++;
        }
    }
    for(int i =0 ;i<j+1;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
