#include<iostream>
using namespace std;
int main()
{
   int n,m;    //n=number of rows,m=number of columns
   cin>>n>>m;

   for(int i=1;i<=n;i++){            //concept of nested loops
    for(int j=1;j<=m;j++){
        cout<<"*";
    }
    cout<<endl;
   }
   return 0;
}
