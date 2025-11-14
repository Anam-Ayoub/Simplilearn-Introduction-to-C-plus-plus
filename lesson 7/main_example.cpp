#include "factinator.h"
#include <iostream>
using namespace std;

int main(){
    int num[4][2];
    num[5][1]=0;
    cout<<"3ndna 4 lar9am !"<<endl;
    for(int i=0 ; i<=3 ; i++){
        num[i][0] = i;
        
        cout<<"3tini mn3ndk "<<"("<<i+1<<")"<<"-> ";
        cin>>num[i][1];
        
    }
    cout<<"Factorials :"<<endl;
    for(int i=0 ; i<=3 ; i++){
        
        cout<<num[i][0]<<" | "<<num[i][1]<<" : "<<fct(num[i][1])<<endl;
        
    }
    
    return 0;
}