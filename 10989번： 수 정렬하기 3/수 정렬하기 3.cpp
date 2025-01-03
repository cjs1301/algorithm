/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10989                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10989                          #+#        #+#      #+#    */
/*   Solved: 2025/01/04 03:51:48 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    // 카운팅 배열 (입력값은 10000 이하)
    int count[10001] = {0,};
    
    // 각 숫자의 등장 횟수를 카운트
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        count[num]++;
    }
    
    // 카운팅 된 결과를 순서대로 출력
    for(int i = 1; i <= 10000; i++){
        while(count[i]--){
            cout << i << '\n';
        }
    }
    return 0;
}