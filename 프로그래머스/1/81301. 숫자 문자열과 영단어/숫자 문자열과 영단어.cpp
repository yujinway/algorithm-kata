#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(string s) {
    map<string, string> numberMap = {
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    
    for (auto pair : numberMap)
    {
        while(s.find(pair.first) != string::npos)
        {
            s.replace(s.find(pair.first), pair.first.length(), pair.second);
        }
    }
    
    int answer = stoi(s);

    return answer; 
}