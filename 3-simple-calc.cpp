#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int sum;

    cout << "Type a number: \n";
    cin >> x;

    cout << "Type another number: \n";
    cin >> y;

    sum = x + y;

    cout << "The sum of " << x << " and " << y << " is " << sum;

    return 0;
}