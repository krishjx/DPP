#include<iostream>
using namespace std;
int main(){
    int r,c,j=1,s;
cout<<"Enter the Row:";
cin>>r;
cout<<"Enter the Column:";
cin>>c;
s=c;                         //s store the inital value of column
   for(int i=1;i<=r;i++){
             c=i*s;           //update the range of c for next line
        for(j;j<=c;j=j+1){
        cout<< j*j <<" ";
        }
        cout<<"\n";       
      }
    }
