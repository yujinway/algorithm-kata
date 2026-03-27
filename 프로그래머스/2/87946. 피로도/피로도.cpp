#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;
bool visited[8];

void dfs(vector<vector<int>>& dungeons, int hp, int count)
{
    answer = max(answer, count);
    
    for(int i = 0; i < dungeons.size(); i++)
    {
        if(!visited[i] && hp >= dungeons[i][0])
        {
            visited[i] = true;
            dfs(dungeons, hp - dungeons[i][1], count + 1);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    dfs(dungeons, k, 0);
    return answer;
}