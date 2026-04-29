#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxWidth = 0;
    int maxHeight = 0;

    for (vector<int> size : sizes)
    {
        int maxSide = max(size[0], size[1]);
        int minSide = min(size[0], size[1]);
        
        maxWidth = max(maxWidth, maxSide);
        maxHeight = max(maxHeight, minSide);
    }
    
    return maxWidth * maxHeight;
}