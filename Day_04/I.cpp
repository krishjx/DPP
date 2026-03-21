#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter The Number of Rows:";
    cin>>r;
if(r%2==0){
    r=r-1;         //Convert The Row In odd 
}        
c=r;
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(i==1 or i==r or j==((c+1)/2)){
        cout<<" *";
    }
    else{
        cout<<"  ";
    }
}
cout<<"\n";
}
}