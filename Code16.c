/*

Alice and Bob are bored, so they decide to play a game with their wallets. Alice has a coins in her wallet, while Bob has b

coins in his wallet.

Both players take turns playing, with Alice making the first move. In each turn, the player will perform the following steps in order:

    Choose to exchange wallets with their opponent, or to keep their current wallets.
    Remove 1

coin from the player's current wallet. The current wallet cannot have 0

    coins before performing this step. 

The player who cannot make a valid move on their turn loses. If both Alice and Bob play optimally, determine who will win the game.
Input

Each test contains multiple test cases. The first line contains a single integer t
(1≤t≤1000

) — the number of test cases. The description of the test cases follows.

The first and only line of each test case contains two integers a
and b (1≤a,b≤109

) — the number of coins in Alice's and Bob's wallets, respectively.
Output

For each test case, output "Alice" if Alice will win the game, and "Bob" if Bob will win the game.


*/

#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int a,b;
        scanf("%d %d", &a, &b);
        if(a==b){
            printf("Bob\n");
            continue;
        }
        int N = a+b;

        if(N%2==0){
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }
    }
}






