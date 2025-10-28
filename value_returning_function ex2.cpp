#include <iostream>
using namespace std;

int big(int x ,int z){
    if(x>z){
        return x;
    }
    else if(x<z){
        return z;
    }
    else{
        return x+z;
    }
}
int main(){

    int n1 , n2;

    cout<<"Enter the first number --> ";
    cin>>n1;
    cout<<"Enter the second number --> ";
    cin>>n2;

    int bign = big(n1,n2);

    if (bign == n1){
        cout<<n1<<" > "<<n2<<endl;
    }
    else if(bign == n2){
        cout<<n1<<" < "<<n2<<endl;
    }
    else if(bign == n1+n2){
        cout<<n1<<" == "<<n2<<endl;
    }
}