#include <iostream>
int main(){
    int x,y;
    char operation;
    std::cout<<"type a number and operation ";
    std::cin>>x>>y;
    std::cin>>operation;
    
    switch(operation){
        case '+':
        std::cout<<x+y;
        break;
        case '-':
        std::cout<<x-y;
        break;
        case '*':
        std::cout<<x*y;
        break;
        case '/':
        std::cout<<x/y;
        break;
        
    }
  return 0;
}