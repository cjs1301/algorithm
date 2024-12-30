/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10699                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10699                          #+#        #+#      #+#    */
/*   Solved: 2024/12/30 22:56:22 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 현재 시간을 가져옴
    auto now = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(now);
    
    // 시간을 tm 구조체로 변환 (UTC+9 서울 시간대 고려)
    tm* t = localtime(&time);
    
    // YYYY-MM-DD 형식으로 출력
    cout << setfill('0') 
         << (t->tm_year + 1900) << '-'
         << setw(2) << (t->tm_mon + 1) << '-'
         << setw(2) << t->tm_mday;
         
    return 0;
}