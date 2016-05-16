#ifndef EUROPEOP_H_INCLUDED
#define EUROPEOP_H_INCLUDED
#include <string>

using namespace std;
class EuropeOption
{
private:
    void init();
    void copy(const EuropeOption& o2);
    double CallPrice() const;
    double PutPrice() const;
    double CallDelta() const;
    double PutDelta() const;

public:
    double r, sig, K, T, U, b;
    string optType;

    EuropeOption();
    EuropeOption(const EuropeOption& op2);
    EuropeOption(const string& opType);
    virtual ~EuropeOption();

    EuropeOption& operator = (const EuropeOption& op2);

    double Price() const;
    double Delta() const;

    void toggle();

};

#endif // EUROPEOP_H_INCLUDED
