#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i = 0;
    
    while (i < s.size())
    {
        char x = s[i];
        int xCount = 1;
        int notXCount = 0;
        int j = i + 1;
        
        while (j < s.size())
        {
            if(s[j] != x)
            {
                notXCount++;
            }
            else
            {
                xCount++;
            }
            
            if(xCount == notXCount)
            {
                break;
            }
            
            j++;
        }
        
        i = j + 1;
        answer++;
    }
    
    return answer;
}