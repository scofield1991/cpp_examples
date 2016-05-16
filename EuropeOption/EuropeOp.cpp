#include <math.h>
#include "EuropeOp.h"

using namespace std;

double EuropeOption::CallPrice() const
{
    double tmp = sig * sqrt(T);

    double d1 = (log(U / K) + (b + (sig * sig) * 0.5) * T) / tmp;
    double d2 = d1 - tmp;

    return (U * exp((b - r) * T) * d1) - (K * exp(-r * T) * d2);
}

double EuropeOption::PutPrice() const
{
    double tmp = sig * sqrt(T);

    double d1 = (log(U / K) + (b + (sig * sig) * 0.5) * T) / tmp;
    double d2 = d1 - tmp;

    return (K * exp((-r) * T) * (-d2)) - (U * exp((b-r) * T) * (-d1));
}

void EuropeOption::init()
{
    r = 0.08;
    sig = 0.3;
    K = 65.0;
    T = 0.25;
    U = 60.0;
    b = r;
    optType = "C";
}

void EuropeOption::copy(const EuropeOption& o2)
{
    r = o2.r;
    sig = o2.sig;
    K = o2.K;
    T = o2.T;
    U = o2.U;
    b = o2.b;

    optType = o2.optType;
}

EuropeOption::EuropeOption()
{
    init();
}

EuropeOption::EuropeOption(const EuropeOption& o2)
{
    copy(o2);
}

EuropeOption::EuropeOption(const string& opType)
{
    optType = opType;
    init();
    if (optType == "c")
        optType = "C";
}


EuropeOption::~EuropeOption()
{
}

EuropeOption& EuropeOption::operator = (const EuropeOption& op2)
{
    if (this == &op2) return *this;

    copy(op2);

    return *this;
}

double EuropeOption::Price() const
{
    if(optType == "C")
    {
        return CallPrice();
    }
    else
        return PutPrice();
}
