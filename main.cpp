#include <iostream>
using namespace std;
int main (){
    int n = 0;
    cin >> n;
      if (n >= 2)
	   {
         int a1 = 1;
	      int a2 = 1;
	      cout << a1 << endl<< a2 <<endl;
	      n = n - 2;
	      int fib = 0;
	      int s = 0;
	      for (int i = 0; i < n; i++)
		  {
		     fib = a1 + a2;
		     s = a1 + a2;
		     cout << fib << endl;
		     a1 = a2;
		     a2 = s;
	      }
	  }
      else
	  {
	  cout << "errore" << endl;
	  }
  return 0;
}
