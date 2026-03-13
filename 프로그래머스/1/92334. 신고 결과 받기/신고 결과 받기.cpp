#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, unordered_set<string>> reported_by;
    unordered_map<string, int> mail_count; 
    
    for (const string& r : report)
    {
        stringstream ss(r);
        string reporter, reported;
        ss >> reporter >> reported;
        
        reported_by[reported].insert(reporter);
    }
    
    for (auto const& [reported, reporters] : reported_by)
    {
        if (reporters.size() >= k)
        {
            for (const string& reporter : reporters)
            {
                mail_count[reporter]++;
            }
        }
    }
    
    for (const string& id : id_list)
    {
        answer.push_back(mail_count[id]);
    }
    
    return answer;
}