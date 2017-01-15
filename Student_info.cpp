#include "student_info.h"

using std::istream; using std::vector;

bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}

istream& read_hw(istream& is, vector<double>& hw) 
{
	if(is) {
		// clear previous homework content
		hw.clear();
		
		// read new student's hw
		while(in >> x) {
			hw.push_back(x);
		}
		
		// clearing input stream for next student's info
		is.clear();
	}
	return in;
}

istream& read(istream& is, Student_info& s) 
{
	//read and store the student's name and midterm and final's grades
	is >> s.name >> s.midter >> s.final;

	read_hw(is, s.homework); // read and store student's hw grades
	return is;
}
	
