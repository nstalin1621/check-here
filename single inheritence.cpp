#include <iostream>
class Base
{
	public:
		void a()
		{
			std::cout<<"a";
		}

};

class Derived:public Base
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};

int main()
{
	Derived obj;
	obj.b();
	obj.a();
	return 0;
}