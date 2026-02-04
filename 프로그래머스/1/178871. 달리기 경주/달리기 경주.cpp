#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    unordered_map<string, int> pos;
    
    for(int i = 0; i < players.size(); i++)
    {
        pos[players[i]] = i;
    }
    
    for (const string& name : callings)
    {
        int current = pos[name];
        int prev = current - 1;
        
        string front = players[prev];
        swap(players[current], players[prev]);
        
        pos[name] = prev;
        pos[front] = current;
    }
    
    return players;
    
}