#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    if(marks<25){
        cout<<'F'<<endl;
    }
    else if(marks<=45){
        cout<<'E'<<endl;
    }
    else if(marks<=65){
        cout<<'D';
    }
    else{
        cout<<"Boht Badiya";
    }
    return 0;
}