#include <iostream>
//program of default constructor Or Non_Parameterized User Defined Constructor

//constructor is invokes imidiately after object creation before giving semicolen that is -> (Student a1) after this and it may me or not defined but for assignrd value to const we have to define
class Student 
{
public:
	char stud_name;
	int roll_no;
	const int prn_no;
	const int exam_seat_no;
	static char college_name;

	Student() : prn_no(789), exam_seat_no(123456)//constructor initializer list
		//default constructor OR non_parameterized constructor
	{
		//this is user defined when it is not defined their is default synthesized constructor which get call imidiately after object creation 
		//but synthesized constructor not assigned values to const so for that we have define it by user
		//this constructor is user definrd and used to assigned values to any const or non const data members; and constructor is first thing that called after object creation
	}

	void print_info()
	{
		std::cout<<stud_name<<std::endl;
		std::cout<<roll_no<<std::endl;
		std::cout<<prn_no<<std::endl;
		std::cout<<exam_seat_no<<std::endl;
		std::cout<<college_name<<std::endl;
	}

	static void print_static_thing()
	{
		std::cout<<"This Is Static Output"<<std::endl;
		std::cout<<college_name<<std::endl;

	}

};char Student:: college_name= 'A';

int main()
{
	Student s1;
	s1.stud_name='t';
	s1.roll_no=51;
	s1.prn_no;
	s1.exam_seat_no;
	s1.print_info();
	Student::print_static_thing();

	return 0;
}