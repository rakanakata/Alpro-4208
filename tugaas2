#include <iostream>

using namespace std;

void swapN(int ary[], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        if (ary[i] == x) {
            ary[i] = y;
        }
    }
}

int main()
{
    int ary[] = {1, 2, 3, 4, 5};
    int n = sizeof(ary) / sizeof(ary[0]);
    int x = 3;
    int y = 6;
    swapN(ary, n, x, y);
    for (int i = 0; i < n; i++) {
        cout << ary[i] << " ";
    }
    return 0;
}
