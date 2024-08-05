#include "Span.hpp"

Span::Span()
	: _size(0), _container(std::vector<int>()) { /* Intentionally left empty */ }

Span::Span(unsigned int n)
	: _size(n) , _container(std::vector<int>()) { /* Intentionally left empty */ }

Span::Span(const Span &other)
	: _size(other._size), _container(other._container) { /* Intentionally left empty */ }

Span &Span::operator=(const Span &other)
{
	_size = other._size;
	_container = other._container;
	return (*this);
}

Span::~Span() { /* Intentionally left empty */ }

void Span::addNumber(int n)
{
	if (_container.size() == _size)
		throw FullContainerException();
	_container.push_back(n);
}

const char* Span::FullContainerException::what() const throw()
{
	return ("Container is full");
}

const char *Span::SpanNoFoundException::what() const throw()
{
	return ("Span not found");
}

int Span::longestSpan(){
	if (this->_container.size() < 2)
		throw Span::SpanNoFoundException();
	sort(this->_container.begin(), this->_container.end());
	return (this->_container.back() - this->_container.front());
}

int Span::shortestSpan(){
	if (this->_container.size() < 2)
		throw Span::SpanNoFoundException();
	sort(this->_container.begin(), this->_container.end());
	int min = this->_container[1] - this->_container[0];
	for (unsigned int i = 2; i < this->_container.size(); i++)
	{
		if (this->_container[i] - this->_container[i - 1] < min)
			min = this->_container[i] - this->_container[i - 1];
	}
	return (min);
}
