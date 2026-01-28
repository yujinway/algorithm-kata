#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.begin(), score.end(), greater<int>());
    
    int totalBox = score.size() / m;
    
    for (int i = 0; i < totalBox; i++)
    {
        int minScoreIndex = (i + 1) * m - 1;
        int minScore = score[minScoreIndex];
        answer += minScore * m;
    }
    
    return answer;
}