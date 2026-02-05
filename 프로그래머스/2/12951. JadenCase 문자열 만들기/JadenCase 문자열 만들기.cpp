#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool isFirstChar = true;
    
    for (char c: s)
    {
        if(c == ' ')
        {
            answer += c;
            isFirstChar = true;
        }
        else if(isFirstChar)
        {
            answer += toupper(c);
            isFirstChar = false;
        }
        else
        {
            answer += tolower(c);
        }
    }
    
    return answer;
}