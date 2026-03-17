#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the Number1:-";
    cin>>n1;
     cout<<"Enter the Number2:-";
    cin>> n2;
//  if(((n1%2==0 and n1%3==0) and (n2%2==0 and n2%3==0)) or (n1%5==0 and n2%5==0)){
    if(((n1%6==0 and n2%6==0)) or (n1%5==0 and n2%5==0)){
        cout <<"True";
    }
    else{
        cout <<"False";
    }
}