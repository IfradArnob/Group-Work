// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main()
// {
//     double n;

//     cout << "Enter a number = ";
//     cin >> n;
//     cout << n << endl;

//     int y = n;

//     while (n > 1)
//     {
//         if (n - y != 0)
//         {
//             n /= 2;
//             cout << "\t(" << n << ")" << endl;
//             cout << ceil(n) << endl; 
//         }

//         else
//         {
//             n /= 2;
//             cout << ceil(n) << endl; 
//         }
        
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number = ";
    cin >> n;

    while (n >= 1)
    {
        
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
            n /= 2;
        }
        
        else 
        {
            double decValue = (double)n / 2;
            cout<< ceil(decValue) << "(" << decValue << ")";
            n = ceil(decValue);
        }    
    }

    // cout << ceil(n) << n;
    // 8 (7.5)
    return 0;
}