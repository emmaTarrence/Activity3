#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include <string>
#include "Student.h"

class TeachingAssistant : public Student {

private:
    std::string course;

public:
   TeachingAssistant(float gpa, const std::string &name, const std::string &course);
     TeachingAssistant();

    std::string getCourse() const;
};

#endif /* TEACHINGASSISTANT_H */