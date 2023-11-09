#include <iostream>


void option(int chose) {
	switch (chose)
	{
	case 1:
		std::cout << "you chosed pepperoni" << '\n';
		break;
	case 2:
		std::cout << "you chosed mozarella" << '\n';
		break;
	case 3:
		std::cout << "you chosed portuguese pizza" << '\n';
		break;
	default:
		std::cout << "Invalid option" << '\n';
		break;
	}

}



int main() {
	

	std::cout << "=======================================================================" << '\n';
	std::cout << "========================== Order Your Pizza Here!  ====================" << '\n';
	std::cout << "=======================================================================" << '\n';

	std::cout << "Chose your Pizza: 1, 2 or 3 " << '\n';

	std::cout << ". Pizza 1" << '\n';
	std::cout << ". Pizza 2" << '\n';
	std::cout << ". Pizza 3" << '\n';

	int chose;
	std::cin >> chose;
	option(chose);
	
}