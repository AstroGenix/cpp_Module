/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:00:49 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 16:00:49 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

/*
	Please feel free to use this textbox to do the testing:

	./replace main.cpp word replaced_Word
	diff main.cpp main.cpp.replace

	Apple -> Turnip -> Apple1 -> 1Apple1
*/

int replace(char **argv, std::string str)
{
	std::ofstream	outfile;	// Output file stream object to write to files
	int				pos;		// Variable to store the position of the found substring

	// Open the output file with the same name as the input file but with a ".replace" extension
	outfile.open((std::string(argv[1]) + ".replace").c_str());

	if (outfile.fail())
	{
		std::cout << "Error: Cannot open output file" << std::endl;
		return 1;
	}

	// Iterate through the input string
	for (int i = 0; i < (int)str.size(); i++)
	{
		// Find the position of the substring to be replaced starting from index i
		pos = str.find(argv[2], i);

		// If the substring is found and the position matches the current index
		if (pos != -1 && pos == i)
		{
			// Write the replacement substring to the output file
			outfile << argv[3];
			// Skip the length of the substring to be replaced
			i += std::string(argv[2]).size() - 1;
		}
		else
		{
			// Write the current character to the output file
			outfile << str[i];
		}
	}
	
	outfile.close();
	return 0;	
}

int main(int argc, char **argv)
{
	std::ifstream	infile;	// Input file stream object to read from files
	std::string		str;	// String to store the contents of the file
	std::string		line;

	if (argc != 4)
	{
		std::cout << "./replace  <file> old_word new_word" << std::endl;
		return 1;
	}

	// Open the file specified by the first argument
	infile.open(argv[1]);

	// Check if the file was successfully opened
	if (infile.fail())
	{
		std::cout << "Error: Cannot open " << argv[1] << std::endl;
		return 1;
	}

	// Read the contents of the file into str
	while (std::getline(infile, line))
	{
		str += line;
		str += '\n';
	}

	infile.close();

	return (replace(argv, str));
}