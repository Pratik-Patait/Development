#include<iostream>

using namespace std;

class Demo
{
	public:
		 int Add(int no1,int no2)	//Add function object oriented fucntion ahe
		 {
			 int Ans = 0;
			 Ans = no1 + no2;
			 return Ans;
		 }
};

int main()	//main he naked function ahe
{
	Demo obj;
	cout<<sizeof(Demo)<<"\n";// 1 no characterstics still size of class is 1 by default
	int ret = 0;
	
	ret = obj.Add(10,11);
	cout<<ret<<"\n";//21
	
	
	return 0;
}