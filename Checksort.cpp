#include<iostream>
using namespace std;
bool sorted(int arr[],int size){
    for(int i =0 ;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] ={2,3,1,3,1,6,7,9,8};
    int n =sizeof(arr) /sizeof(arr[0]);
    bool ans = sorted(arr,n);
    ans ? cout << "Sorted" : cout << "Not sorted";
return 0;
}
