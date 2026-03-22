#include<iostream>
using namespace std;

int main(){
    int r,c1,c2,r1,r2;
    cout<<"Enter rows: ";
    cin>>r;

 
by CT
    if(r%2==0){
         r1=r-1;
     c1=(r+1)/2;
       r2=r;
     c2=(r/2)+1;              


}
else{
    r1=r;
    c1=(r+1)/2;
    
    r2=r+1;
    c2=(r/2)+1;}

   
    int c3 = r;
    int c4 = r-1;
    int c5 = r-1;

    for(int i=1;i<=r;i++){

        //   Pattern K
        for(int j=1;j<=c1;j++){
            if(j==1 || i+j==(c1+1) || i-j==(c1-1))
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<"   ";

        //   Pattern R
        for(int j=1;j<=c2;j++){
            if(i==1 || j==1 || i==(r2+1)/2 || 
              ((i<=(r2+1)/2) && j==c2) || i-j==c2-1)
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<"   ";

        //   Pattern I
        for(int j=1;j<=c3;j++){
            if(i==1 || i==r || j==(c3+1)/2)
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<"   ";

        //   Pattern S
        for(int j=1;j<=c4;j++){
            if(i==1 || i==r || 
              (i<=(r+1)/2 && j==1) || 
              i==(r+1)/2 || 
              (i>=(r+1)/2 && j==c4))
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<"   ";

        //   Pattern H
        for(int j=1;j<=c5;j++){
            if(j==1 || j==c5 || i==(r+1)/2)
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<"\n";
    }
}