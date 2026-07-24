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

        std::cout << "Student ID: " << s.getStudentId() << std::endl;
        std::cout << "Student Full name: " << s.getStudentFullName() << std::endl;
        
    return 0;
}