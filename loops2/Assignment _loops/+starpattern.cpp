#include<iostream>
using namespace std;
int main()
{
   int n=5;

   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(((i==2 && (j==0 || j==1 || j==2 || j==3 || j==4)) || (j==2 && (i==0 ||i==1 || i==2 || i==3 || i==4)))){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }
   return 0;
}