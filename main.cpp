#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter your date of birth in Years ";
    double birth_date;
    cin >> birth_date;
    cout << "Enter the current year ";
    double current_date;
    cin >> current_date;
    double age = current_date - birth_date;
    cout << "Your Age is " << age;

    return 0;
}
