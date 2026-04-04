/* Polycarp has guessed three positive integers 𝑎, 𝑏 and 𝑐. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: 𝑎+𝑏, 𝑎+𝑐, 𝑏+𝑐 and 𝑎+𝑏+𝑐.

You have to guess three numbers 𝑎, 𝑏 and 𝑐 using given numbers. Print three guessed integers in any order.

Pay attention that some given numbers 𝑎, 𝑏 and 𝑐 can be equal (it is also possible that 𝑎=𝑏=𝑐).

Input
The only line of the input contains four positive integers 𝑥1,𝑥2,𝑥3,𝑥4 (2≤𝑥𝑖≤109) — numbers written on a board in random order. It is guaranteed that the answer exists for the given number 𝑥1,𝑥2,𝑥3,𝑥4.

Output
Print such positive integers 𝑎, 𝑏 and 𝑐 that four numbers written on a board are values 𝑎+𝑏, 𝑎+𝑐, 𝑏+𝑐 and 𝑎+𝑏+𝑐 written in some order. Print 𝑎, 𝑏 and 𝑐 in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.

Examples
input
3 6 5 4
output
2 1 3
input
40 40 40 60
output
20 20 20
input
201 101 101 200
output
1 100 100
 */
#include <stdio.h>
 
int main() {
    long long x[4];
    
    
    for (int i = 0; i < 4; i++) {
        scanf("%lld", &x[i]);
    }
 
    
    long long sum = x[0];
    for (int i= 1; i < 4; i++) {
        if (x[i] > sum) {
            sum = x[i];
        }
    }
 
   
    long long a = sum - x[0];
    long long b = sum - x[1];
    long long c = sum - x[2];
    long long d = sum - x[3];
 
    
    
    if (a > 0) printf("%lld ", a);
    if (b > 0) printf("%lld ", b);
    if (c > 0) printf("%lld ", c);
    if (d > 0) printf("%lld ", d);
 
    return 0;
}
 