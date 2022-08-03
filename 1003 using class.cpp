#include <iostream>

using namespace std;

class sum{
    public:
        sum(int x, int y)
        {
            int _sum = x + y;
            printf("SOMA = %d\n", _sum);
        }
};

int main() {
    int a, b;

    cin >> a >> b;

    sum obj(a,b);

    return 0;
}
