#include <iostream>
int main()
{
	std::cout <<"Enter two numbers(v1 <= v2):" << std::endl;
	int v1,v2;
	std::cin >> v1 >> v2;
	while( v1 <= v2)
	{
		std::cout << v1 << ' ';
		++v1;
	} 
	std::cout << std::endl;
	return 0;
}
