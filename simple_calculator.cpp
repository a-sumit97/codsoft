#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number1, number2;
    char ch;
    int choice;
    cout << endl;

    while (1)
    {
        cout << "press 1 if you want to play and press 0 if you want to exit\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "enter the operation you want to perform" << endl;
            cin >> ch;
            switch (ch)
            {
            case '+':
                cout << "operation for addition" << endl;
                cout << "enter your numbers" << endl;
                cin >> number1 >> number2;
                cout << "addition is " << number1 + number2 << endl;
                break;

            case '-':
                cout << "operation for subtraction" << endl;
                cout << "enter your numbers" << endl;
                cin >> number1 >> number2;
                cout << "subtraction is " << number1 - number2 << endl;
                break;
            case '*':
                cout << "operation for multiplication" << endl;
                cout << "enter your numbers" << endl;
                cin >> number1 >> number2;
                cout << "multiplication is " << number1 * number2 << endl;
                break;
            case '/':
                cout << "operation for division" << endl;
                cout << "enter your numbers" << endl;
                cin >> number1 >> number2;
                cout << "division is " << number1 / number2 << endl;
                break;

            default:
                break;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}