#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int CurrentWallNum = 0;
    
    for (int pos : section)
    {
        if(pos > CurrentWallNum)
        {
            answer++;
            CurrentWallNum = pos + m - 1;
        }
    }
    
    return answer;
}