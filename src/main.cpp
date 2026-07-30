#include "../include/Student.h"
#include "../include/StudentManager.h"

#include <iostream>

int main(){

    StudentManager manager;

    Student s1(
        "S001", 
        "John Doe", 
        "Computer Science", 
        3, 3.75, 
        "123-456-7890", 
        "john.doe@example.com", 
        "123 Main St", 
        "1999-01-01");

        manager.addStudent(s1);
        manager.displayAllStudents();

    return 0;
}