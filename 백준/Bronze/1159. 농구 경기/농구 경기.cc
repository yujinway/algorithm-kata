#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{

	int n;
	cin >> n;

	map<char, int> initialMap;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		initialMap[s[0]]++;
	}

	string answer = "";

	for (auto& pair : initialMap)
	{
		if (pair.second >= 5)
		{
			answer += pair.first;
		}
	}

	if (answer.length() == 0)
	{
		cout << "PREDAJA";
	}
	else
	{
		cout << answer;
	}

	return 0;
}