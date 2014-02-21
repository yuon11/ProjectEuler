#include <iostream>
using namespace std;

int main()
{
	int value=0;
	/* code */
	for(int i=0; i<1000; i++)
	{

		if (i%3==0||i%5==0)
		{
			value+=i;
			cout<< "I equal "<< i <<endl;

			if (i%10==0)
			{
				/* code */
				std::cout<< value <<std::endl;
			}
		}
	}
	std::cout<<"Final value = "<< value <<std::endl;
	return 0;
}