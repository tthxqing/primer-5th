#include <iostream>
#include "Sales_item.h"
int main(){
	Sales_item item,tmp;
	int cn=0;
	if(std::cin >> item ){
		++cn;
		while(std::cin >> tmp){
			if(item.isbn() == tmp.isbn())
				++cn;
			else
			{
				std::cout <<"Transaction amount of '"<<item.isbn()<<"' :"<< cn << std::endl;
				cn = 1;
				item = tmp;
			}
		}
		std::cout <<"Transaction amount of '"<<item.isbn()<<"' :"<< cn << std::endl;
	}
	return 0;
}

