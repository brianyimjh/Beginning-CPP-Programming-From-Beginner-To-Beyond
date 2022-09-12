#include <iostream>

using namespace std;

int main() {
    const double SMALL_ROOM_PRICE {25.00};
    const double LARGE_ROOM_PRICE {35.00};
    const double SALES_TAX_RATE {0.06};
    const int ESTIMATE_VALIDITY {30};
    
    cout << "Estimate for carpet cleaning service" << endl;
    
    cout << "Number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "Number of large rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    cout << "Price per small room: $" << SMALL_ROOM_PRICE << endl;
    cout << "Price per large room: $" << LARGE_ROOM_PRICE << endl;
    
    double total_cost {0.00};
    total_cost = (SMALL_ROOM_PRICE * number_of_small_rooms) + (LARGE_ROOM_PRICE * number_of_large_rooms);
    cout << "Cost: $" << total_cost << endl;
    
    double total_tax {0.00};
    total_tax = total_cost * SALES_TAX_RATE;
    cout << "Tax: $" << total_tax << endl;
    
    cout << "===========================================" << endl;
    
    double total_estimate {0.00};
    total_estimate = total_cost + total_tax;
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << ESTIMATE_VALIDITY << " days" << endl;
    
    return 0;
}
