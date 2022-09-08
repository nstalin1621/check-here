#include <iostream>
int main(){
    int a,b,c;
    a=5;
    b=6;
    c=8;
    if (a>b&&a>c){
        std::cout<<"a is greater";
    }
    else if(b>c&&b>a){
        std::cout<<"b is greater";
         }
    else
    {
        std::cout<<"c is greater";
    }
return 0;
}
 