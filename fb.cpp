#include<bits/stdc++.h>
using namespace std;

//function to print nth fribonacci number
int fb(int n){
    if(n<=1) return n;
    else return fb(n-1)+fb(n-2);
}

int main(){
    int n;
    cout<<"N: ";cin>>n;
    //loop to print fribonacci series,,otherwise we could have used fb(n) to get the nth fribonacci number
    for(int i=0;i<=n;i++){
        cout<<fb(i)<<" ";
    }
}