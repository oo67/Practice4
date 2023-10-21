#include<iostream>

using namespace std;
int
main ()
{
  int i;
  int j;
  int m;
  int Number = 3;
  int count = 0;
  cout << "Please enter the no of lines ";
  cin >> i;
  int d = i;
  for (j = 1; j <= i; j++)
    {
      for (int e = 1; e <= d; e++)
	{
	  cout << " ";
	}
      if (j == 1)
	{
	  cout << "2\n";
	}
      else
	{
	  for (m = 0; m != j;)
	    {
	      count = 0;
	      for (int k = 2; k < Number; k++)
		{
		  if ((Number % k) == 0)
		    count = 1;
		}
	      if (count == 0)
		{
		  m++;
		  cout << Number << " ";
		}
	      Number++;
	    }
	  cout << "\n";
	}
      d--;
    }

  return 0;
}