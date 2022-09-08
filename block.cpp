#include <iostream>
int width=20;
int height =20;
int main()
{
	for(int i=0;i<20;i++)
	std::cout<<"#"<<"\n";
	{
		for(int j=0;j<20;j++)
		std::cout<<"@";
	}
	for(int i=0;i<19;i++)
	std::cout<<"X";
	{
		for(int j=0;j<19;j++)
		std::cout<<"Y"<<"\n";
	}
	return 0;
}
