#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        
        if (c == ' ')
        {
            answer.push_back(c);
            continue;
        }
        
        for (int j = 0; j < n; j++)
        {
            c = char(c + 1);
            if( c > 'Z' && c < 'a')
            {
                c = 'A';
            }
            if ( c > 'z')
            {
                c = 'a';
            }
        }
        
        answer.push_back(c);
    }
    
    return answer;
}