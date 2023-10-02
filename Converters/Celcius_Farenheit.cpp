#include <iostream>
int main() {
    using std::cout;
    using std::cin;

    while (true) {
        cout << "\n\n\n*******Welcome to Basic Temperature Converter*******\n";
        cout << "Enter what you want to do:\n";
        cout << "(1): Celcius to Farenheit \n";
        cout << "(2): Farenhite to Celcius\n";
        cout << "(3): Exit Program\n";
        cout << "Your Choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the temperature in celcius:\n";
                float temp_c;
                cin >> temp_c;
                float temp_f = (temp_c * 9/5) +32;
                cout << "Your temperature in farenheit is: " << temp_f << "\n\n";
                break;
            }
            case 2: {
                cout << "Enter the temperature in farenheit:\n";
                float temp_f;
                cin >> temp_f;
                float temp_c = (temp_f - 32) * 5/9;
                cout << "Your temperature in celcius is: " << temp_c << "\n\n";
                break;
            }
            case 3:
                cout << "Thanks for using this program \n Exiting.....";
                return 0;
            default:
                cout << "Not a valid input\n";
        }
    }

    return 0;
}
