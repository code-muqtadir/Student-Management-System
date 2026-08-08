#pragma once

#include <vector>
#include "../include/Student.h"

class StudentManager 
{
    private:
        std::vector<Student> students;

    public:
        bool addStudent(const Student& student);
        void displayAllStudents() const;
        void findStudentById(const std::string& studentId) const;
        void removeStudentById(const std::string& studentId);
        void updateStudentById(const std::string& studentId);
        int countStudents() const;
        void displayStudentsByDepartment(const std::string& studentDepartment);
        void findStudentsByName(const std::string& studentFullName) const;
        void displayStudentsBySemester(const int studentSemester) const;
        void sortStudentsByName();
        void sortStudentsByCGPA();
        void saveToFile(const std::string& filename) const;
        void loadFromFile(const std::string& filename);
        bool duplicateStudentIdExists(const std::string& studentId) const;

};


