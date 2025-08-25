#include<bits/stdc++.h>
using namespace std;

//left rotate aray by d places (brute force)
void lrotd(int a[],int n,int d){
    d=d%n;
    int temp[n];
    //putting prev elemts in temp array
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    //shifting
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    //putting back the elements in original array
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }
}

//optimal way to left rorate array by d places
void lrotdop(vector<int> &a,int n,int d){
    d=d%n;
    reverse(a.begin(),a.begin()+d);
    reverse(a.begin()+d,a.end());
    reverse(a.begin(),a.end());
    for(auto it:a){
        cout<<it<<" ";
    }
}
//optimal way to right rotate array by d places
void rrotdop(vector<int> &a,int n,int d){
    d=d%n;
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+d+1);
    reverse(a.begin()+d+1,a.end());
    for(auto it:a){
        cout<<it<<" ";
    }
}

//mainnn
int main(){
    //array input
    int n,k;
    cout<<"N: ";cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    //various functions
    lrotdop(a,n,1);
    cout<<endl;
    rrotdop(a,n,2);
    }