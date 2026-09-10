#include <iostream>
using namespace std;

int main()
{

    // Age Estimate From Days Lived

    int N;
    int y, m, rd, d;
    cout << "Enter no of days you have lived :";
    cin >> N;
    if (N <= 0)
    {
        cout << "enter valid days";
    }
    else
    {

        y = (N / 365);
        rd = (N % 365);
        m = (rd / 30);
        d = (rd % 30);

        cout << y << " Years, " << m << " Months, " << d << " Days";
    }

    return 0;
}