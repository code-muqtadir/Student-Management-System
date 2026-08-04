#pragma once

#include <string>

class Student {
    private:
        std::string studentId;
        std::string studentFullName;
        std::string studentDepartment;
        int studentSemester;
        double studentCGPA;
        std::string studentPhone;
        std::string studentEmail;
        std::string studentAddress;
        std::string studentDateOfBirth;
    public:
        Student(std::string studentId, std::string studentFullName,
               std::string studentDepartment, int semester, double StudentCGPA,
               std::string studentPhone, std::string studentEmail,
               std::string studentAddress,std::string studentDateOfBirth
         );

         void setStudentId(std::string studentId);
         void setStudentFullName(std::string studentFullName);
         void setStudentDepartment(std::string studentDepartment);
         void setStudentSemester(int studentSemester);
         void setStudentCGPA(double studentCGPA);
         void setStudentPhone(std::string studentPhone);
         void setStudentEmail(std::string studentEmail);
         void setStudentAddress(std::string studentAddress);
         void setStudentDateOfBirth(std::string studentDateOfBirth);


         std::string getStudentId() const;
         std::string getStudentFullName()const;
         std::string getStudentDepartment() const;
         int getStudentSemester() const;
         double getStudentCGPA() const;
         std::string getStudentPhone() const;
         std::string getStudentEmail() const;
         std::string getStudentAddress() const;
         std::string getStudentDateOfBirth() const;

         void displayStudent() const; 
         

};