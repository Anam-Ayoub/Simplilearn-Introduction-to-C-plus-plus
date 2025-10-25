#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int sum;

    cout<<"Enter a number --> ";
    cin>>num1;

    cout<<"Do it again --> ";
    cin>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    if ( num1 < num2 ){
        cout<<num1<<" < "<<num2;
    }
    else if  (num2 < num1){
        cout<<num2<<" < "<<num1;
    }
    else{
        cout<<num1<<" = "<<num2;
    }
    return 0;
}