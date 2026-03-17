#include <iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout << "Enter the Number for Factorial:-";
    cin >> n;
    for(int i=1;i<=n;i++){
        fact=i*fact;         //calculate factorial value
    }
    cout <<fact <<endl;     //Print the factorial value
} 