#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> pattern1 = {1, 2, 3, 4, 5};
    vector<int> pattern2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> pattern3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    
    for (int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == pattern1[i % pattern1.size()])
        {
            score1++;
        }
        if(answers[i] == pattern2[i % pattern2.size()])
        {
            score2++;
        }
        if(answers[i] == pattern3[i % pattern3.size()])
        {
            score3++;
        }
    }
    
    int maxScore = max({score1, score2, score3});
    
    if(score1 == maxScore)
    {
        answer.push_back(1);
    }
    if(score2 == maxScore)
    {
        answer.push_back(2);
    }
    if(score3 == maxScore)
    {
        answer.push_back(3);
    }
    
    return answer;
}