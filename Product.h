#pragma once
#include "Entity.h"


class Product : public Entity
{
public:
	std::string name;
	unsigned int id;
	std::string description;
	float price;
};

