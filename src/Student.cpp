#include "../include/Student.h"

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
         