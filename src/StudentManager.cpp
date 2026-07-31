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

void StudentManager::removeStudentById(const std::string& studentId)
{
    for(auto it = students.begin(); it != students.end(); ++it)
    {
        if(it->getStudentId() == studentId)
        {
            students.erase(it);
            std::cout << "Student with ID " << studentId << " has been removed." << std::endl;
            return;
        }
    }
    std::cout << "Student with ID " << studentId << " not found." << std::endl; 
}