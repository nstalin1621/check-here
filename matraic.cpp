#include <iostream>
int main() {
  int i,j,a[2][2],b[2][2],c[2][2],n;
 std:: cout<<"enter first matrix:";
std::cin>>n;
for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
         std::cin>>a[i][j];
      }
  }
  std::cout<<"enter secound matrics";
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
         std::cin>>b[i][j];
      }
      
  }
  std::cout<<"sum of matrics";
    for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      
     {    
         c[i][j]=a[i][j]+b[i][j];
         std::cout<<c[i][j]<<"\n";}
  }
   std::cout<<"\t";
  return 0;
}