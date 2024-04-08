#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>
#include <vector>


using namespace std;

struct Student {
    string name;
    string surname;
    int vGrade;
    int wGrade; 
    double average; 
};


void schema();
void printStudent(const Student& student);
void bottom();


	string dashes = "---------------------------------------------------------------------------------------";

int main() {
    
	
	//for progress bar
//	using namespace std::this_thread;
//	using namespace std::chrono; 
	
	
	
	//for input
	int numberOfStudents;
    
    
	//defensive programming
    
    
    
    //input mathites
    

    
    cout << "Posous mathites thes pia ? Lege: ";
    cin >> numberOfStudents;
    
	
    Student* students = new Student[numberOfStudents];

    for (int i = 0; i < numberOfStudents; ++i) {
	    cout << "Name: ";
		cin >> students[i].name;
		
		cout << "Surname: ";
		cin >> students[i].surname;
		
		cout << "Vocal Grade: ";
		cin >> students[i].vGrade;
		
		cout << "Written Grade: ";
		cin >> students[i].wGrade;
		   
		   
		students[i].average = (students[i].vGrade + students[i].wGrade) / 2.0;
	}
	
	
	
	
	//progress bar
	
	
		std::cout << "[";
		
	for(int i = 0; i < 100; i++)
		{
			this_thread::sleep_for(chrono::milliseconds(5));
			std::cout << "=";
		}
		
		std::cout << "] 100% \n\n\n";

	
	
	//output
	
	


    schema();
    for (int i = 0; i < numberOfStudents; ++i) {
        printStudent(students[i]);
    }
    bottom();

    delete[] students; 

	
	
	//save in file
	
	
	system("PAUSE");
	return 0;
}



void schema() {
	
	string spaces = "\t\t\t\t\t\t\t\t\t\t\t";

	
	
	cout << " " << dashes << " " << endl;
    cout << "|"<< spaces << "|" << endl;
	cout << "|"<< spaces << "|" << endl;    
	cout << "|					DATABASE					|" << endl;
		cout << "|"<< spaces << "|" << endl;  
//    cout << "|"<< spaces << "|" << endl;
    cout << "|"<< spaces << "|" << endl;
    cout << " " << dashes << " " << endl;
    cout << "|" << setw(18) << "Name " << setw(15) << "Surname " << setw(15) << "V.Grade " << setw(15) << "W.Grade " << setw(15) << "Average " << setw(10) << "|" << endl;
    cout << "|"<< spaces << "|" << endl;
//    cout << "|"<< spaces << "|" << endl;
//    cout << "|"<< spaces << "|" << endl;
    cout << " " << dashes << " " << endl;
}



void printStudent(const Student& student) {
    cout << "|" << " " << setw(14) << student.name << setw(15) << student.surname
         << setw(15) << student.vGrade << setw(15) << student.wGrade
         << setw(15) << student.average << "     \t|" << endl;
}



	
void bottom() {
    cout << "|"<< " " << setw(87) << "|" << endl;
    cout << "|"<< " " << setw(87) << "|" << endl;
    cout << "|"<< " " << setw(87) << "|" << endl;
    cout << "|"<< " " << setw(87) << "|" << endl;
    cout << " " << dashes << " " << endl << endl << endl << endl;
}





/*
							Wishfull Output
 -----------------------------------------------------------------------
|																		|
|								DATABASE								|
|																		|
 -----------------------------------------------------------------------
|		Name	Surname		V.Grade		W.Grade		Average				|
|																		|
|		John	Doe				5			5			5				|
|																		|
|		Mary	Jane			6			4			5				|
|																		|
|																		|
|																		|
 -----------------------------------------------------------------------

*/
