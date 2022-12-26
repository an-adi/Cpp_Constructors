#include <iostream>
//program for Default Synthesized Constructor OR non_parameterized synthesized constructor
class Aditya 
{
	public:
	
	 int Age;
	int Birth_Year;
	 char  Education ;
	 static char name;

	 
	
	 //we have not defined any type of constructor here 


	 //but then also after object creation call goes to default synthesized constructor
	 //default synthesized constructor is get call until the we user dont defined any constructor if program has any one type of constructor default synthesized will not get call 
	 void info()
	{
		std::cout<<name<<std::endl;
		std::cout<<Age<<std::endl;
		std::cout<<Birth_Year<<std::endl;
		std::cout<<Education<<std::endl;
	}
	 static void statiC()
	 { 
		 std::cout<<name<<std::endl;
	 }

}; 
char Aditya::name= 'A';


int main()
{ 
	Aditya a /*here after object creation imidiately call goes to default synthesized constructor */;
	a.Age = 20;
	a.Birth_Year = 2002;
	a.Education ='B';
	a.info();
	std::cout<<std::endl;
	Aditya::statiC();//static member fun or data member dont need constructor cause it not required object for value assigned or calling
	return 0;
}



