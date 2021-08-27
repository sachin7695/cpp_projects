#include <iostream>
using namespace std;

int main() {
    cout << "Enter the amount in cents :";
    int change_amount {0};
    cin >> change_amount;
    //cents corresponds to
    const int dollar_value {100};
    const int quarter_value {25};
    const int dimes_value {10};
    const int nickles_value {5};
    const int pennies_value {1};
    // defining variable for the conversion process
    int balance{},dollars{},quarters{},dimes{},nickles{},pennies{};
    
    dollars = change_amount/dollar_value;
    balance =  change_amount%dollar_value;
    
    quarters = balance/quarter_value;
    balance %= dollar_value;
    
    dimes = balance/dimes_value;
    balance %= dimes_value;
    
    nickles =balance/nickles_value;
    balance %= nickles_value;
    
    pennies = balance; 
    
    cout << "dollars :" << dollars << endl;
    cout << "quarters :" << quarters << endl;
    cout << "dimes :" << dimes << endl;
    cout << "nickles :" << nickles << endl;
    cout << "pennies :" << pennies << endl;
 
    return 0;
}
