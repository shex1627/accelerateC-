#ifndef GRADE_H_
#define GRADE_H_

#include <vector>
#include "Student_info.h"
#include "median.h"

double grade(const Student_info& s) 
{
	return grade(s.midterm, s.final, s.hw);
}

double grade(double midterm, double final, double hw)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * hw;
}

double grade(double midterm, double final, const std::vector<double>& hw) 
{
	if　(hw.size() == 0) 
			
}
