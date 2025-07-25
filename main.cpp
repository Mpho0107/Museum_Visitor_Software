//MPHO PORTIA THABANE, STUDENT NUMBER: 38697505
#include <iostream>
#include <iomanip> //To position student's details when the results are viewed (by the student OR lecturer)
#include <fstream>
using namespace std;

//Main Welcome screen function
void userType(string userType)
{
    string lecturerName;
    string lecturerSurname;
    string universityNumber;
    char gender;
    string moduleName;
    char editChoice;
    char lecturerAction;
    string question1;
    string question2;
    string question3;
    int questionToEdit;

    string studentName;
    string studentSurname;
    string studentNumber;
    char difficultyLevel;
    string answer1, answer2, answer3;
    char viewResults;


    cout << "Bsc in Information Technology"
    cout << "Lecturer Or Student?: \n\n";
    cin.ignore();
    getline(cin, userType);
    if(userType == "Lecturer")
    {
        do
        {
            cout << "Name: ";
            cin.ignore();
            getline(cin, lecturerName);
            cout << "Surname: ";
            cin.ignore();
            getline(cin, lecturerSurname);
            cout << "University number: ";
            cin >> universityNumber;
            cout << "Gender: ";
            cin>> gender;

            //Display lecturer's login details
            cout << "\n\nName: " << lecturerName << endl;
            cout << "Surname: " << lecturerSurname << endl;
            cout << "University number: " << universityNumber << endl;
            cout << "Gender: " << gender << endl;

            cout << "Would you like to edit? (Y/N): ";
            cin >> editChoice;
        }
        while(editChoice == 'Y' || editChoice == 'y');
        cout << "\n\nWelcome, Mr " << lecturerSurname << endl;
        cout << "What would you like to do? (A to access, C to create, E to edit the quiz and V to view students' results): ";
        cin>> lecturerAction;
        switch(lecturerAction)
        {
        case 'A':
            //***Read quiz from text file code according to lecturer's module name***

            break;
        case 'C':
            cout << "Quiz name: ";
            cin.ignore();
            getline(cin, moduleName);
            cout << "Question 1: ";
            cin.ignore();
            getline(cin, question1);
            cout << "Question 2: ";
            cin.ignore();
            getline(cin, question2);
            cout << "Question 3: ";
            cin.ignore();
            getline(cin, question3);
            //***Code to save the quiz to a text file based on the module name***

            break;
        case 'E':
            if (moduleName == "CMPG 211")
            {
                //***Code to read quiz cmpg 211 from the file and allow editing***

                do
                {
                    //***Code to view and display a quiz based on the module name for editing***

                    cout << "Which question to edit? ";
                    cin >> questionToEdit;
                    if (questionToEdit == 1)
                    {
                        //***Code to edit question 1 of the quiz, change it in the text file (update)***
                    }
                    else if(questionToEdit == 2)
                    {
                        //***Code to edit question 2 of the quiz, change it in the text file (update)***
                    }
                     else
                    {
                        //***Code to edit question 3 of the quiz, change it in the text file (update)***
                    }
                }
                while(questionToEdit != 1 || questionToEdit != 2 || questionToEdit != 3);
            }
            else
            {
                //***Code to read quiz cmpg 212 from the file and allow editing***

                do
                {
                    //***Code to view and display a quiz based on the module name for editing***

                    cout << "Which question to edit? ";
                    cin >> questionToEdit;
                    if (questionToEdit == 1)
                    {
                        //***Code to edit question 1 of the quiz, change it in the text file (update)***
                    }
                    else if(questionToEdit == 2)
                    {
                        //***Code to edit question 2 of the quiz, change it in the text file (update)***
                    }
                     else
                    {
                        //***Code to edit question 3 of the quiz, change it in the text file (update)***
                    }
                }
                while(questionToEdit != 1 || questionToEdit != 2 || questionToEdit != 3);
            }
            break;
        case 'V':
            //***Code to view students' details and results from the text file & display them***

            break;
        default:
            cout << "Invalid choice!" <<endl;
            break;
        }
    else //IF USER IS A STUDENT
    {
        do
        {
            cout << "Name: ";
            cin.ignore();
            getline(cin, studentName);
            cout << "Surname: ";
            cin.ignore();
            getline(cin, studentSurname);
            cout << "Student number: ";
            cin >> studentNumber;

            //Display lecturer's login details
            cout << "\n\nName: " << lecturerName << endl;
            cout << "Surname: " << lecturerSurname << endl;
            cout << "University number: " << universityNumber << endl;
            cout << "Gender: " << gender << endl;

            cout << "Would you like to edit? (Y/N): ";
            cin >> editChoice;
        }
        while(editChoice == 'Y' || editChoice == 'y');
        cout << "\n\nWelcome, " << studentSurname << endl;
        cout << "Difficulty level: ";
        cin >> difficultyLevel;
        switch(moduleName)
        {
            case "CMPG 211":
                 if (difficultyLevel == 'E')
                 {
                     //***Code 3 CMPG 211 easy quiz questions for the student to complete***
                     if(answer1 == "Scanner" && answer2 == "Scanner" && answer3 == "System") //EXAMPLE, this line will depend on questions we have come up with for cmpg211 quiz
                     {
                         mark += 6;
                     }
                     //Code to write the obtained mark to the text file (attach next to student's details)
                 }
                 else if(difficultyLevel == 'A')
                 {
                     //***Code average quiz questions for the student to complete***

                     if(answer1 == "Scanner" && answer2 == "Scanner" && answer3 == "System") //EXAMPLE, this line will depend on questions we have come up with for cmpg211 quiz
                     {
                         mark += 6;
                     }
                     //Code to write the obtained mark to the text file (attach next to student's details)
                 }
                else
                {
                    //***Code average quiz questions for the student to complete***

                     if(answer1 == "Scanner" && answer2 == "Scanner" && answer3 == "System") //EXAMPLE, this line will depend on questions we have come up with for cmpg211 quiz
                     {
                         mark += 6;
                     }
                }
                break;
            case "CMPG 212":
                if (difficultyLevel == 'E')
                 {
                     //***Code 3 CMPG 211 easy quiz questions for the student to complete***
                     if(answer1 == "Data" && answer2 == "SqlConnection" && answer3 == "DataSource") //EXAMPLE, this line will depend on questions we have come up with for cmpg211 quiz
                     {
                         mark += 6;
                     }
                     //Code to write the obtained mark to the text file (attach next to student's details)
                 }
                 else if(difficultyLevel == 'A')
                 {
                     //***Code average quiz questions for the student to complete***

                     if(answer1 == "Data" && answer2 == "SqlConnection" && answer3 == "DataSource") //EXAMPLE, this line will depend on questions we have come up with for cmpg211 quiz
                     {
                         mark += 6;
                     }
                     //Code to write the obtained mark to the text file (attach next to student's details)
                 }
                else
                {
                    //***Code average quiz questions for the student to complete***

                     if(answer1 == "Data" && answer2 == "SqlConnection" && answer3 == "DataSource") //EXAMPLE, this line will depend on questions we have come up with for cmpg211 quiz
                     {
                         mark += 6;
                     }
                     //Code to write the obtained mark to the text file (attach next to student's details)
                }
            default:
                cout << "Invalid module name! Start afresh" << endl;
        }
        cout << moduleName << " is waiting!" << endl;
        cout << "Would you like to view the results?: ";
        cin >> viewResults;
        if(viewResults == 'Y' || viewResults == 'y')
        {
            //***Code to read and display student details & results from the text file
        }
    }
}
int main()
{
    return 0;
}
