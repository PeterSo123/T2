//Q1
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d, e;
    cout << "Please input five numbers: " << endl;
    cin >> a >> b >> c >> d >> e;
    cout << setprecision(5);
    cout << setw(5)<< "x" << setw(10) << "x^2" << setw(10) << "x^3" << endl;
    cout << "-----" << setw(10) << "-----" << setw(10) << "-----" <<endl;
    cout << setprecision(3);
    cout << fixed << a << setw(10) << a * a << setw(10) << a * a * a << endl;
    cout << fixed << b << setw(10) << b * b << setw(10) << b * b * b << endl;
    cout << fixed << c << setw(10) << c * c << setw(10) << c * c * c << endl;
    cout << fixed << d << setw(10) << d * d << setw(10) << d * d * d << endl;
    cout << fixed << e << setw(10) << e * e << setw(10) << e * e * e << endl;
    
    return 0;
}
*/
 
//Q2
/*
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please input a number: ";
    cin >> n;
    
    if((n%2) == 0)
        cout << "Is " << n << " even? Yes" << endl;
    else
    {
        cout << "Is " << n << " even? No" << endl;
    }
    
    return 0;
}
*/

//Q3
/*
#include <iostream>

using namespace std;

int main()
 {
    int ct;
    int pv ;
    
    
    cout << "What is the principal value?" ;
    cin >> pv;
    cout << "Please enter the customer type:";
    cin >> ct;
 
    switch(ct) {
        case 4:
            cout << "Interest payable after one year: $" << pv * double(0.02) <<endl;
            break;
            
        case 3:
            cout << "Interest payable after one year: $" << pv * double(0.012) <<endl;
            break;
            
        case 2:
            cout << "Interest payable after one year: $" << pv * double(0.01) <<endl;
            break;
            
        case 1:
            cout << "Interest payable after one year: $" << pv * double(0.008) <<endl;
            break;
            
        case 0:
            cout << "Interest payable after one year: $" << pv * double(0.005) <<endl;
            break;
            
        default:
            cout << "Interest payable after one year: Error in customer type " <<endl;
            break;
    }
    
    return 0;
}
*/

//Q4
#include <iostream>

using namespace std;

int main()
{
    int d, m;
    cout << "Please input month: ";
    cin >> m;
    cout << "Please input day: ";
    cin >> d;
    int w = (d+2*m+3*(m+1)/5+2016+2016/4-2016/100+2016/400+1)%7;
    
    switch(w) {
        case 7:
            cout << d << "-" << m << "-2016 is Sunday" << endl;
            break;
            
        case 6:
            cout << d << "-" << m << "-2016 is Saturday" << endl;
            break;
            
        case 5:
            cout << d << "-" << m << "-2016 is Friday" << endl;
            break;
            
        case 4:
            cout << d << "-" << m << "-2016 is Thursday" << endl;
            break;
            
        case 3:
            cout << d << "-" << m << "-2016 is Wednesday" << endl;
            break;
            
        case 2:
            cout << d << "-" << m << "-2016 is Tuesday" << endl;
            break;
            
        case 1:
            cout << d << "-" << m << "-2016 is Monday" << endl;
            break;
            
        default:
            cout << d << "-" << m << "-2016 is Sunday" << endl;
            break;
    }
    
    return 0;
}
