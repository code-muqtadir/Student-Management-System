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

    Student s2(
        "S002", 
        "Jane Smith", 
        "Mathematics", 
        2, 3.9, 
        "098-765-4321", 
        "jane.smith@example.com", 
        "456 Oak Ave", 
        "2000-05-15");

    Student s3(
        "S003", 
        "Alice Johnson", 
        "Physics", 
        4, 3.8, 
        "555-123-4567", 
        "alice.johnson@example.com", 
        "789 Pine Rd", 
        "1998-11-20");

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);
    
    manager.updateStudentById("S003");

    return 0;
}