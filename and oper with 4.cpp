#include <iostream>
int main(){
    int a,b,c,d;
    std::cout<<a<<b<<c<<d;
    std::cin>>a>>b>>c>>d;
    if (a>b&&a>c&&a>d){
        std::cout<<"a is greater";
    }
    else if(b>c&&b>a&&b>d){
        std::cout<<"b is greater";
         }
    else if(c>a&&c>b&&c>d){
        std::cout<<"c is greater";
    }
    else
    {
        std::cout<<"d is greater";
    }
return 0;
}