// 폰켓몬
// 정확성: 40.0
// 합계: 40.0 / 100.0

#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size_fin, size_prev;
    
    size_prev = size(nums);
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    size_fin = size(nums);
    
    answer = ((size_prev/2) >= size_fin) ? size_fin : (size_prev/2);
    
    return answer;
}