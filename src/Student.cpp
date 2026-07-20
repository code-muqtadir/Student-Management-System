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