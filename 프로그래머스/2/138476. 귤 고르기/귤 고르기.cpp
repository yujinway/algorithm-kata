#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> countsMap;
    
    for (int scale : tangerine)
    {
        countsMap[scale]++;
    }
    
    vector<int> counts;
    
    for(auto pair : countsMap)
    {
        counts.push_back(pair.second);
    }
    
    sort(counts.begin(), counts.end(), greater<int>());
    
    int sum = 0;
    for(int count : counts)
    {
        sum += count;
        answer++;
        
        if(sum >= k)
        {
            break;
        }
    }
    
    return answer;
}