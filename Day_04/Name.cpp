#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter The Number of Rows:";
    cin>>r;
if(r%2==0){
    r=r-1;              //Convert The Row In odd 
    c=(r+1)/2;           
}
else{
    c=(r+1)/2;          -
}
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(j==1 or i+j==(c+1) or i-j==(c-1)){
        cout<<" * ";
    }
    else{
        cout<<"   ";
    }
}
cout<<"\n";
}

cout<<"\n\n";

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
cout<<"\n";
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

cout<<"\n\n";

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

cout<<"\n\n";

if(r%2==0){
    c=r;            
    r=r+1;         //Convert The Row In odd 
}       
    else{
        c=(r-1);    
    }
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(j==1 or j==c or (r+1)/2==i){
        cout<<" *";
    }
    else{
        cout<<"  ";
    }
}
cout<<"\n";
}
}