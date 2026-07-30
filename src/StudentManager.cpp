#include "../include/StudentManager.h"

void StudentManager::addStudent(Student student) 
{
    students.push_back(student);
}

void StudentManager::displayAllStudents() const
{
    for (const Student& student : students) {
        student.displayStudent();
    }
}