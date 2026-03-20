#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> clothes_map;
    
    for(const auto cloth : clothes)
    {
        clothes_map[cloth[1]]++;
    }
    
    for(auto it = clothes_map.begin(); it != clothes_map.end(); it++)
    {
        answer *= (it->second + 1);
    }
    
    return answer - 1;
}