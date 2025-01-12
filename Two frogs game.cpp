/*
There are n lilypads arranged in a row, numbered from 1 to n from left to right. Alice and Bob are frogs initially positioned on distinct lilypads, a and b, respectively. 
They take turns jumping, starting with Alice.
During a frog's turn, it can jump either one space to the left or one space to the right, as long as the destination lilypad exists.
For example, on Alice's first turn, she can jump to either lilypad a−1 or a+1, provided these lilypads are within bounds.
It is important to note that each frog must jump during its turn and cannot remain on the same lilypad.

However, there are some restrictions:

The two frogs cannot occupy the same lilypad. This means that Alice cannot jump to a lilypad that Bob is currently occupying, and vice versa. If a frog cannot make a valid jump on its turn, it loses the game.
As a result, the other frog wins. Determine whether Alice can guarantee a win, assuming that both players play optimally.
It can be proven that the game will end after a finite number of moves if both players play optimally.

input:

5
2 1 2
3 3 1
4 2 3
5 2 4
7 6 2


output:

NO
YES
NO
YES
YES

Note
In the first test case, Alice has no legal moves. Therefore, Alice loses on the first turn.In the second test case, Alice can only move to lilypad 2.
Then, Bob has no legal moves. Therefore, Alice has a winning strategy in this case. In the third test case, Alice can only move to lilypad 1.
Then, Bob can move to lilypad 2. Alice is no longer able to move and loses, giving Bob the win.
It can be shown that Bob can always win regardless of Alice's moves; hence, Alice does not have a winning strategy.
*/


#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int distance = abs(b - a);

        if (distance % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

