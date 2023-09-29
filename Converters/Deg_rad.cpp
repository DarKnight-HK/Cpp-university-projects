#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;

    while (true) {
        cout << "\n\n\n*******Welcome to Basic Angle Converter*******\n";
        cout << "Enter what you want to do:\n";
        cout << "(1): Degree to Radian\n";
        cout << "(2): Radian to Degree\n";
        cout << "(3): Exit Program\n";
        cout << "Your Choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the angle in degrees:\n";
                float angle_d;
                cin >> angle_d;
                float angle_r = angle_d * M_PI / 180;
                cout << "Your angle in radians is: " << angle_r << "\n\n";
                break;
            }
            case 2: {
                cout << "Enter the angle in radians:\n";
                float angle_r;
                cin >> angle_r;
                float angle_d = angle_r * 180 / M_PI;
                cout << "Your angle in degrees is: " << angle_d << "\n\n";
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
