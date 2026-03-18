#include<iostream>
using namespace std;
int main(){
    int n1,n2,s;
cout<<"Enter the Number1:";
cin>>n1;
cout<<"Enter the Number2:";
cin>>n2;
s=n1;
    for(int i=s;i<=n1*n2;i=i+s){
      if(i%n2==0){
        cout <<"lCM of "<<n1<<" and "<<n2<<" is:"<<i<<"\n";
        break;
      }
    }   
}
        
     
        
       

