/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1008                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: cjs5241 <boj.kr/u/cjs5241>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1008                           #+#        #+#      #+#    */
/*   Solved: 2024/12/30 23:04:48 by cjs5241       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {
 
    double a, b;
    cin >> a >> b;
 
    cout.precision(12);
    cout << fixed;
    cout << a / b;
    return 0;
}