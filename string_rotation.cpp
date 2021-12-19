//Check If string is roatation of another
//
#include <bits/stdc++.h>
using namespace std;
bool check_rotation(string s, string goal)
{
    if (s.size() != goal.size())
    ;
    
    queue<char> q1;
    queue<char> q2;
    
    for(auto item : s) q1.push(item);
    for(auto item : goal) q2.push(item);
    
    size_t sz = goal.size();
    while(sz--)
    {
         auto ch = q2.front();
         q2.pop();
         q2.push(ch);
         if(q1 == q2) return true;
    }

    return false;
}
int main()
{
    string s1 = "ABCD";
    string s2 = "CDAB";
    if (check_rotation(s1, s2))
        cout << s2 << " is a rotated form of " << s1
             << endl;
    else
        cout << s2 << " is not a rotated form of " << s1
             << endl;
    string s3 = "ACBD";
    if (check_rotation(s1, s3))
        cout << s3 << " is a rotated form of " << s1
             << endl;
    else
        cout << s3 << " is not a rotated form of " << s1
             << endl;
    return 0;
}
