#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    for(int i=n; i>0; i--)
    {
      for(int j=1; j<=n; j++) //looping columns
      {
        if (j>=i)
        {
          cout<<"#";
        }
        else if(j!=n)
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = atoi(ltrim(rtrim(n_temp)).c_str());

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
