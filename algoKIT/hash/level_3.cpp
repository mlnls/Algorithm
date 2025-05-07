// 전화번호 목록
// 정확성: 83.3
// 효율성: 8.3
// 합계: 91.7 / 100.0

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());

    while(!phone_book.empty()){        
        if(phone_book[0] == phone_book[1].substr(0,phone_book[0].size())) {
            return false;
        }
        
        phone_book.erase(phone_book.begin());
    }
    
    return answer;
}