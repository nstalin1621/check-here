#include <iostream>
int main(){
	int x,y;
	char oper;
	std::cout<<x<<y;
	std::cin>>x>>y;
	std::cout<<"oper";
	std::cin>>oper;
	
	switch(oper){
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
		case '%':
			std::cout<<x%y;
			break;
			
	}
    return 0;
}