#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";

    int a, b, max, min;

    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';

     if (a > b)
        max = a;
     else
        max = b;
     cout <<"max " << max << '\n';

      if (a < b)
        min = a;
     else
        min = b;
     cout <<"min " << min << '\n';

    return 0;
}
