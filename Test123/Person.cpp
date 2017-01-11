#include "Person.h"
#include <iomanip>

Kolokvijum::Person::Person(const std::string & name, const std::string & jmbg) : Printable(name), jmbg(jmbg) {}

std::string const & Kolokvijum::Person::getName() const
{
	return jmbg;
}

std::string const & Kolokvijum::Person::getJmbg() const
{
	return jmbg;
}

void Kolokvijum::Person::print(std::ostream &str)
{
	str << std::setw(13) << std::left << jmbg << " " << name << std::endl;
}

void Kolokvijum::Person::printName(std::ostream &str)
{
	print(str);
}

bool Kolokvijum::operator==(const Person &first, const Person &second)
{
	return first.jmbg == second.jmbg;
}

bool Kolokvijum::operator!=(const Person &first, const Person &second)
{
	return !(first == second);
}
