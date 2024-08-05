#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

int main(){

	std::cout << "============Test 1<vector>============" << std::endl;
	{
		std::vector<int>	v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(354);
		v.push_back(4);

		try{
			std::cout << easyfind(v, 354) << std::endl;
			std::cout << easyfind(v, 5) << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "============Test 2<list>============" << std::endl;
	{
		std::list<int>	list;
		list.push_back(1);
		list.push_back(2);
		list.push_back(354);
		list.push_back(4);
		try{
			std::cout << easyfind(list, 1) << std::endl;
			std::cout << easyfind(list, 2) << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "============Test 3<deque>============" << std::endl;
	{
		std::deque<int>	deq;
		deq.push_back(1);
		deq.push_back(2);
		deq.push_back(354);
		deq.push_back(4);
		try{
			std::cout << easyfind(deq, 1) << std::endl;
			std::cout << easyfind(deq, 2) << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "============Test 4<stack>============" << std::endl;
	{
		// error code !!!! for ex02
		// std::stack<int>	stack;
		// stack.push(2);
		// stack.push(2);
		// stack.push(354);
		// stack.push(4);
		// try{
		// 	std::cout << easyfind(stack, 1) << std::endl;
		// 	std::cout << easyfind(stack, 2) << std::endl;
		// }
		// catch (std::exception &e){
		// 	std::cout << e.what() << std::endl;
		// }
	}
	return (0);
}
