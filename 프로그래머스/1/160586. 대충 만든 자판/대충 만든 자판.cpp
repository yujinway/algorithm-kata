#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    for(const string& targetString : targets)
    {   
        int totalInput = 0;
        bool isInputPossible = true;
        
        for(char targetChar : targetString)
        {
            int minInput = 101;
            
            for(const string& valueString : keymap)
            {
                auto pos = valueString.find(targetChar);
                
                if(pos != string::npos)
                {
                    minInput = min((int)pos + 1, minInput);
                }
            }
            
            if(minInput == 101)
            {
                isInputPossible = false;
                break;
            }
            
            totalInput += minInput;
        }
        
        answer.push_back(isInputPossible ? totalInput : -1);
    }
    
    return answer;
}