#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    
    for(int i = 0; i < s.size(); i++)
    {
        int moved = 0;
        
        while (moved < index)
        {
            s[i]++;
            
            if(s[i] > 'z')
            {
                s[i] = 'a';
            }
            
            if(skip.find(s[i]) != string::npos)
            {
                continue;
            }
            
            moved++;
        }
    }
    
    return s;
}