#include<bits/stdc++.h>
using namespace std;

//print divisors TC-->O(n)
void printDiv(int n){
    vector<int> ls;
    for(int i=1;i<=n;i++){
        if(n%i==0) {
            ls.push_back(i);
        }
    }
    for(auto it:ls){
        cout<<it<<" ";
    }
}

//to check prime
void prime(int n){
    int c=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            c++;
            if(n%i!=i) c++;
        }
    }
    if(c==2) cout<<"Prime";
    else cout<<"Non-Prime";
}

//gcd euclidean algo used
void gcd(int a,int b){
    cout<<"a: "; cin>>a;
    cout<<"b :"; cin>>b;
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<"GCD is-"<<b;
    else cout<<"GCD is-"<< a;
}

//gcd brute force
void gcdbf(int a,int b){
     cout<<"a: "; cin>>a;
     cout<<"b :"; cin>>b;
     int k=min(a,b);
     
     for(int i=k;i>=1;i--){
        if(a%i==0 && b%i==0) {
            cout<<"GCD is- "<<i;
            break;
        }    
}}


//main funtion
int main(){
    int a,b;
    /*int n;
    cout<<"Enter n: ";
    cin>>n;
    printDiv(n);*/
    gcdbf(a,b);
    return 0;
}