#include <iostream>

using namespace std;

class difference{
    public:
        difference(int w, int x, int y, int z)
        {
            int _diff = (w * x) - (y * z);
            printf("DIFERENCA = %d\n", _diff);
        }
};

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    difference obj(a, b, c, d);

    return 0;
}
