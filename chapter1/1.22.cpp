#include "Sales_item.h"
#include <iostream>

int main()
{
	Sales_item item,total;
	if(std::cin>>total){
		while(std::cin>>item){
			total+=item;
		}
	
		std::cout << total << std::endl;
	}
	return 0;
}
