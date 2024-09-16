#include <string>
#include "Student.h"
#include <iostream>

Student::Student(float _gpa, std::string name): Person(name)  {
   gpa = _gpa;
}

float Student::getGPA( ) const{
   return gpa;
}

void Student::print(){
   std::cout <<"Name: "<< getName()<< " GPA: " <<getGPA() << std::endl;
}