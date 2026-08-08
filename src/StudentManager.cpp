#include "../include/StudentManager.h"
#include <iostream>
#include<algorithm>
#include <fstream>
#include <sstream>

bool StudentManager::addStudent(const Student& student) 
{
    for (const Student& s : students) 
    {
        if (s.getStudentId() == student.getStudentId()) 
        {
            std::cout << "Student with ID " << student.getStudentId() << " already exists." << std::endl;
            return false;
        }
    }
    students.push_back(student);
    return true;
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

            while(newSemester < 1 || newSemester > 12) 
            {
                std::cout << "Invalid semester. Please enter a value between 1 and 12: ";
                std::cin >> newSemester;
            }

            it->setStudentSemester(newSemester);

            std::cout << "Enter new CGPA: ";
            std::cin >> newCGPA;

            while(newCGPA < 0.0 || newCGPA > 4.0) 
            {
                std::cout << "Invalid CGPA. Please enter a value between 0.0 and 4.0: ";
                std::cin >> newCGPA;
            }

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

void StudentManager::findStudentsByName(const std::string& studentFullName) const
{
    bool found = false;
    for (const Student& student : students)
    {
        if(student.getStudentFullName() == studentFullName)
        {
            student.displayStudent();
            found = true;
        }
    }
    if(!found)
    {
        std::cout << "No students found with name: " << studentFullName << std::endl;
    }
}

void StudentManager::displayStudentsBySemester(const int studentSemester) const
{
    bool found = false;
    for(const Student& student : students)
    {
        if(student.getStudentSemester() == studentSemester)
        {
            student.displayStudent();
            found = true;
        }
    }
    if(!found)
    {
        std::cout << "No students found in semester: " << studentSemester << std::endl;
    }
}

void StudentManager::sortStudentsByName()
{
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
    {
        return a.getStudentFullName() < b.getStudentFullName();
    });
}

void StudentManager::sortStudentsByCGPA()
{
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
{
    return a.getStudentCGPA() > b.getStudentCGPA();
});
}

void StudentManager::saveToFile(const std::string& filename) const
{
    std::ofstream outFile(filename);
    
    if(!outFile)
    {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }

    for(const Student& student: students)
    {
        outFile << student.getStudentId() << ","
                << student.getStudentFullName() << ","
                << student.getStudentDepartment() << ","
                << student.getStudentSemester()<< ","
                << student.getStudentCGPA()<< ","
                << student.getStudentPhone()<< ","
                << student.getStudentEmail()<< ","
                << student.getStudentAddress()<< ","
                << student.getStudentDateOfBirth()<< "\n";
    }
    outFile.close();

    std::cout << "Students saved successfully\n"; 
}

void StudentManager::loadFromFile(const std::string& filename)
{
    std::ifstream inFile(filename);
    if(!inFile)
    {
        std::cerr << "Error opening file for reading: " << filename << std::endl;
        return;
    }

    students.clear();

    std::string line;

    while(std::getline(inFile, line))
    {
        std::stringstream ss(line);
        std::string studentId, studentFullName, studentDepartment, studentSemesterStr,
        studentCGPAStr, studentPhone, studentEmail,studentAddress, studentDateOfBirth;

        std::getline(ss, studentId, ',');
        std::getline(ss, studentFullName, ',');
        std::getline(ss, studentDepartment, ',');
        std::getline(ss, studentSemesterStr, ',');
        std::getline(ss, studentCGPAStr, ',');
        std::getline(ss, studentPhone, ',');
        std::getline(ss, studentEmail, ',');
        std::getline(ss, studentAddress, ',');
        std::getline(ss, studentDateOfBirth);

        int studentSemester = std::stoi(studentSemesterStr);
        double studentCGPA = std::stod(studentCGPAStr);

        students.push_back(Student(studentId, studentFullName, studentDepartment, studentSemester,
        studentCGPA, studentPhone, studentEmail, studentAddress, studentDateOfBirth));

    }
    inFile.close();
    std::cout << "Students loaded successfully\n";

    
}