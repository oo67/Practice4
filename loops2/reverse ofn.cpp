#include<iostream>
using namespace std;
int main()
{
   int n,t,r,rev=0;
   cout<<"Enter the number: ";
   cin>>n;
   t=n;

   while(t>0){
    r=t%10;
    rev=rev*10+r;
    t=t/10;
   }
   cout<<"The reverse of "<<n<<" is "<<rev<<endl;


   return 0;
}
