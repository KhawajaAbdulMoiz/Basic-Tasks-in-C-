/*#include <iostream>
using namespace std;
int main() {
    cout << "---------------------| QUESTION 1 |---------------------\n";
    float weight, height;

    cout << "\n-------------------| BMI CALCULATOR |-------------------\n";
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;

    float weight_kg = weight * 0.453592; // 1 pound = 0.453592 kilograms
    float height_m = height * 0.0254;     // 1 inch = 0.0254 meters

    if (weight > 0 && height > 0) {

        float bmi = weight_kg / (height_m * height_m);
        cout << "Your BMI is: \n" << bmi << endl;
        cout << "\nBMI Values :\n";
        cout << "\nUnderweight: less than 18.5\n";
        cout << "Normal: between 18.5 and 24.9\n";
        cout << "Overweight: between 25 and 29.9\n";
        cout << "Obese: 30 or greater\n";

        if (bmi < 18.5) {
            cout << "\nYou are Underweight\n";
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "You are Normal\n";
        } else if (bmi >= 25 && bmi <= 29.9) {
            cout << "You are Overweight\n";
        } else {
            cout << "\nYou are Obese\n";
        }
    } else {
        cout << "Invalid weight or height entered\n";
    }
    
    
	cout << "\n---------------------| QUESTION 2 |---------------------\n";
	const int t_students = 10;
	int num_students;
	
	cout << "\nEnter the number of students in the class (maximum " << t_students << "): ";
	cin >> num_students;
	
	if (num_students >= 0 && num_students <= t_students) {
	    float t_gpa = 0.0;
	    float gpa;
	
	    for (int i = 1; i <= num_students; ++i) {
	        cout << "Enter the GPA of student " << i << ": ";
	        cin >> gpa;
	
	        if (gpa < 0 || gpa > 4) {
	            cout << "Invalid GPA. Please enter GPA between 0 and 4\n";
	            --i;
	            continue; 
	        }
	
	        t_gpa += gpa;
	    }
	
	    float class_average = t_gpa / num_students;    
	    cout << "Class Average GPA: " << class_average << endl;
	} else {
	    cout << "Invalid number of students. Please enter a number between 1 and 10 \n";  
	}
	 
	cout << "\n---------------------| QUESTION 3 |---------------------\n"<<endl;

    const double earning_per_year = 3000;
    const double machine_cost = 15000;
    const double salvage_value = 3000;
    const double interest_rate = 0.11; // 11% per annum

    // Calculating the annual profit from the machine
    const double annual_profit = earning_per_year - (machine_cost - salvage_value) * interest_rate;

    // Checking if the annual profit is greater than 0
    if (annual_profit > 0) {
        // Calculating the minimum life of the machine 
        const int min_life_years = (machine_cost - salvage_value) / annual_profit + 1;

        cout << "To make the machine a more attractive investment, it needs to last at least " << min_life_years << " years." << endl;
    } else {
        cout << "The machine will never be a more attractive investment compared to the alternative investment." << endl;
    }
	   
	cout << "\n---------------------|     QUESTION 4    |---------------------\n";
	cout << "\n---------------------| PALINDROME CHECKER |---------------------\n";
	int num, org, rev = 0, dig;
	cout << "Enter number : ";
	cin >> num;
	org = num;
	while (num != 0) {
	    dig = num % 10;
	    rev = (rev * 10) + dig;
	    num = num / 10;
	}
	if (org == rev) {
	    cout << "It is a Palindrome";
	} else {
	    cout << "It is not a Palindrome";
	}
	
	
	cout << "\n---------------------|     QUESTION 5    |---------------------\n";
	int numb;
	cout << "\nEnter a positive integer : ";
	cin >> numb;
	
	if (numb > 0 && numb <= 100) {
	    cout << "Factors of " << numb << " are : ";
	    for (int i = 1; i <= numb; ++i) {
	        if (numb % i == 0) {
	            cout << i;
	            if (i != numb) {
	                cout << " , ";
	            }
	        }
	    }
	} else {
	    cout << "Please enter a number between 1 and 100" << endl;
	}


}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

