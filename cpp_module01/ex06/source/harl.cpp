#include "../include/harl.hpp"

using std::cout;
using std::endl;

Harl::Harl()
{
	cout << "\033[1;32mConstructor 'Harl' created\033[0m" << endl;
}

Harl::~Harl()
{
	cout << "\033[1;31mDestructor  'Harl' destroyed\033[0m" << endl;
}

void Harl::debug(void)
{
	cout << "\033[1;33m[DEBUG]\033[0m" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info(void)
{
	cout << "\033[1;34m[INFO]\033[0m" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
	cout << "\033[1;35m[WARNING]\033[0m" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void)
{
	cout << "\033[1;36m[ERROR]\033[0m" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level)
{
	void (Harl:: *ptr_level[]) (void) = {
		ptr_level[0] = &Harl::debug,
		ptr_level[1] = &Harl::info,
		ptr_level[2] = &Harl::warning,
		ptr_level[3] = &Harl::error,
	};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_level[i])();
			break;
		}
	}
	
}