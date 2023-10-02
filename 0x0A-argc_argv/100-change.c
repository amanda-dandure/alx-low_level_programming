#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Error" << endl;
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        cout << "0" << endl;
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = 0;

    for (int i = 0; i < 5; i++) {
        num_coins += cents / coins[i];
        cents %= coins[i];
    }

    cout << num_coins << endl;
    return 0;
}
