# include <iostream>
# include <math.h>
using namespace std;
int main()
{
  int user_input_1,p = 0,ans = 0,i,n1;
	double result;
  cout << " Input a number: ";
  cin >> user_input_1; //e.g 7,31
    n1 = user_input_1 + 1; // e.g n1 = 31 + 1 = 32;
      for(i = 0; ;i++)
        {
            p = (int)pow(2,i); 
            if(p > n1)
            {
              break;
            }

            else if(p == n1)
            {
              cout << " " << user_input_1 <<" is a Mersenne number." <<endl;
              ans=1;
            }
        }
  if(ans == 0)
  {
   cout << " " << user_input_1 << " is not a Mersenne number." <<endl;
  }	
}