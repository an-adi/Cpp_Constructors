#include <iostream>
//synthesize copy constructor program//dont need to define called implicitly
class Example
{
public:

	int a;
	int b;
	int c;

	 void show()
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
		std::cout<<c<<std::endl;
	}
};

int main()
{
	Example e1;
	e1.a=56;
	e1.b=69;
	e1.c=88;
	e1.show();
	
	std::cout<<std::endl;
	 std::cout<<"After Copying From Object 1 to Object 2( Without change)"<<std::endl;

	Example e2(e1);
	e2.show();

	std::cout<<std::endl;
	std::cout<<"After Copying From Object 1 to Object 2 and Changing it"<<std::endl;

	(e2.a)++;
	(e2.b)++;
	(e2.c)++;
	e2.show();


	return 0;
}