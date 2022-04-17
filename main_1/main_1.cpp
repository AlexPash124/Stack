#include <iostream>
#include "Stack.h"


int main()
{
	Stack A(3);

	A.push(45);
	A.push(55);
	A.push(95);


	for (int i = 0; i < 3; i++)
	{
		std::cout << A.pop()<<"\t";
	}
}
