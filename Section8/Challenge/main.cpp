#include <iostream>

using namespace std;

int main() {
    /*
     * 1 dollar = 100 cents
     * 1 quarter = 25 cents
     * 1 dime = 10 cents
     * 1 nickel = 5 cents
     * 1 penny = 1 cent
     * 
     * */
    
    cout << "Enter an amount in cents: ";
    int amount {0};
    cin >> amount;
    
    int dollar {0}, quarter {0}, dime {0}, nickel {0}, penny {0};
    int remaining {0};
    
    dollar = amount / 100;
    remaining = amount % 100;
    quarter = remaining / 25;
    remaining %= 25;
    dime = remaining / 10;
    remaining %= 10;
    nickel = remaining / 5;
    remaining %= 5;
    penny = remaining;
    
    cout << "Dollars: " << dollar << endl;
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dime << endl;
    cout << "Nickels: " << nickel << endl;
    cout << "Pennies: " << penny << endl;
    
    cout << endl;    
    return 0;
}
