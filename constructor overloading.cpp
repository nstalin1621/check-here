#include <iostream>
using namespace std;
class a
{
    public:
    a(int a1)
    {
        cout<<"a";
    };
}
a(int a2,int b)
{
    cout<<"2nd function";
}   
int main(){
    a obj();
    a obj1();
    return 0;
}                