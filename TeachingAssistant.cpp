#include <string>
#include "TeachingAssistant.h"
#include <iostream>
#include "Student.h"


TeachingAssistant::TeachingAssistant(float gpa, const std::string &name, const std::string &course)
    : Student(gpa, name), course(course) {}

std::string TeachingAssistant::getCourse() const {
    return course;
}