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

void StudentManager::updateStudentById(const std::string& studentId)
{
    for(auto it = students.begin(); it != students.end(); ++it)
    {
        if(it->getStudentId() == studentId)
        {
            std::string newFullName, newDepartment;
            int newSemester;
            double newCGPA;

            std::cout << "Enter new full name: ";
            std::getline(std::cin >> std::ws, newFullName);
            it->setStudentFullName(newFullName);

            std::cout << "Enter new department: ";
            std::getline(std::cin >> std::ws, newDepartment);
            it->setStudentDepartment(newDepartment);

            std::cout << "Enter new semester: ";
            std::cin >> newSemester;
            it->setStudentSemester(newSemester);

            std::cout << "Enter new CGPA: ";
            std::cin >> newCGPA;
            it->setStudentCGPA(newCGPA);

            std::cout << "Student with ID " << studentId << " has been updated." << std::endl;

            it->displayStudent(); // Display the updated student information
            return;
        }
    }
    std::cout << "Student with ID " << studentId << " not found." << std::endl;
}

int StudentManager::countStudents() const
{
    return students.size();
}

void StudentManager::displayStudentsByDepartment(const std::string& studentDepartment)
{
    bool found = false;
    for (const Student& student : students)
    {
        if(student.getStudentDepartment() == studentDepartment)
        {
            student.displayStudent();
            found = true;
        }
    }
    if(!found)
    {
        std::cout << "No students found in department: " << studentDepartment << std::endl;
    }
}