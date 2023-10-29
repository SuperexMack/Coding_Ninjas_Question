#include <bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string &s)
{
    // Write your code here.

    stack<char> str;
    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            str.push(ch);
        }

        else if (ch == '(')
        {

            str.push(ch);
        }

        else if (ch == ')')
        {

            if (str.top() == '(')
            {

                ans = true;
            }

            while (str.top() == '+' || str.top() == '-' || str.top() == '*' || str.top() == '/')
            {

                str.pop();
            }

            str.pop();
        }
    }

    return ans;
}

int main()
{

    string s = "((b*c)*(a/b))";
    // 5
    // a+((b*c))
    // (c*b)+a*(a+b)
    // (a*b)*((c+b)*(d+b))
    // ((a*b)*(c+b))*((d)+b)
    // (a+b*((a/c-d)))

    cout << findRedundantBrackets(s);
}
