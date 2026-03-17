#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cout << "Enter The Number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;  }  /* it store the value how 
                           many times it divides*/
        
    }       //loop End
    if(count==2){
        cout<<"Given Number:" <<n <<" is Prime\n";
    }
   else{
    cout<<"Given Number:" <<n <<" is Not Prime\n";
   }
}