#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int M = arr1.size();
    int K = arr1[0].size();
    int N = arr2[0].size();
    
    vector<vector<int>> answer(M, vector<int>(N, 0));
    
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for (int k = 0; k < K; k++)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    return answer;
}