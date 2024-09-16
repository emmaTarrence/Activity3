#include "Student.h"
#include <iostream>

int main(int argc, char* argv[ ]) {
   Person p =Person("Emma");
   p.print();
   Student s = Student(2.9, "Sam");
   s.print(); 
    std::cout << "Name = " << s.getName() << " GPA = " << s.getGPA() << std::endl;
}
