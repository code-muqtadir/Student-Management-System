#include "../include/Student.h"
#include <iostream>

Student::Student(std::string studentId, std::string studentFullName,
               std::string department, int semester, double cgpa,
               std::string studentPhone, std::string studentEmail,
               std::string studentAddress,std::string studentDateOfBirth
         )
         {
            this->studentId = studentId;
            this->studentFullName = studentFullName;
            this->department = department;
            this->semester = semester;
            this->cgpa = cgpa;
            this->studentPhone = studentPhone;
            this->studentEmail = studentEmail;
            this->studentAddress = studentAddress;
            this->studentDateOfBirth = studentDateOfBirth;
         }

         std::string Student::getStudentId() const
         {
            return studentId;
         }
         std::string Student::getStudentFullName() const
         {
            return studentFullName;
         }
         std::string Student::getDepartment() const
         {
            return department;
         }
         int  Student::getSemester() const
         {
            return semester;
         }
         double Student::getCgpa() const
         {
            return cgpa;
         }
         std::string Student::getStudentPhone() const
         {
            return studentPhone;
         }
         std::string Student::getStudentEmail() const
         {
            return studentEmail;
         }
         std::string Student::getStudentAddress() const
         {
            return studentAddress;
         }
         std::string Student::getStudentDateOfBirth() const
        {
            return studentDateOfBirth;
        }

        void Student::displayStudent() const
        {
            std::cout << "Student ID: " << studentId << std::endl;
            std::cout << "Full Name: " << studentFullName << std::endl;
            std::cout << "Department: " << department << std::endl;
            std::cout << "Semester: " << semester << std::endl;
            std::cout << "CGPA: " << cgpa << std::endl;
            std::cout << "Phone: " << studentPhone << std::endl;
            std::cout << "Email: " << studentEmail << std::endl;
            std::cout << "Address: " << studentAddress << std::endl; 
            std::cout << "Date of Birth: " << studentDateOfBirth << std::endl; 
        }
         