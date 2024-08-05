#pragma once

#include <stdint.h>

typedef struct Data
{
	int a;
	int b;
} Data;

// class Data{
// 	public:
// 		int a;
// 		int b;
// };

class Serializer
{
	public:
		Serializer();
		Serializer(Serializer const &other);
		Serializer &operator=(Serializer const &other);
		~Serializer();
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};
