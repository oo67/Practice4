#include<iostream>
using namespace std;
int main()
{
//    int n,sum=0,r,temp;
//    cout<<"Enter the number: "<<endl;
//    cin>>n;

//    temp=n;

//    while(n>0){
//     r=n%10;
//     sum=sum+(r*r*r);
//     n=n/10;
//    }
//    if(temp==sum){
//     cout<<"Armstrong Number"<<endl;
//    }
//    else{
//     cout<<"Not a Armstrong number"<<endl;
//    }

   cout<<"Armstrong Number in range of 100 to 500 are : "<<endl;
   for(int i=0;i<=500;i++){
    int temp=i;
    int sum=0;
    while(temp!=0){
     sum=sum+((temp%10)*(temp%10)*(temp%10));
     temp=temp/10;
   }
   if(sum==i){
    cout<<i<<"\n";
   }
   
   }
   return 0;
}
