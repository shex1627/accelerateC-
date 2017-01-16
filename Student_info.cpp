#include "Student_info.h"
#include <iostream>

using std::cin; using std::cout;
using std::istream; using std::vector;
using std::endl;

bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}

istream& read_hw(istream& in, vector<double>& hw) 
{
	if(in) {
		// clear previous homework content
		hw.clear();
		
		// read new student's hw
		cout << "enter your homework grade please. \n";
		double x;
		while(in >> x) {
			hw.push_back(x);
			cout << "enter your next homework. \n";
		}
		cout << endl;
		// clearing input stream for next student's info
		in.clear();
	}
	return in;
}

istream& read(istream& is, Student_info& s) 
{
	//read and store the student's name and midterm and final's grades
	cout << "Please enter your name, midterm and final sequentially \n" << endl;
	is >> s.name >> s.midterm >> s.final;

	read_hw(is, s.homework); // read and store student's hw grades
	return is;
}
	
