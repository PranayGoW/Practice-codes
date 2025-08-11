#include<bits/stdc++.h>
using namespace std;

//to print pattern1
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//to print pattern2
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//to print pattern3
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//to print pattern4
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//to print pattern5
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//to print pattern6
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//to print pattern7
void print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        //space
        for(int l=0;l<(n-i-1);l++){
            cout<<" ";
        }
        //line change
        cout<<endl;
    }
}

//to print pattern8
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=(2*n-2*i-1);j++) {
            cout<<"*";
        }
        //space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//to print pattern9
void print9(int n){
    //print by combinig both the prev. patterns
    print7(n);
    print8(n);
}

//to print pattern10
void print10(int n){
    for(int i=1;i<=(2*n-1);i++){
        int stars=i;
        if(i>n){stars=(2*n-i);}
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

//to print pattern11
void print11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){start=1;}
        else {start=0;}
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

//to print pattern12
void print12(int n){
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=(2*n-2*i);j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

//to print pattern13
void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

}

//to print pattern14
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<=('A'+i);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

//to print pattern15
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }}

//to print pattern16
void print16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }}

//to print pattern17
void print17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //alphabet
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int k=1;k<=(2*i+1);k++){
            cout<<ch;
            if(k<=breakpoint) ch++;
            else ch--;
        }
        //space
        for(int l=0;l<(n-i-1);l++){
            cout<<" ";
        }
        //line change
        cout<<endl;
    }
}

//to print pattern18
void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
    
//to print pattern19
void print19(int n){
     int iniS=0;
    for(int i=0;i<n;i++){
       //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;

    }
    iniS=8;
    for(int i=1;i<=n;i++){
       //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;

    }

}    

//to print pattern20
void print20(int n){
int iniS=8;
    for(int i=1;i<=n;i++){
       //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;

    }
    iniS=2;
    for(int i=1;i<=n;i++){
       //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;

    }

}

//to print pattern21
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

//to print pattern22
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-1)-1-j;
            int down=(2*n-1)-1-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}


//main function
int main(){
    int n,t;
    cout<<"Enter t: ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"Enter n: ";
        cin>>n;
        print22(n);
    }
    return 0;
}
