#include <iostream>

using namespace std;

class area{
    public:
        area(double x)
        {
            double sum = 3.14159 * x * x;
            printf("A=%.4lf\n", sum);
        }
};

int main() {
    double a;

    cin >> a;

    area obj(a);

    return 0;
}
