#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"Enter The Number Of Rows:";
cin>>r;
if(r%2==0){
   c=(r/2)+1;
}
else{
   r=r+1;
   c=(r/2)+1;

}
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
         if(i==1 or j==1 or ((r+1)/2==i) or (((r+1)/2>=i) and j==c)or i-j==c-2){
            cout<<" *";
         }
         else{
            cout<<"  ";
         }
}
 cout<<endl;
}
}