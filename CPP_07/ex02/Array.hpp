#pragma once

template <class T>
class Array {
	private :
		T				*array;
		unsigned int	_size;
	public :
		Array() : _size(0) {
			this->array = new T;
		}
		Array(unsigned int n) : _size(n) {
			this->array = new T[n];
		}
		Array(const Array &arr) : _size(arr._size){
			if (this != &arr)
			{
				this->array = new T[arr.size()];
				for (unsigned int i = 0; i < arr.size(); i++)
					this->array[i] = arr.array[i];
			}
		}
		~Array(){
			delete [] this->array;
		}
		Array	&operator=(const Array &arr){
			if (this != &arr)
			{
				delete [] this->array;
				this->array = new T[arr.size()];
				for (unsigned int i = 0; i < arr.size(); i++)
					this->array[i] = arr.array[i];
			}
			return (*this);
		}
		T		&operator[](unsigned int index){
			if (index < 0 || index >= this->size())
				throw Array::OutOfRangeException();
			return (this->array[index]);
		}
		unsigned int	size() const{
			return (this->_size);
		}
		class OutOfRangeException : public std::exception {
			public :
				virtual const char *what() const throw(){
					return ("Out of bounds!");
				}
		};

};
