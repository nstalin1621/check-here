#include <iostream>
class Base1
{
	public:
		void a()
		{
			std::cout<<"a";
		}

};
class Base2
{
	public:
	void d()
	{
				std::cout<<"d";
	}
};

class Derived:public Base1,public Base2
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
	obj.d();
	return 0;
}