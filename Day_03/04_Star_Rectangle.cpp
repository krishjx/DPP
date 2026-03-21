#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the Number of Rows:";
    cin>>r;
    cout<<"Enter the Number of Columns:";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 or i==r or j==1 or j==c or i==j or i+j==r+1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
        }
    }
        cout<<"\n";
    }
}
