#include <iostream>
#include <limits>

int main() {
    using std::cout;
    using std::cin;

    float weight, height;

    cout << "***************BMI CALCULATOR***************\n";
    
    while (true) {
        cout << "Enter your height in meters: ";
        if (!(cin >> height)) {
            cout << "Invalid input. Please enter a valid number for height.\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter your weight in kilograms: ";
        if (!(cin >> weight)) {
            cout << "Invalid input. Please enter a valid number for weight.\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    if (height <= 0 || weight <= 0) {
        cout << "Height and weight must be positive values.\n";
    } else {
        float bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << '\n';

        if (bmi < 18.5) {
            cout << "You are underweight :( \n";
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "You are healthy :)\n";
        } else if (bmi >= 25 && bmi <= 29.9) {
            cout << "You are slightly overweight :O";
        } else {
            cout << "You are obese :(" << '\n';
        }
    }

    cout << "Thanks for using this program\n";

    return 0;
}
