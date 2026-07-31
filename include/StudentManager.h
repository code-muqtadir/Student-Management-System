#pragma once

#include <vector>
#include "../include/Student.h"

class StudentManager 
{
    private:
        std::vector<Student> students;

    public:
        void addStudent(const Student& student) ;
        void displayAllStudents() const;
        void findStudentById(const std::string& studentId) const;
};
