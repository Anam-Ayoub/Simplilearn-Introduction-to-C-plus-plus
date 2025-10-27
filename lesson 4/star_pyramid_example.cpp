#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"How many lines you wish for? --> ";
    cin>>n;

    for (int i = 1 ; i <= n*2 ; i+=2){
        for (int k = n-1 ; k>(i/2) ; k--){
            cout<<" ";
        }
        for (int j = 1 ; j <= i ; j++){

            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}