/******************************************************************************
/////////////////////////////////////////////////////////////////////
// Name: Yexcinia Cermeno
// Date: 10.13.26
// Class: CSCI 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: This program receives height and weight as input and uses it to reveal BMI category.
/////////////////////////////////////////////////////////////////////

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double convertcm2m (double cm);
double calBMI (double kg, double m);
string selector (double bmi);

int main()
{
    int patients;
    
    cout << "How many patients would you like to process today? ";
    cin >> patients;
    cout << endl;
    
    for (int i = 0; i < patients; i++) {
        string name;
        double kg, cm;
        
        cout << "Please enter the patient's name #" << i + 1 << " :";
        cin.ignore();
        getline(cin, name);
        
        cout << "Please enter the patient's weight in kilograms: ";
        cin >> kg;
        
        cout << "Please enter the patient's height in centimeters: ";
        cin >> cm;
        
        if (kg <= 0 or cm <= 0 ){
            cout << "Error: Invalid Input!!" << endl;
            return 0;
        }
        double m = convertcm2m(cm);
        double bmi = calBMI(kg, m);
        string category = selector(bmi);
        
        
        cout << name << "'s BMI is: " << bmi << endl;
        cout << "Patient's BMI classification is: "<< category << endl;
        cout << endl;
        
    }
    
    cout << "Thanks for using our system!" << endl;
    
    return 0;
    
}

double convertcm2m(double cm) {
    return cm / 100;
}

double calBMI(double kg, double m) {
    return kg / (m * m);
}


string selector(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 and bmi <= 24.9) {
        return "Normal";
    } else if (bmi >= 25.0 and bmi <= 29.9) {
        return "Overweight";
    } else {
        return "Obese";
    }
}
  