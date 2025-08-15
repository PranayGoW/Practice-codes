#include<bits/stdc++.h>
using namespace std;

//recursive function, just to understand
int cnt=0;
void f(){
    if(cnt==5) return; // this is the base case, on matching this function call stps as it returns //
    cout<<cnt<<endl;
    cnt++;
    f();
}

//print name n times & to print name n times too
void f1(int i,int n){
    if(i>n) return;//base case
    cout<<i<<endl;
    f1(i+1,n);
}

//to print from n to 1
void f2(int i,int n){
    if(i<1) return;//base case
    cout<<i<<endl;
    f2(i-1,n);
}

//to print form 1 to n, backtracking
void f3(int i, int n){
    if(i<1) return;
    f3(i-1,n);
    cout<<i<<endl;
}

//to print from n to1 , backtracking
void f4(int i, int n){
    if(i>n) return;
    f4(i+1,n);
    cout<<i<<endl;
}

//to print sum of n matural numbers (parameterised way)
void f5(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f5(i-1,sum+i);
}

//to print sum n numbers (functional way)
int f6(int n){
    if(n==0) return 0;
    else return n+f6(n-1);
}

//to print factorial of n
int fac(int n){
    if(n==0) return 1;
    else return n*fac(n-1);
}

int main(){
    int n;
    cout<<"Enter n: "; cin>>n; 
    cout<<fac(n);
}