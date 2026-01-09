#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxWidth = 0;
    int maxHeight = 0;
    
    for (auto card: sizes)
    {
        int minSide = min(card[0], card[1]);
        int maxSide = max(card[0], card[1]);
        
        maxWidth = max(maxWidth, minSide);
        maxHeight = max(maxHeight, maxSide);
    }
    
    return maxWidth * maxHeight;
}