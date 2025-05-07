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

    for(int i=0; i<phone_book.size()-1; i++){
        if(phone_book[i] == phone_book[i+1].substr(0,phone_book[i].size())) {
            answer = false;
            return answer;
        }
    }
    
    return answer;
}