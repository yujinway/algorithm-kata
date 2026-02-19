#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

char CompareScore(map<char, int>& scoreMap, char type1, char type2)
{
    int score1 = scoreMap[type1];
    int score2 = scoreMap[type2];
    
    if(score1 > score2)
    {
        return type1;
    }
    else if(score1 < score2)
    {
        return type2;
    }
    else
    {
        return type1;
    }
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> scoreMap;
    
    for(int i = 0; i < survey.size(); i++)
    {
        if(choices[i] == 4)
        {
            continue;   
        }
        else if(choices[i] < 4)
        {
            scoreMap[survey[i][0]] += abs(choices[i] - 4);
        }
        else if(choices[i] > 4)
        {
            scoreMap[survey[i][1]] += choices[i] - 4;
        }
    }
    
    answer += CompareScore(scoreMap, 'R', 'T');
    answer += CompareScore(scoreMap, 'C', 'F');
    answer += CompareScore(scoreMap, 'J', 'M');
    answer += CompareScore(scoreMap, 'A', 'N');
    
    return answer;
}