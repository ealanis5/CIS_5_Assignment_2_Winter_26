#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main () {
   
    // name
    string name = "";
    // age 
    int age = 0;
    // height
    double height = 0.0;
    // weight
    double weight = 0.0;
    // test grade 
    int test_grade = 0;

    // grabs user input data 
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (meters): ";
    cin >> height;
    cout << "Enter your weight (kilograms): ";
    cin >> weight;
    cout << "Enter your test grade (0-100): ";
    cin >> test_grade;
    
    //BMI calculation
    double bmi = weight / (height * height);
    std::string bmiCategory = "";
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
        bmiCategory = "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal weight" << endl;
        bmiCategory = "Normal weight";
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Overweight" << endl;
        bmiCategory = "Overweight";
    } else {
        cout << "Obese" << endl;
        bmiCategory = "Obese";
    }

    //grade calulation
    char grade = ' ';
    if (test_grade >= 90) {
        cout << "Grade is A" << endl;
        grade = 'A';
    } else if (test_grade >= 80 && test_grade <= 89) {
        cout << "Grade is B" << endl;
        grade = 'B';
    } else if (test_grade >= 70 && test_grade <= 79) {
        cout << "Grade is C" << endl;
        grade = 'C';                                            
    } else if (test_grade >= 60 && test_grade <= 69) {
        cout << "Grade is D" << endl;
        grade = 'D';
    } else {
        cout << "Grade is F" << endl;
        grade = 'F';
    }

    //display output
    cout << "Hey " << name << ", you're " << age << " years old with a BMI of " << bmi << " ("<< bmiCategory << ")"<< " and you got a grade of " << grade << "!" << " keep up the good work!" << endl;
    
    return 0;
}