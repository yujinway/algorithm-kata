#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> words = {"aya", "ye", "woo", "ma"};
    
    for (const string& b : babbling)
    {
        int i = 0;
        int prev = -1;
        bool isValid = true;
        
        while (i < b.length())
        {
            bool matched = false;
            
            for (int j = 0; j < 4; ++j)
            {
                if (b.substr(i, words[j].length()) == words[j])
                {
                    if (prev == j)
                    {
                        isValid = false;
                        break;
                    }
                    
                    matched = true;
                    prev = j;
                    i += words[j].length();
                    break;
                }
            }
            
            if (!matched || !isValid)
            {
                isValid = false;
                break;
            }
        }
        
        if (isValid)
        {
            answer++;
        }
    }
    
    return answer;
}