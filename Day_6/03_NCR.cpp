#include<iostream>
using namespace std;
int fact(int a){
    if(a==1 or a==0){   //a==0 because when a=r
        return 1;   //for factorial of 1
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int n,r;        //n>=r
    cout<<"Enter The value Of n:";
    cin>>n;
    cout<<"Enter The value Of r:";
    cin>>r;
    cout<<((fact(n))/((fact(r))*(fact(n-r))));
}
