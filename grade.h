#ifndef GRADE_H_
#define GRADE_H_

#include <vector>
#include "Student_info.h"

double grade(const Student_info&);
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);

#endif
