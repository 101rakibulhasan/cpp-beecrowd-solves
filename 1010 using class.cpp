#include <iostream>

using namespace std;

class fun_program{
    public:
        double _sal;
        fun_program(double x, double y, double z)
        {
            _sal = z * y;
        }
};

class value_to_pay{
    public:
        value_to_pay(double m, double n){
            double _vtp = m + n;
            printf("VALOR A PAGAR: R$ %.2lf\n", _vtp);
        }
};

int main() {
    double a, b;
    double c;

    cin >> a >> b >> c;

    fun_program prg1(a,b,c);

    cin >> a >> b >> c;

    fun_program prg2(a,b,c);

    value_to_pay obj_vtp(prg1._sal , prg2._sal);

    return 0;
}
