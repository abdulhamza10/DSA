#include <iostream>
using namespace std;
int main()
{
    // arthematic operator
    cout << 10 / 5;
    cout << endl;
    cout << 1.4 * 2;
    cout << endl;
    int a = 1;
    cout << a++ << endl;
    cout << a << endl;
    int b = ++a;
    cout << b << endl;
    int c = ++b * a;
    cout << c << endl;
    // comparison operator ==,<=,>=,!= {<,>,<=,>=} > {==,!=} (left tp right)
    if (a > b)
        cout << "yes";
    else
        cout << "no" << endl;
    // Logical Operator {&& = and,||= or,!=not}
    if (a < b && b < c)
        cout << "yes"<<endl;
    else
        cout << "no"<<endl;
    char name;
    cin >> name;
    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
        cout << "vowel"<<endl;
    else
        cout << "consonant"<<endl;
cout<<!1<<endl;

//Bitwise Operator{& = and ,| =  or ,^ = xor,~ = compliment,<< = leftshift,>> = rightahift }
//precedence {<< , >>} > {&,|,^}
int ans = 2&3;
cout<<ans<<endl;
int ans2 = 2|3;
cout<<ans2<<endl;
int ans3 = 2^3;
cout<<ans3<<endl;
int ans4 = ~5;
cout<<ans4<<endl;
int ans5 = 7<<5;
cout<<ans5<<endl;
int ans6 = 5>>1;
cout<<ans6<<endl;
//Assignment operator
int k = 10;

    k += 5;   // a = 15
    cout << k  << endl;

    k -= 3;   // a = 12
    cout << k << endl;

    k *= 2;   // a = 24
    cout << k << endl;

    k /= 4;   // a = 6
    cout << k << endl;

    k %= 4;   // a = 2
    cout << k<< endl; 

}