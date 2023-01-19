#pragma once
#include "Entity.h"

class Review : public Entity
{
public:
	unsigned int id;
	unsigned int product_id;
	std::string user_review;
};

