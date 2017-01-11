#include "Person.h"

using namespace Kolokvijum;

namespace std
{
	template <>
	struct hash<Person>
	{
		size_t operator() (const Person &p) const
		{
			auto t = hash<std::string>();
			return t(p.getJmbg);
		}
	};
}

int main()
{
	Printable a("banana");
	Person b("Pero", "123");

	system("pause");
}