#include <vector>
#include <stdexcept>
#include "Student_info.h"
#include "median.h"

using std::domain_error;



double grade(double midterm, double final, double hw)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * hw;
}

double grade(double midterm, double final, const std::vector<double>& hw) 
{
	if (hw.size() == 0) {
		throw domain_error("you didn't input any hw!");
	}
	return grade(midterm, final, median(hw));		
}

double grade(const Student_info& s) 
{
	return grade(s.midterm, s.final, s.homework);
}
