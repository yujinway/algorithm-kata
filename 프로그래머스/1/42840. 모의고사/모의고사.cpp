#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> pattern_1 = {1, 2, 3, 4, 5}; // size = 5
    vector<int> pattern_2 = {2, 1, 2, 3, 2, 4, 2, 5}; // size = 8
    vector<int> pattern_3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}; // size = 10
    
    vector<int> scores = {0, 0, 0};
    vector<int> answer;
    
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(pattern_1[(i + 5) % 5] == answers[i])
        {
            scores[0]++;
        }
        if(pattern_2[(i + 8) % 8] == answers[i])
        {
            scores[1]++;
        }
        if(pattern_3[(i + 10) % 10] == answers[i])
        {
            scores[2]++;
        }
    }

    int maxScore = *max_element(scores.begin(), scores.end());
    
    for(int i = 0; i < 3; i++)
    {
        if(scores[i] == maxScore)
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}