#include "../include/harl.hpp"

int	fetch_complain(char *argv)
{
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level[i] == argv)
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Harl	h;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		switch (fetch_complain(argv[1]))
		{
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}