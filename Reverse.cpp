#include<iostream>
using namespace std;
int main(){
    int arr[] ={2,3,1,3,1,6,7,9,8};
    int n =sizeof(arr) /sizeof(arr[0]);
    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
return 0;
}
