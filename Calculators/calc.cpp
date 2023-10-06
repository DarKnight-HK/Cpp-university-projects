#include<iostream>
int main(){
    using std::cout;
    using std::cin;
    double a,b,result;
    char op;
    cout << "***********CALCULATOR*********** \n";
    cout << "Enter the operator (+,-,*,/):  \n";
    cin >> op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
    cout << "Not a valid operator";
        break;
    }
    cout<<"The result is " << result;
    cout << "\n *********************************";
 return 0;   
}
