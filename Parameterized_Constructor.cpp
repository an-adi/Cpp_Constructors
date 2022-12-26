#include <iostream>
#include<conio.h>
//Parameterized constructor code
//Parameterized Constructor is used to give values to constant data members through parameters pass to constructor
class University
{
public:
	const int Central_Code; //const data member
	const int Uni_Code;
	char Uni_Name;
	int College_Count;
	int Ranking_Ind;
	int Ranking_World;
	
	
	University ():Central_Code(0000), Uni_Code()//this is default (non_parameterized constructor) which is now user define 
		//it will assignedd values to the const data member of(University Sample) object because it has no parameter and when we defined parameterized constructor then default synthesized constructor wont be call

	{

	}
	
	University (int a,int b) :Central_Code(a), Uni_Code(b) //this is parameterized constructor of (university pune) object and it has synthesized type also when their is no other constructor and parameter is given to object it ivoked auto.,
//num ofparameter assigned values can be given is unlimited
	{
		

	}

	void Uni_Details()//sample function to print only about unidetails sample
	{
		std::cout<<Uni_Name<<std::endl;
		std::cout<<Uni_Code<<std::endl;
		std::cout<<Central_Code<<std::endl;
		std::cout<<Ranking_World<<std::endl;
		std::cout<<Ranking_Ind<<std::endl;
		std::cout<<College_Count<<std::endl;
	}

	void Uni_Pune()//actual values will be print by this
	{

		std::cout<<Uni_Name<<std::endl;
		std::cout<<Uni_Code<<std::endl;
		std::cout<<Central_Code<<std::endl;
		std::cout<<Ranking_World<<std::endl;
		std::cout<<Ranking_Ind<<std::endl;
		std::cout<<College_Count<<std::endl;

	}




};



int main()
{

	University sample; //this will be called by default (non parameterized constructor) 
	 sample.Uni_Name='U';
	 sample.Uni_Code;
	 sample.Ranking_World=000;
	 sample.Ranking_Ind=000;
	 sample.College_Count=0000;
	 sample.Uni_Details();

	std::cout<<std::endl;
	std::cout<<std::endl;

	
	University pune(8968, 032); //this will be called by parametrized constructor 
	pune.Uni_Name='P';
	pune.Uni_Code;
	pune.Central_Code;
	pune.Ranking_World=275;
	pune.Ranking_Ind=3;
	pune.College_Count=8000;
	pune.Uni_Pune();


	return 0;
}
