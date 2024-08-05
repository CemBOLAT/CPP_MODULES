#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *data = new Data;
	data->a = 42;
	data->b = 21;

	uintptr_t raw = Serializer::serialize(data);
	Data *data2 = Serializer::deserialize(raw);

	std::cout << "data->a: " << data->a << std::endl;
	std::cout << "data->b: " << data->b << std::endl;
	std::cout << "data2->a: " << data2->a << std::endl;
	std::cout << "data2->b: " << data2->b << std::endl;

	delete data;
	return (0);
}

// int main(){
// 	Data	*data = new Data;
// 	data->a = 42;
// 	data->b = 21;

// 	uintptr_t raw = Serializer::serialize(data);
// 	Data *data2 = Serializer::deserialize(raw);

// 	std::cout << "data->a: " << data->a << std::endl;
// 	std::cout << "data->b: " << data->b << std::endl;
// 	std::cout << "data2->a: " << data2->a << std::endl;
// 	std::cout << "data2->b: " << data2->b << std::endl;

// 	delete data;
// }
