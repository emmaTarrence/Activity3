#include <string>
#include "Person.h"

Person::Person(std::string _name) {
   name = _name;
}

std::string Person::getName( ) {
   return name;
}
   