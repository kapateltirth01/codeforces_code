/* Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
47
outputCopy
YES
inputCopy
16
outputCopy
YES
inputCopy
78
outputCopy
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4. 
*/
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arry[]={4,7,44,47,77,74,444,447,474,744,747,777,774,477};
    for(int i =0;i<14;i++){
        if(x%arry[i]==0){
            printf("YES");
            return 0;
        }
        
    }
   printf("NO"); 
   
return 0;
}