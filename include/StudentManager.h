#pragma once

#include <vector>
#include "../include/Student.h"

class StudentManager 
{
    private:
        std::vector<Student> students;

    public:
        void addStudent(Student student) ;
        void displayAllStudents() const;
};