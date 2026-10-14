/******************************************************************************
/////////////////////////////////////////////////////////////////////
// Name: Yexcinia Cermeno
// Date: 10.13.26
// Class: CSCI 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: This program opens a file and reads patient data regarding BMI from it.
/////////////////////////////////////////////////////////////////////

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
int patients;
string first, last;
double weight, height; 
double bmi;
    
    ifstream inputFile("patients.txt");
    inputFile >> patients;
    for (int i = 1; i <= patients; i++)
    {
        
        inputFile >> first >> last >> weight >> height;

        
        if (weight <= 0 or height <= 0) //both or and || work
        {
            cout << "Invalid!";
            return 0;
        }

        
        height = height / 100;

        
        bmi = weight / (height * height);

        cout << "(#" << i << ") "
             << first << " " << last
             << "'s BMI is: " << bmi << endl;

        
        if (bmi < 18.5)
        {
            cout << "BMI category: Underweight"
                 << endl;
        }
        else if (bmi <= 24.9 && bmi >= 18.5 ) //&& and 'and' both work
        {
            cout << "BMI category: Normal"
                 << endl;
        }
        else if (bmi >= 25.0 and bmi <= 29.9 )
        {
            cout << "BMI category: Overweight"
                 << endl;
        }
        else
        {    
            cout << "BMI category: Obese"
                 << endl;
        }

        cout << endl;
    }

    cout << "Thank you for using our system!" << endl;

    
    inputFile.close();

    return 0;
}