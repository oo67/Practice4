#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;

   for(int i=1;i<=n;i++){         //for number of rows
    for(int j=1;j<=m;j++){   //for number of columns
        if(i+j==5 || j-i==3 || i==4){
            cout<<i;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    }
     return 0;
}