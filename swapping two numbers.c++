#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"before swapping A="<<a<<"B="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"after swapping A="<<a<<"b="<<b;
    return 0;
    
}
