#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lower_bound = 1;
    int upper_bound = 100;
    srand(time(0));
    int computer_number = (rand() % (upper_bound - lower_bound + 1)) + lower_bound;
    int ch;
    while (1)
    {
        cout << "\nenter your number\n";
        cin >> ch;
        if (ch == computer_number)
        {
            cout << "great, you found it";
            break;
        }
        else if (ch < computer_number)
        {
            cout << "enter big number\n";
        }
        else
        {
            cout << "enter small number\n";
        }
    }
    return 0;
}