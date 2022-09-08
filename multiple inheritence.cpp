#include <iostream>
class Base
{
	public:
		void a()
		{
			std::cout<<"a";
		}

};
class derived1:public Base
{
	public:
	void d()
	{
				std::cout<<"d";
	}
};

class Derived2:public derived1
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};

int main()
{
	Derived2 obj;
	obj.b();
	obj.d();
	obj.a();
	return 0;
}