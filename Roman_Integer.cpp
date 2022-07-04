#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> n;
    string s ="III";
    n={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int sum =0 ;
    for(int i =0 ;i<s.size();i++){
        if (n[s[i+1]]>n[s[i]])
        {
            sum =sum +(n[s[i+1]]-n[s[i]]);
            i++;
        }
        sum =sum + n[s[i]];
    }
    cout<<sum;
return 0;
}