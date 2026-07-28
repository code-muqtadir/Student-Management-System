#include "../include/Student.h"

#include <iostream>

int main(){
    Student s(
        "S001", 
        "John Doe", 
        "Computer Science", 
        3, 3.75, 
        "123-456-7890", 
        "john.doe@example.com", 
        "123 Main St", 
        "1999-01-01");

        std::cout << "Student object created successfully!" << std::endl;

       std::cout << "\n------------------------------\n";
std::cout << "Before updating the student information:\n";
s.displayStudent();

s.setStudentId("S002");
s.setStudentFullName("Jane Doe");
s.setDepartment("Information Technology");
s.setSemester(4);
s.setCgpa(3.85);
s.setStudentPhone("987-654-3210");
s.setStudentEmail("jane.doe@example.com");
s.setStudentAddress("456 Oak Ave");
s.setStudentDateOfBirth("2000-02-02");

std::cout << "\n------------------------------\n";
std::cout << "After updating the student information:\n";
s.displayStudent();  

    return 0;
}