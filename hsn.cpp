#include<bits/stdc++.h>
using namespace std;

int main(){
    
//array input part
int n;
cout<<"Array Size: ";cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

//pre storing/ calculating
int hash[13]={0};
for(int i=0;i<n;i++){
    hash[a[i]]++;
}

//query part
int q;
cout<<"Enter total queries: ";cin>>q;
while(q--){
    int num;
    cout<<"Enter number to fetch freq. :";cin>>num;
    cout<<hash[num]<<endl;
}
return 0;
}
