#include <iostream>
// copy constructor program
class Example
{
public:

	int a;
	int b;
	int c;
	int *p;

	Example (int x, int y, int z, int q): a(x), b(y), c(z)
	{
		(this->p)=(int *) malloc(sizeof(int));
       *(this->p)=q;
	}
	Example (const Example &refer)
	{
		 this->a=refer.a;
		 this->b=refer.b;
		 this->c=refer.c;
     (this->p)=(int *)malloc(sizeof(int));
     *(this->p)=*(refer.p);
	}
	 void show()
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
		std::cout<<c<<std::endl;
		std::cout<<*p<<std::endl;
	}
};

int main()
{
	Example e1(63, 23, 40, 99);
	
	
	 std::cout<<"After Copying From Object 1 to Object 2( Without change in main object)"<<std::endl;
	Example e2(e1);
	std::cout<<"e1 Object Data:"<<std::endl;
	e1.show();
	std::cout<<std::endl;
	std::cout<<"e2 Object Data:"<<std::endl;
	e2.show();

	(e1.a)++;
	(e1.b)++;
	(e1.c)++;
	(*(e1.p))++; 

	
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<std::endl;

	std::cout<<"After Copying From Object 1 to Object 2 and Changing in main object"<<std::endl;
	std::cout<<"e1 Object Data:"<<std::endl;
	e1.show();

	std::cout<<std::endl;
	std::cout<<"e2 Object Data:"<<std::endl;
	e2.show();

	return 0;
}