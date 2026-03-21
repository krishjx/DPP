#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2,n3,s;
    cout<<"Enter The Number1:";
    cin>>n1;
     cout<<"Enter The Number2:";
    cin>>n2;
     cout<<"Enter The Number3:";
    cin>>n3;
    
    /*
    if(n1<n2 and n1<n3){
        cout<<n1;
    }
    else if(n2<n3 and n2<n1){
        cout<<n2;
    }
    else{
        cout<<n3;
    }*/
    s=min(n1,n2);
    s=min(s,n3);
    cout<<"\n"<<s;
}