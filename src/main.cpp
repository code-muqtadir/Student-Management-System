#include "../include/Student.h"
#include "../include/StudentManager.h"

#include <iostream>

int main(){

    StudentManager manager;

    manager.loadFromFile("Student.txt");

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
        std::cout << "11. Sort By CGPA\n";
        std::cout << "12. Save Students\n";
        std::cout << " 0. Exit\n";

        std::cout << "\nEnter your choice: ";

        std::cin >> choice;

        switch(choice)
        {
            case 1:
                {
                    std::string studentId;
                    std::string studentFullName;
                    std::string studentDepartment;
                    int studentSemester;
                    double studentCGPA;
                    std::string studentPhone;
                    std::string studentEmail;
                    std::string studentAddress;
                    std::string studentDateOfBirth;

                    std::cout << "Enter student ID: ";
                    std::cin >> studentId;

                    std::cout << "Enter student full name: ";
                    std::getline(std::cin>>std::ws, studentFullName);

                    std::cout << "Enter student department: ";
                    std::getline(std::cin>>std::ws, studentDepartment); 

                    std::cout << "Enter student semester: ";
                    std::cin >> studentSemester;

                    std::cout << "Enter student CGPA: ";
                    std::cin >> studentCGPA;

                    std::cout << "Enter student phone: ";
                    std::cin >> studentPhone;

                    std::cout << "Enter student email: ";
                    std::cin >> studentEmail;

                    std::cout << "Enter student address: ";
                    std::getline(std::cin>>std::ws, studentAddress);

                    std::cout << "Enter student date of birth: ";
                    std::getline(std::cin>>std::ws, studentDateOfBirth);

                    Student newStudent(
                        studentId,
                        studentFullName,
                        studentDepartment,
                        studentSemester,
                        studentCGPA,
                        studentPhone,
                        studentEmail,
                        studentAddress,
                        studentDateOfBirth
                    );


                    if(manager.addStudent(newStudent))
                    {
                        std::cout << "Student added successfully.\n";
                    }

                    break;
                }
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

            case 4:
                {
                    std::string studentId;
                    std::cout << "Enter student ID to update: ";
                    std::cin >> studentId;
                    manager.updateStudentById(studentId);
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

            case 8:
                {
                    std::string studentDepartment;
                    std::cout << "Enter department to display students: ";
                    std::getline(std::cin >> std::ws,studentDepartment);
                    manager.displayStudentsByDepartment(studentDepartment);
                    break;
                }

            case 9:
               {
                   int studentSemester;
                   std::cout << "Enter semester to display students: ";
                   std::cin >> studentSemester;
                   manager.displayStudentsBySemester(studentSemester);
                   break;
               }

            case 10:
               {
                   manager.sortStudentsByName();
                   std::cout << "Students sorted by name.\n";
                   break;
               }

            case 11:
               {
                   manager.sortStudentsByCGPA();
                   std::cout << "Students sorted by CGPA.\n";
                   break;
               }

            case 12:
               {
                   //std::string filename;
                   //std::cout << "Enter filename to save students: ";
                   //std::cin >> filename;
                   //manager.saveToFile(filename);

                   manager.saveToFile("Student.txt");
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