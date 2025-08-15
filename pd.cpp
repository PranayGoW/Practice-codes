#include<bits/stdc++.h>
using namespace std;

bool pd(int i, string &s);

//main function
int main(){
    string s="madsm";
    cout<<pd(0,s);
    return 0;
}

//the function to check palindrome
bool pd(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return pd(i+1,s);
}