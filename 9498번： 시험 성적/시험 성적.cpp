/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9498                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9498                           #+#        #+#      #+#    */
/*   Solved: 2025/01/01 18:58:34 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int score;
    cin >> score;
    if(score >= 90) cout << 'A' << '\n';
    else if(score >= 80) cout << 'B' << '\n';
    else if(score >= 70) cout << 'C' << '\n';
    else if(score >= 60) cout << 'D' << '\n';
    else cout << 'F' << '\n';
    return 0;
}