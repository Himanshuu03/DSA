#include<iostream>
using namespace std;
//Searching  Element
bool check(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return true;
        }
    }
    return false;
}
//Inserting Element
void insert(int a[],int pos,int ele,int n){
    n++;
    for(int i = n-1 ;i>pos;i--){
        a[i] =a[i-1];
    }
    a[pos]=ele;
    for(int i = 0 ;i<n;i++){
        cout<<a[i]<<" ";
    }
}
//Deleting Element
int main(){
    cout<<"Searching  Element"<<endl;
    int arr[] ={1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int key =2;
    bool ans = check(arr,key,n);
    ans ? cout<<"find" : cout<<"not-find";

    cout<<endl<<"Inserting Element"<<endl;
    int arr2[] ={1,2,3,4,5,6};
    int n2 =sizeof(arr2)/sizeof(arr2[0]);
    int pos =1;
    int element =2;
    insert(arr2,pos,element,n2);
    cout<<endl<<"Deleting Element"<<endl;
    int arr3[] ={1,2,3,4,5,6};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int i =0;
    int ele = 3;
    for(i =0 ;i<n ;i++){
        if(arr3[i]==ele){
            break;
        }
    }
    for(int j = i ;j<n-1;j++){
        arr3[j] = arr3[j+1];
    }
    for(int k = 0 ;k<n-1;k++){
        cout<<arr3[k]<<" ";
    }
return 0;
}
