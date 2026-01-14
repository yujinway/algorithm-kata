#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> charMap;
    
    for (int i = 0; i < s.size(); i++)
    {
        auto it = charMap.find(s[i]);
        if(it == charMap.end())
        {
            charMap[s[i]] = i;
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - it->second);
            charMap[s[i]] = i;
        }
    }
    
    return answer;
}