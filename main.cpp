#include <iostream>
#include "polynom.h"

using namespace std;
using namespace iat;

std::vector<double> createVector()
{
    static std::vector<double> vct = {9, -6, 1};
    //vct.at(0) = 10;
    return vct;
}

int sum(const initializer_list<int> &il)
{
    int nSum = 0;
    for (auto x: il)
        nSum += x;
    return nSum;
}

int main()
{
    //std::vector<double> vct2 = {9, -5, 1};
    //cout << createVector().at(0) << std::endl;
    Polynom<double> pol1({48398, -5, 14, -3, -20});
    /*cout << pol1.convertToString(6) << endl;
    cout << "a0 = 5 && a4 = 17" << endl;
    pol1[0] = 5;
    pol1[4] = 17;
    cout << pol1.convertToString(6) << endl;
    try
    {
        cout << pol1[100] << endl;
    }
    catch(exception &ex)
    {
        cout << ex.what() << endl;
    }*/
    double root = 0;
    cout << "Is root found: "  << pol1.rootInAnInterval(0, 10, 0.00001, root) << endl;
    cout << "root = " << root << endl;
    cout << pol1[0] << endl;
    Polynom<double> pol2{9, -5, 4, 7, 10};
    cout << "pol2 = " << pol2 << endl;
    cout << "d3(pol2) / dx3 = " << pol2.derivative(3) << endl;
    cout << "d3(pol2) / dx3 | x = 1 => " << pol2.derivativeAtPoint(3, 1) << endl;
    Polynom<double> pol3{5, 4, 9, 16};
    cout << "pol3 = " << pol3 << endl;
    cout << "S(pol3) * dx = " << pol3.intergal(7) << endl;
    Polynom<double> pol4{0, 0, 1};
    cout << "pol4 = " << pol4 << endl;
    cout << "S(-2 .. 2)(pol4) * dx = " << pol4.definiteIntegral(-2, 2) << endl;
    //cout << "d3(pol2) / dx3 | x = 1 => " << pol2.derivativeAtPoint(3, 1) << endl;
    Polynom<double> pol5{16, -8, 1};
    cout << "pol5 = " << pol5 << endl;
    Polynom<double> pol6{-5, 1};
    std::pair<Polynom<double>, Polynom<double>> res = pol5 / pol6;
    cout << "Division = " << res.first << "|rest:" << res.second << endl;
    cout << "S(-2 .. 2)(pol4) * dx = " << pol4.definiteIntegral(-2, 2) << endl;
    Polynom<double> A{-3, 1};
    Polynom<double> B{0, 1};
    cout << "A * B = " << A * B << endl;
    return 0;
}
