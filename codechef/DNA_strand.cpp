#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int N;
        string s;
        cin >> N;
        getline(cin, s);

        for (int i = 0; i < N; i++)
        {
            if (i == 'A')
            {
                cout << 'T';
            }
            else if (i == 'T')
            {
                cout << 'A';
            }
            else if (i == 'C')
            {
                cout << 'G';
            }
            else if (i == 'G')
            {
                cout << 'C';
            }
            cout << endl;
        }
    }
    return 0;
}