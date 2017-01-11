#include "Printable.h"

Kolokvijum::Printable::Printable(const std::string name) : name(name)
{
	id = ++count;
}

Kolokvijum::Printable::~Printable()
{
}

void Kolokvijum::Printable::print(std::ostream & str)
{
	run1(); printName(str); run2();
}

void Kolokvijum::Printable::printName(std::ostream & str)
{
	str << name;
}

void Kolokvijum::Printable::run1()
{
	std::cout << "s" << id++;
}

void Kolokvijum::Printable::run2()
{
	std::cout << "e" << id;
}

std::ostream & Kolokvijum::operator<<(std::ostream & str, Printable & pr)
{
	pr.print(str);      
	return str;
}

int Kolokvijum::Printable::count;
