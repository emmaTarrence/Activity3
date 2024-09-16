#include "Student.h"
#include "Person.h"
#include "TeachingAssistant.h"
#include <iostream>

int main(int argc, char* argv[ ]) {
   Person p =Person("Emma");
   p.print();
   Student s = Student(2.9, "Sam");
   s.print(); 
    std::cout << "Name = " << s.getName() << " GPA = " << s.getGPA() << std::endl;
Person *personPtr = &s;
Student *studentPtr = &s;
personPtr->print();
studentPtr->print();

    TeachingAssistant ta(3.8, "Julie", "OO Programming");

    std::cout << "Teaching Assistant Name: " << ta.getName() << std::endl; // Assuming Student class has a getName() method
    std::cout << "GPA: " << ta.getGPA() << std::endl; // Assuming Student class has a getGPA() method
    std::cout << "Course: " << ta.getCourse() << std::endl;
}
/*
step 1:
    output: ^[[A/usr/bin/ld: /tmp/cc8bZrr0.o: in function `main':
main.cpp:(.text+0xfe): undefined reference to `Student::print()'
collect2: error: ld returned 1 exit status

step 2: 
    Name:Emma
    Name: Sam GPA: 2.9
    Name = Sam GPA = 2.9
step 3: 
    The same error as step one but for person 
    /usr/bin/ld: /tmp/cckzznhL.o: in function `main':
main.cpp:(.text+0x8e): undefined reference to `Person::print()'
collect2: error: ld returned 1 exit status

Part 2
q1: main.cpp: In function ‘int main(int, char**)’:
main.cpp:11:27: error: invalid conversion from ‘Person*’ to ‘Student*’ [-fpermissive]
   11 |     Student *studentPtr = &p;
      |                           ^~
      |                           |
      |                           Person*
q2: main.cpp:11:27: error: invalid conversion from ‘Person*’ to ‘Student*’ [-fpermissive]
   11 |     Student *studentPtr = &p;
      |                           ^~
      |                           |
      |      
q3: Name:Emma
Name: Sam GPA: 2.9
Name = Sam GPA = 2.9
Name:Sam
Name: Sam GPA: 2.9
q4: the refrences to p and s are not interchangable 

Part3 
step 1: 
    Name:Emma
    Name: Sam GPA: 2.9
    Name = Sam GPA = 2.9
    Name:Sam
    Name: Sam GPA: 2.9
step 2: $ ./main
    Name:Emma
    Name: Sam GPA: 2.9
    Name = Sam GPA = 2.9
    Name: Sam GPA: 2.9
    Name: Sam GPA: 2.9

Part 4

*/