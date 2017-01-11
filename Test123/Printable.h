#pragma once
#include <iostream>
#include <string>

namespace Kolokvijum
{
	class Printable
	{
		friend std::ostream& operator<< (std::ostream& str, Printable &pr);
		
	public:
		Printable(const std::string);
		virtual ~Printable();
		
	protected:
		std::string name;
		
		int id;
		void print(std::ostream& str);
		virtual void printName(std::ostream& str);
		virtual void run1();
		virtual void run2();

	private:
		static int count;
	};
}