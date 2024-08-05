#pragma once

#include <vector>
#include <deque>
#include <iterator>

class PmergeMe {
	public:
	// Orthodox Canoniacl Form
		PmergeMe();
		PmergeMe(PmergeMe const &other);
		~PmergeMe();
		PmergeMe &operator=(PmergeMe const &other);

		//----------------------------- Member functions -----------------------------
		bool fillData(int argc, char **argv);

		void mergeData();
		// Encapsulation
		const std::deque<int>		&getdeque1() const ;
		const std::vector<int>		&getVector1() const;
		// Utilities
		void						printTime() const;
	private :
		std::deque<int>		_deque1;
		std::vector<int>	_vector1;
		double				_vectorMergeTime;
		double				_dequeMergeTime;

		// Utils for mergeData
		template <typename U>
		void				merge(U &deque, int start, int end);
		template <typename T>
		void				insertionSort(T &deque, int start, int end);
		template <typename T>
		void				inplaceMerge(T &arr, int start, int mid, int end);
};

// Non-member function overloads
std::ostream&	operator<<(std::ostream &out, const PmergeMe &obj);
