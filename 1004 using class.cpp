#include <iostream>

using namespace std;

class mul{
    public:
        mul(int x, int y)
        {
            int _mul = x * y;
            printf("PROD = %d\n", _mul);
        }
};

int main() {
    int a, b;

    cin >> a >> b;

    mul obj(a,b);

    return 0;
}
