#include <algorithm>
#include <ios>
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Student_info.h"
#include "grade.h"

using std::cin;
using std::cout;
using std::endl;
using std::domain_error;
using std::max;
using std::setprecision;
using std::setw;
using std::sort;
using std::string;
using std::vector;


int main()
{
	vector<Student_info> students;
	Student_info record; // temp variable to read student records
	string::size_type maxlen = 0; // the name of the longest name
	
	while (read(cin, record)) {
		// find the lengt of the largest name
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	// alphabetize the student records
	sort(students.begin(), students.end(), compare);

	// write the students records
	for (vector<Student_info>::size_type i = 0;
		 i!= students.size(); ++i) {
		
		cout << setw(maxlen+1) << students[i].name;

		// compute and write the grade
		try {
			double final_grade = grade(students[i]);
			cout << setprecision(3) << final_grade;
		} catch (domain_error e) {
			cout << e.what();
		}
		cout << endl;
	}
	return 0;
} 
		
