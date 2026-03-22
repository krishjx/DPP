#include<iostream>
using namespace std;
int main(){
    int r,c,r1,r2,r3,r4,r5,c1,c2,c3,c4,c5;
    cout<<"Enter The Number of Rows(Odd Number):";
    cin>>r;
if(r%2==0){     //Try to put odd number
    r1=r-1;             
    c1=(r1+1)/2;    
    
    c1=(r/2)+1;
    r2=r+1;

    r3=r-1;  
    c3=r;

    c4=r;            
    r4=r-1;

    c5=r;            
    r5=r-1;  
}
else{
    c1=(r+1)/2;    
    r1=r;      

    r2=r+1;
    c2=(r2/2);

    r3=r;
    c3=r;

    c4=(r-1);
    r4=r; 

     r5=r;
        c5=(r-1);      

}

for(int i=1;i<=r;i++){
    for(int j=1;j<=c1;j++){
        if(j==1 or i+j==(c1+1) or i-j==(c1-1)){
        cout<<" * ";
    }
    else{
        cout<<"   ";
    }
}



cout<<"    ";



    for(int j=1;j<=c2;j++){
         if(i==1 or j==1 or ((r2+1)/2==i) or (((r2+1)/2>=i) and j==c2)or i-j==c2-1){
            cout<<" * ";
         }
         else{
            cout<<"   ";
         }
}
 

cout<<"    ";


    for(int j=1;j<=c3;j++){
        if(i==1 or i==r3 or j==((c3+1)/2)){
        cout<<" * ";
    }
    else{
        cout<<"   ";
    }
}



cout<<"    ";


    for(int j=1;j<=c4;j++){
        if(i==1 or i==r4 or ((r4+1)/2>=i and j==1) or (r4+1)/2==i or ((r4+1)/2<=i and j==c4)){
        cout<<" * ";
    }
    else{
        cout<<"   ";
    }
}


cout<<"    ";


    for(int j=1;j<=c5;j++){
        if(j==1 or j==c5 or (r5+1)/2==i){
        cout<<" * ";
    }
    else{
        cout<<"   ";
    }
}
cout<<"\n";
}
}