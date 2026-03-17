#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age:-";
    cin>>age;
    if(20<=age and age<=30){
        if(age%5==0){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    else{
        cout<<"False";8
    }
}