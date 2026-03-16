#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the Number:-";
cin>> n;
if(n%3==0 or n%5==0){
    cout<<"Number is Divisible by either by 3 or 5";
}
else{
    cout<<"Number is Neither Divisible By 3 or 5"<<endl;
}
}