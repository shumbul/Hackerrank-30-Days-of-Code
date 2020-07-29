#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<string> split_string(string);
vector<string> names;
int N;

void select_mail(string firstName,string emailid)
{
    int i;
    for(i=0;;i++)
    if (emailid[i]=='@')
    {emailid[i]=' ';
    break;}
    vector<string> email = split_string(emailid);

        string mail = email[1];
    if (mail=="gmail.com")
    names.insert(names.end(),firstName);

}

int main()
{
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];

        string emailID = firstNameEmailID[1];
        select_mail(firstName, emailID);
    }
    sort(names.begin(), names.end());
    for(int j=0;j<names.size();j++)
    cout<<names[j]<<endl;
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
