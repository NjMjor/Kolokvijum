#pragma once
#include "Printable.h"
namespace Kolokvijum
{
	class Person : public Printable
	{
		friend bool operator==(const Person& first, const Person & second);
		friend bool operator!=(const Person& first, const Person & second);
	public:
		Person(const std::string &name, const std::string &jmbg);

		std::string const& getName()const;
		std::string const& getJmbg() const;

		virtual void printName(std::ostream &str) override;

	protected:
		void print(std::ostream& str);
	private:

		using Kolokvijum::Printable::run1;
		using Kolokvijum::Printable::run2;
		std::string jmbg;
	};
}

