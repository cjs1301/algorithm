/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2438                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2438                           #+#        #+#      #+#    */
/*   Solved: 2025/01/01 18:55:13 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << string(i + 1, '*') << '\n';
    }
}