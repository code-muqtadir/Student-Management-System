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
        3, 3.9, 
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

    Student s4(
        "S004", 
        "Bob Brown", 
        "Computer Science", 
        1, 3.6, 
        "999-888-7777", 
        "bob.brown@example.com", 
        "321 Elm St", 
        "2000-08-10");

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);
    manager.addStudent(s4);

    int choice;

    do{
        std::cout << "\n==========================================\n";
        std::cout << "        Student Management System\n";
        std::cout << "==========================================\n";
        std::cout << " 1. Add Student\n";
        std::cout << " 2. Display All Students\n";
        std::cout << " 3. Find Student By ID\n";
        std::cout << " 4. Update Student\n";
        std::cout << " 5. Remove Student\n";
        std::cout << " 6. Count Students\n";
        std::cout << " 7. Find Student By Name\n";
        std::cout << " 8. Display Student By Department\n";
        std::cout << " 9. Display Student By Semester\n";
        std::cout << "10. Sort By Name\n";
        std::cout << "11. Sort By GPA\n";
        std::cout << "12. Save Students\n";
        std::cout << " 0. Exit\n";

        std::cout << "\nEnter your choice: ";

        std::cin >> choice;

        switch(choice)
        {
            case 2:
                manager.displayAllStudents();
                break;

            case 3:
                {
                    std::string studentId;
                    std::cout << "Enter student ID to find: ";
                    std::cin >> studentId;
                    manager.findStudentById(studentId);
                }
                break;

            case 5:
                {
                    std::string studentId;
                    std::cout << "Enter student ID to remove: ";
                    std::cin >> studentId;
                    manager.removeStudentById(studentId);
                }
                break;

            case 6:
                std::cout << "Total number of students: " << manager.countStudents() << std::endl;
                break;

            case 7:
                {
                    std::string studentFullName;
                    std::cout << "Enter student full name to find: ";
                    std::getline(std::cin >> std::ws, studentFullName);
                    manager.findStudentsByName(studentFullName);
                    break;
                }


            case 0:
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    

    } while(choice != 0);



    return 0;
}