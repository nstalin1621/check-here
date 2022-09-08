#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<10;i++)
	{
		cout<<"*";
	}
	{
		for(j=1;j<5;j++)
		{
			if (i==0 || i==10-1||j==0 || j==5-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<"*";
			}
		
		}
   }
   return 0;
}