#include "../include/StudentManager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) 
{
    students.push_back(student);
}

void StudentManager::displayAllStudents() const
{
    for (const Student& student : students) {
        student.displayStudent();
    }
}

void StudentManager::findStudentById(const std::string& studentId) const
{
    for (const Student& student : students) 
    {
        if (student.getStudentId() == studentId) 
        {
            student.displayStudent();
            return;
        }
    }
    std::cout << "Student not found." << std::endl;
}