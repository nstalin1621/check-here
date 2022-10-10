/*create a class to print area of a square and reactangle the class has two functions with same name and different no of parameters the function for printing the area
of recatngle has two parameters which are its length and breadth whilw the other function for printing the area of square has one parameter side of the square*/
#include<iostream>
using namespace std;
class stalin
{
	int a,b,c,area_square,area_rectangle;
	public:
		void area(int a)
		{
		cout<<a*a;
	    }
		void area(int b,int c)
		{
		cout<<b*c;
		}
};
int main()
{
	stalin obj;
	obj.area(3);
	obj.area(5,6);
	return 0;
}         
