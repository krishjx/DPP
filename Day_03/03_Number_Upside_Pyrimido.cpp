#include<iostream>
using namespace std;
int main(){
    int r,c;
cout<<"Enter the Row:";
cin>>r;
cout<<"Enter the Column:";
cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=i;j<=c;j++){
    cout<< j <<" ";
        }
        cout<<"\n";
      }
    }
