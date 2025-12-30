#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int wordIndex = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            if(wordIndex % 2 == 0)
            {
                answer += toupper(s[i]);
            }
            else
            {
                answer += tolower(s[i]);
            }
            wordIndex++;
        }
        else
        {
            answer += s[i];
            wordIndex = 0;
        }
    }
    
    return answer;
}