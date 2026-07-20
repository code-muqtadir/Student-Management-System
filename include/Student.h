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

};