#pragma once
#include "Repository.h"
#include "Category.h"

class CategoryRepository : public Repository<Category>
{
public:
	virtual unsigned int insert(Category entity) override;
	virtual bool remove(Category entity) override;
};

