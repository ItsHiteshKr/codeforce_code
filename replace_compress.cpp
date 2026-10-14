#include <iostream>
#include <set>
using namespace std;

string compresstring(string s)
{
    string compressed = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 0 || s[i] != s[i - 1])
        {
            compressed += s[i];
        }
    }

    return compressed;
}
int findcompressNumber(string s)
{
    set<string> st;
    st.insert(compresstring(s));

    // Flip one character at a time
    for (int i = 1; i < (int)s.length() - 1; i++)
    {
        string temp = s;

        if (temp[i] == '0')
            temp[i] = '1';
        else
            temp[i] = '0';

        st.insert(compresstring(temp));
    }

    return st.size();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << findcompressNumber(s) << '\n';
    }
    return 0;
}