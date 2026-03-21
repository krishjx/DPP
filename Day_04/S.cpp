#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter The Number of Rows:";
    cin>>r;
if(r%2==0){
    c=r;            
    r=r+1;         //Convert The Row In odd 
}       
    else{
        c=(r-1);    
    }
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(i==1 or i==r or ((r+1)/2>=i and j==1) or (r+1)/2==i or ((r+1)/2<=i and j==c)){
        cout<<" *";
    }
    else{
        cout<<"  ";
    }
}
cout<<"\n";
}
}