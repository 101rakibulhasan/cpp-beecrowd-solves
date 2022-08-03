#include <iostream>

using namespace std;

class salary{
    public:
        salary(int x, int y, double z)
        {
            double _sal = z * y;
            printf("NUMBER = %d\n", x);
            printf("SALARY = U$ %.2lf\n", _sal);
        }
};

int main() {
    int a, b;
    double c;

    cin >> a >> b >> c;

    salary obj(a,b,c);

    return 0;
}
