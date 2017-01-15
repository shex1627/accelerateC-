#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::setprecision;
using std::endl;
using std::streamsize;
using std::string;
using std::vector;
using std::sort;

int main()
{
	//ask for and read the student's name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello　" + name + "!" << endl;

	//ask for the midterm and final grade
	cout << "Please enter your midterm and final grades: \n";
	double midterm, final;
	cin >> midterm >> final;

	//ask for homework assignments
	cout << "Enter all hw grades, follow by end-of-file: \n";

	// a variable into which to read
	double x;
	vector<double> homework;

	// invariant:
	//  we have read count grades so far, and
	//  sum is the sum of the first count grades
	while (cin >> x) {
		homework.push_back(x);
	}
	
	// check if the student enter any homework grades
	typedef vector<double>::size_type vec_sz; //??
	vec_sz size  = homework.size();
	// the problem will die immediately if (vec_sz == 0) is true
	if (size  == 0) {
		cout << "You didn't enter any grades. "
			"Please try again." << endl;
		return 1;
	}	
	
	//sort the grades
	sort(homework.begin(), homework.end());

	// compute the median of the hw grade
	vec_sz mid = size/2;
	double median;
	median = (size % 2 == 0) ? (homework[mid] + homework[mid-1])/2 
		:median = homework[mid];
	
	//write the result
	cout << "Your final grade is " << setprecision(3)
	     << 0.2 * midterm + 0.4 * final + 0.4 * median
	     << endl;

	return 0;
}
