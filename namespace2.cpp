#include<iostream>

namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inisde fun\n";
	}
}


int main()
{
	std::cout<<"Jay Ganesh\n";
	using namespace Marvellous;
	fun();
	return 0;
}
