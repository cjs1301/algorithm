/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1152                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1152                           #+#        #+#      #+#    */
/*   Solved: 2025/01/05 23:09:34 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int count = 1;
    if(s.empty()) count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') count++;
    }
    if(s[s.size() - 1] == ' ') count--;
    if(s[0] == ' ') count--;
    cout << count << '\n';
    return 0;
}