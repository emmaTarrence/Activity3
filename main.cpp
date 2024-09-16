#include "Student.h"
#include <iostream>

int main(int argc, char* argv[ ]) {
   Student s = Student(2.9, "Sam");
   std::cout << "Name = " << s.getName() << " GPA = " << s.getGPA() << std::endl;
}
