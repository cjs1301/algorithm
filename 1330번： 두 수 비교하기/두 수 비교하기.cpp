/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1330                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1330                           #+#        #+#      #+#    */
/*   Solved: 2024/12/30 22:39:34 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> a >> b;
    if(a > b) {
        cout << '>';
    } else if(a < b) {
        cout << '<';
    } else {
        cout << "==";
    }
    
    return 0;
}