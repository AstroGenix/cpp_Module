#include <iostream>

using std::cout;
using std::endl;

std::string string_upper(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
		cout << string_upper(argv[i]);
	cout << endl;
	return 0;
}	