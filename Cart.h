#pragma once
#include "Entity.h"

class Cart : public Entity
{
public:
	unsigned int id;
	unsigned int total_price;
	unsigned int number_of_product;
};

