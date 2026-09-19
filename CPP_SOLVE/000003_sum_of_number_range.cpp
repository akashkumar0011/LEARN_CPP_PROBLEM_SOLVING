#include <iostream>
using namespace std;

   int main()
{
   int n1,n2,s=0;
   cout<< "enter range : ";
   cin>>n1>>n2;
   while (n1<=n2)
{
   s=s+n1;
   n1++;
}
   cout<<" the range sum : " <<s;
   return 0;
}