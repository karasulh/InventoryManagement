#pragma once
#include "Entity.h"
template <class T>
class Repository
{
public:
	virtual unsigned int insert(T entity) = 0;
	virtual bool remove(T entity) = 0;
};

