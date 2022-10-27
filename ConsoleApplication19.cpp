#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;
    int marks[5], i;
    

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "greg" && userPassword == "dunn")
        {
            cout << "Welcome Greg!\n";
            break;
        }
        else if (userName == "patrick" & 5 & userPassword == "dunn")
        {
            cout << "Welcome Patrick!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
      
    }
    if (loginAttempt == 5)
    {
        cout << "Too many login attempts! The program will now terminate.";
        return 0;
    }
        cout << "Thank you for logging in.\n";
    }

    


    string students[3] = { "Helbert", "Karl", "Joshua" };

    cout << "  [ STUDENTS IN HOLY CROSS COLLEGE OF DAVAO ] " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "  " << students[i] << endl;
    }

    cout << endl << endl;
    cout << "  [ ACADEMIC ACHIEVEMENTS ] " << endl;
    cout << "  Student Name: ";
    string student_name;
    cin >> student_name;  
    cout << endl;

   if (student_name == "Karl")
    {
        cout << "ACHIEVMENTS OF KARL\n";
        cout << "\nBest in Social Science";
        cout << "\nDefensive player of the year";
        cout << "\nForeign language award";
        cout << endl;

    }


   else if (student_name == "Joshua")
    {
        cout << endl;
        cout << "ACHIEVEMENTS OF JOSHUA\n";
        cout << "\nBest in Math";
        cout << "\nThree point shooter of the year\n";
        cout << endl;


    }

    else if(student_name == "Helbert") {
        cout << "ACHIEVEMENTS OF HELBERT\n";
        cout << "\nAcademic contest prize";
        cout << "\nTeam spirit award";
        cout << "\nBest in English";



    }
    else { 
         cout << "It is unknown\n";

    }





   for (int i = 0; i < 3; i++)
   {
       if (student_name == students[i])
       {
           cout << "\n\n SUCCESS: " << student_name << " is on the list! \n";



           return 0; //end of program
       }


   }
    

    cout << "\n\n " << student_name << " is not on the list! \n";

}
