#include <iostream>
using namespace std;

int main()
{
	int fib0 = 1;
	int fib1 = 2;
	int fibN = 0;

	int answer=0;

	while(fibN<4000000)
	{
		cout<<"answer= "<<answer<<endl;

		fibN = fib0+fib1;

	//	if (fib0%2==0)
//		{
//			/* code */
//			answer+=fib0;
//		}

		if (fib1%2==0)
		{
				/* code */
				answer+=fib1;
		}
		cout<<"answer so far = "<<answer<<endl;

//		cout<<"fib_0_"<<fib0<<" + "<<"fib_1_"<<fib1<<" = "<<fibN<<endl;
		fib0 = fib1;
		fib1 = fibN;

	}


	return 0;
}