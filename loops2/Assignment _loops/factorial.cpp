#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number : "<<"\n";
   cin>>n;

   int fact=1;
   for(int i=1;i<=n;i++){
    fact=fact*i;
   }
   cout<<"Factorial is = "<<fact<<"\n";

   return 0;
}
