#include<iostream>

namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inisde fun Marvellous\n";
	}
}
namespace Infosystems
{
	void fun()
	{
		std::cout<<"Inisde fun Infosystems\n";
	}
}


int main()
{
	std::cout<<"Jay Ganesh\n";
	using namespace Marvellous;
	using namespace Infosystems;
	//fun();	//Ambiguity
	Marvellous::fun();
	Infosystems::fun();
	return 0;
}
