/*utility function that calculates the median of a vector*/

#include <vector>
#include <algorithm>
#include <stdexcep>

use std::domain_error;
use std::sort;
use std::vector;

double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;
	vec_sz = vec.size();
	if (size == 0) {
		throw domain_error("mediam of an empty vector");

	sort(vec.begin(), vec.end());
	
	vec_sz mid = size/2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}
