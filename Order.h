#pragma once
#include <vector>
#include "Entity.h"

class Order : public Entity
{
public:
	unsigned int id;
	std::vector<unsigned int> product_ids;
	std::string delivery_location;
	std::string delivery_date;
};

