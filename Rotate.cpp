#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,5};
    int key =3;
    int n = sizeof(arr) /sizeof(arr[0]);
    int first =0 ;
    for(int i =0;i< key;i++){
        first =arr[0];
        int j;
        for(j =0;j<n-1;j++){
            arr[j] =arr[j+1];
        }
        arr[j] =first;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
