#include "../include/Student.h"
#include <iostream>

Student::Student(std::string studentId, std::string studentFullName,
               std::string studentDepartment, int studentSemester, double studentCGPA,
               std::string studentPhone, std::string studentEmail,
               std::string studentAddress,std::string studentDateOfBirth
         )
         {
            this->studentId = studentId;
            this->studentFullName = studentFullName;
            this->studentDepartment = studentDepartment;
            this->studentSemester = studentSemester;
            this->studentCGPA = studentCGPA;
            this->studentPhone = studentPhone;
            this->studentEmail = studentEmail;
            this->studentAddress = studentAddress;
            this->studentDateOfBirth = studentDateOfBirth;
         }

         // Setter methods
         
         void Student::setStudentId(std::string studentId)
         {
            this->studentId = studentId;
         }
         void Student::setStudentFullName(std::string studentFullName)
         {
            this->studentFullName = studentFullName;
         }
         void Student::setStudentDepartment(std::string studentDepartment)
         {
            this->studentDepartment = studentDepartment;
         }
         void Student::setStudentSemester(int studentSemester)
         {
            this->studentSemester = studentSemester;
         }
         void Student::setStudentCGPA(double studentCGPA)
         {
            this->studentCGPA = studentCGPA;
         }
         void Student::setStudentPhone(std::string studentPhone)
         {
            this->studentPhone = studentPhone;
         }
         void Student::setStudentEmail(std::string studentEmail)
         {
            this->studentEmail = studentEmail;
         }
         void Student::setStudentAddress(std::string studentAddress)
         {
            this->studentAddress= studentAddress;
         }
         void Student::setStudentDateOfBirth(std::string studentDateOfBirth)
         {
            this->studentDateOfBirth = studentDateOfBirth;
         }

         // Getter methods

         std::string Student::getStudentId() const
         {
            return studentId;
         }
         std::string Student::getStudentFullName() const
         {
            return studentFullName;
         }
         std::string Student::getStudentDepartment() const
         {
            return studentDepartment;
         }
         int  Student::getStudentSemester() const
         {
            return studentSemester;
         }
         double Student::getStudentCGPA() const
         {
            return studentCGPA;
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
            std::cout << "========================================" << std::endl;
            std::cout << "Student ID: " << studentId << std::endl;
            std::cout << "Full Name: " << studentFullName << std::endl;
            std::cout << "Department: " << studentDepartment << std::endl;
            std::cout << "Semester: " << studentSemester << std::endl;
            std::cout << "CGPA: " << studentCGPA << std::endl;
            std::cout << "Phone: " << studentPhone << std::endl;
            std::cout << "Email: " << studentEmail << std::endl;
            std::cout << "Address: " << studentAddress << std::endl; 
            std::cout << "Date of Birth: " << studentDateOfBirth << std::endl; 
            std::cout << "========================================" << std::endl;
        }
         