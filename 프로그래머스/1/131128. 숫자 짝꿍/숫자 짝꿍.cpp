#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    int count[10] = { 0 };
    string result = "";
    
    for(char c : X)
    {
        count[c - '0']++;
    }
    
    for(char c : Y)
    {
        if(count[c - '0'] > 0)
        {
            count[c - '0']--;
            result += c;
        }
    }
    
    if(result.empty())
    {
        return "-1";
    }
    
    sort(result.begin(), result.end(), greater<char>());
    
    if(result[0] == '0')
    {
        return "0";
    }
    
    return result;
}