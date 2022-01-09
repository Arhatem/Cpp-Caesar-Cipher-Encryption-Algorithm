#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned long long k;
    string m;
    cin >> k >> m;
    k %= 26;
    for(int i=0; i<m.size(); i++)
        {
        m.at(i) += k ;
        if (m.at(i)>90)
            m.at(i) -=26;
        else
            {
            }
        }
    cout << m ;
    return 0;
}
