#include <string>
#include <vector>

using namespace std;

int answer = 0;

void backtrack(vector<vector<int>>& dungeons, vector<int>& visited, int currentFatigue, int count)
{
    answer = max(answer, count);
    
    for(int i = 0; i < dungeons.size(); i++)
    {
        if(!visited[i] && currentFatigue >= dungeons[i][0])
        {
            visited[i] = 1;
            backtrack(dungeons, visited, currentFatigue - dungeons[i][1], count + 1);
            visited[i] = 0;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    vector<int> visited(dungeons.size(), 0);
    backtrack(dungeons, visited, k, 0);
    return answer;
}