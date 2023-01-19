#include <iostream>
#include "Category.h"
#include "CategoryRepository.h"
#include "Repository.h"

int main(int argc, char** argv) {

	Category* category = new Category();
	category->id = 1;
	category->name = "electronic";
	

	CategoryRepository* categoryRepo = new CategoryRepository;
	
	categoryRepo->insert(*category);


	return 0;
}