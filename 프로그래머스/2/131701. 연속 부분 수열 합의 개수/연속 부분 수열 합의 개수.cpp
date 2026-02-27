#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    vector<int> doubleElements = elements;

    for(int i = 0; i < elements.size(); i++)
    {
        doubleElements.push_back(elements[i]);
    }
    
    set<int> uniqueSum;
    
    for(int i = 0; i < elements.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < elements.size(); j++)
        {
            sum += doubleElements[i + j];
            uniqueSum.insert(sum);
        }
    }
    
    return uniqueSum.size();
}