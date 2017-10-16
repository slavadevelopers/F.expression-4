#include <iostream>

using namespace std;

int main()
{
    short int x;
    int result;
    cin >> x;
    result = (3 * x * x * x + 18 * x * x) * x + 12 * x * x - 5;
    cout << result << endl;
    return 0;
}
