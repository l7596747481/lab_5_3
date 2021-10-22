#include <iostream>
#include <cmath>
using namespace std;
double p(const double x);
int main()
{
    double qp, qk, z;
    int n;
    cout << "qp = "; cin >> qp;
    cout << "qk = "; cin >> qk;
    cout << "n = "; cin >> n;
    double dq = (qk - qp) / n;
    double q = qp;
    while (q <= qk)
    {
        z = p(2 * q + 1) + pow(p(q * q - 1), 2) + sqrt(p(1));
        cout << q << "              " << z << endl;
        q += dq;
    }
    return 0;
}
double p(const double x)
{
    if (abs(x) >= 1)
        return (sin(x) + cos(x)) / (pow(sin(x), 2) + exp(x));
    else
    {
        double S = 0;
        int j = 0;
        double a = 0.5;
        S = a;
        do
        {
            j++;
            double R = - (pow(x, 2) / (4 * pow(j, 2) - 2 * j));
            a *= R;
            S += (1. / cos(x)) * a;
        } while (j < 4);
        return S;
    }
}