#include<bits/stdc++.h>
using namespace std;

int main(){
    //string input
    string s;
    cout<<"enter string: ";cin>>s;

    //pre store freq of characters
    int hash[256]={0}; //256 cause there are 256 ascii charcters
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    //output an query
    int q;
    cout<<"number of queries: ";cin>>q;
    while(q--){
        char c;
        cout<<"enter character: ";cin>>c;
        cout<<"freq. is: "<<hash[c]<<endl;
    }
    return 0;
}