#include <bits/stdc++.h>
using namespace std;
void printFrequency(string str)
{
	map<string, int> M;
	string word = "";

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
				M[word]++;
				word = "";
		}
        else
			word += str[i];
	}
		M[word]++;
	for (auto& it : M) {
		cout << it.first << " - "
			<< it.second
			<< endl;
	}
}
int main()
{
	string str;
	cout<<"enter a paragraph"<<endl;
	getline(cin, str);

	printFrequency(str);
	return 0;
}
