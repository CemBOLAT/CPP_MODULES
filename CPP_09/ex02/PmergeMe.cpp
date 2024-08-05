#include "PmergeMe.hpp"
#include <string>
#include <iostream>

PmergeMe::PmergeMe() { /* Body left empty */ }

PmergeMe::PmergeMe(PmergeMe const &other) { *this = other; }

PmergeMe::~PmergeMe() { /* Body left empty */ }

PmergeMe &PmergeMe::operator=(PmergeMe const &other) {
	if (this != &other) {
		_deque1 = other._deque1;
		_vector1 = other._vector1;
	}
	return (*this);
}

bool PmergeMe::fillData(int argc, char **argv) {
	if (argc < 2)
		return (false);
	else if (argc == 2){
		std::string	str = argv[1];
		if (str.size() == 0)
			return (false);
		while (str.find(" ") != std::string::npos){
			int num = atoi(str.substr(0, str.find(" ")).c_str());
			if (num < 0)
				return (false);
			_vector1.push_back(num);
			_deque1.push_back(num);
			str = str.substr(str.find(" ") + 1);
		}
		if (str.size() > 0){
			int num = atoi(str.c_str());
			if (num < 0)
				return (false);
			_deque1.push_back(num);
			_vector1.push_back(num);
		}
	}
	else {
		for (int i = 1; i < argc; ++i){
			int num = atoi(argv[i]);
			if (num < 0)
				return (false);
			_deque1.push_back(num);
			_vector1.push_back(num);
		}
	}
	return (true);
}

std::ostream& operator<<(std::ostream &out, const PmergeMe &obj){
	std::vector<int>::const_iterator		it = obj.getVector1().begin();
 	std::vector<int>::const_iterator		ite = obj.getVector1().end();
	/*
		std::deque<int>::const_iterator		it = obj.getdeque1().begin();
 		std::deque<int>::const_iterator		ite = obj.getdeque1().end();
	*/

	while (it != ite){
		out << *it;
		++it;
		if (it != ite)
			out << " ";
	}
	return (out);
}

const std::deque<int>		&PmergeMe::getdeque1() const { return (_deque1); }
const std::vector<int>		&PmergeMe::getVector1() const { return (_vector1); }

void	PmergeMe::mergeData(){
	clock_t	start;
	clock_t	end;

	start = clock();
	this->merge(_vector1, 0, _vector1.size() - 1);
	end = clock();
	_vectorMergeTime = static_cast<double>(end - start) / 1000;
	start = clock();
	this->merge(_deque1, 0, _deque1.size() - 1);
	end = clock();
	_dequeMergeTime = static_cast<double>(end - start) / 1000;
}

template <typename U>
void	PmergeMe::merge(U &arr, int start, int end){
	if (start < end){
		int mid = (start + end) / 2;

		if (mid - start + 1 <= 2){
			insertionSort(arr, start, mid);
		}
		else {
			merge(arr, start, mid);
		}
		if (end - mid <= 2){
			insertionSort(arr, mid + 1, end);
		}
		else {
			merge(arr, mid + 1, end);
		}
		inplaceMerge(arr, start, mid, end);
	}
}

template <typename T>
void PmergeMe::inplaceMerge(T &arr, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;

	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j]) {
			i++;
		} else {
			typename T::value_type temp = arr[j];
			for (int k = j; k > i; k--) {
				arr[k] = arr[k - 1];
			}
			arr[i] = temp;

			i++;
			mid++;
			j++;
		}
	}
}


template <typename T>
void	PmergeMe::insertionSort(T& arr, int left, int right) {
	for (int i = left + 1; i <= right; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= left && arr[j] > key) {
			std::swap(arr[j + 1], arr[j]);
			j--;
		}

		arr[j + 1] = key;
	}
}


void	PmergeMe::printTime() const {
	std::cout << "Time to process a range of " << this->_vector1.size() << "elements with std::vector\t: " << _vectorMergeTime << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_deque1.size() << "elements with std::deque\t: " << _dequeMergeTime << " us" << std::endl;
}
