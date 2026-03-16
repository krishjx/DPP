#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the Your Age:-";
    cin>> age;
    if(age>=18){
        cout<< "You Can Code";
    }
    else if(12<age and age<18){
        cout << "You are Teenager";
    }
    else{
        cout<<"You are not Eligible to Code";
    }
}