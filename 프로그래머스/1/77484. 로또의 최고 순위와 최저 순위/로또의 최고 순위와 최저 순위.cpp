#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    map<int, int> rankingMap = {{6, 1}, {5, 2}, {4, 3}, {3, 4}, {2, 5}, {1, 6}, {0, 6}};
    int winCount = 0;
    int zeroCount = 0;
    
    for(int i = 0; i < lottos.size(); i++)
    {
        if(lottos[i] == 0)
        {
            zeroCount++;
            continue;
        }
        
        auto it = find(win_nums.begin(), win_nums.end(), lottos[i]);
        
        if(it != win_nums.end())
        {
            winCount++;
        }
    }
    
    answer.push_back(rankingMap[winCount + zeroCount]);
    answer.push_back(rankingMap[winCount]);
    
    return answer;
}