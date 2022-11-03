#include <iostream>

using namespace std;

int main ()

{
    cout << "Fahrenheit : ";

    double fahrenheit;

    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5/9;

    cout << celsius;

    return 0;
}
