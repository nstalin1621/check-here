#include <iostream>
using namespace std;
class area{
	public:
		void output(int l,int b)
		{
			cout<<"areaof reactangle"<<l*b<<"\n";    
		}
void output(int a)
{
	cout<<"area of sqare"<<a*a;
}
};
int main()
{
	area obj;
	obj.output(5,6);
	obj.output(5);
}
