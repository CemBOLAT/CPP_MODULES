#pragma once

/* number of indexes */
// template <class T>
// int easyfind(T &container, int number){
// 	typename	T::iterator	it = std::find(container.begin(), container.end(), number);
// 	if (it != container.end())
// 		return (it - container.begin());
// 	throw NotFoundException();
// }

// /* number of itself */
template <class T>
int	easyfind(T &container, int finded){
	typename T::iterator it = std::find(container.begin(), container.end(), finded);
 	if (it != container.end())
 		return (*it);
 	throw NotFoundException();
}
