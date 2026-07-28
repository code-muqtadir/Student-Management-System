#pragma once

#include <string>

class Student {
    private:
        std::string studentId;
        std::string studentFullName;
        std::string department;
        int semester;
        double cgpa;
        std::string studentPhone;
        std::string studentEmail;
        std::string studentAddress;
        std::string studentDateOfBirth;
    public:
        Student(std::string studentId, std::string studentFullName,
               std::string department, int semester, double cgpa,
               std::string studentPhone, std::string studentEmail,
               std::string studentAddress,std::string studentDateOfBirth
         );

         std::string getStudentId() const;
         std::string getStudentFullName()const;
         std::string getDepartment() const;
         int getSemester() const;
         double getCgpa() const;
         std::string getStudentPhone() const;
         std::string getStudentEmail() const;
         std::string getStudentAddress() const;
         std::string getStudentDateOfBirth() const;

         void displayStudent() const; 
         

};