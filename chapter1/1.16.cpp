#include <iostream>
int main()
{
	std::cout << "Input some numbers and using ctrl+Z to end." << std::endl;
	int ival,sum=0;
	while(std::cin >> ival){
		sum+=ival;
	}
	std::cout << "The sum of input numbers is " 
			  << sum << std::endl;
	return 0;
}
