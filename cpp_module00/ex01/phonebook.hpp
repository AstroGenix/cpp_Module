#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
#include "contact.hpp"

class Phonebook
{
	private:
		Contact _contacts[MAX_CONTACTS];
		int _nb_contacts;
	public:
		// Constructor
		Phonebook();
		// Destructor
		~Phonebook();
		// Setters
		void add_contact();
		// Getters
		void search_contact();
		void display_contact();
		void menu_guide();
};

#endif