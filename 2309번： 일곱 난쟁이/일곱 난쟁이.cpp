/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2309                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2309                           #+#        #+#      #+#    */
/*   Solved: 2024/12/30 21:46:34 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <bits/stdc++.h>
using namespace std;  
int a[9]; 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> a[i]; 
    }
    sort(a, a + 9);
    do{
        int sum = 0; 
        for(int i = 0; i < 7; i++) sum += a[i]; 
        if(sum == 100)break;
    }while(next_permutation(a, a + 9)); 
    for(int i = 0; i < 7; i++) cout << a[i] << "\n"; 
    return 0;
}