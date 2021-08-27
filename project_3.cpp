#include <iostream>
#include <vector>


using namespace std;

int main() {
    vector <int> numbers {};
    char selection {};
    do{
        cout << "P - print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - display mean of the numbers" << endl;
        cout << "S - display the smallest number" << endl;
        cout << "L - display the largets number" << endl;
        cout << "Q - quit" << endl;
        cout << "\nEnter your choice:";
        cin >> selection;
        
        if(selection == 'P' || selection == 'p') {
            if (numbers.size() == 0){
                cout << "[] - the list is empty" << endl;
            } else
                cout << "[";
                for(auto val:numbers){
                    cout << val << " ";
                }
                cout << "]";
        } else if (selection == 'A' || selection == 'a'){
            int num {};
            cout << "the number to be added in the list "; 
            cin>>num;
            numbers.push_back(num);
            cout << num << "is added to the list" << endl;
        }else if (selection == 'M' || selection == 'm'){
            if(numbers.size()==0){
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
                int total {};
                for (auto val:numbers){
                    total += val;
            }
                cout << "the mean is :" << static_cast<double>(total)/numbers.size() << endl;
        }
        else if (selection == 'S' || selection == 's'){
            if(numbers.size()==0){
                cout<<"Unable to determine the smallest number,the list is empty"<< endl;
            } else {
                int smallest = numbers.at(0);
                for(auto val:numbers){
                    if(val < numbers)
                        smallest = val;
                }cout<<"the smallest number is: "<<smallest<<endl;
            }
                
               
        } else if (selection == 'L' || selection == 'l'){
            if(numbers.size()==0){
                cout << "Unable to display the largest number,the list is empty"<<endl;
            } else{
                int largest = numbers.at(0);
                for(auto val:numbers){
                    if(val>largest)
                        largest=val;
                }cout<<"the largest number is: "<<largest<<endl;
            }
        } else if (selection == 'Q'|| selection =='q')
            cout<<"Good-Bye"<<endl;
                
            
        } else{
            cout << "Unknown slection,please try again later"<<endl;
        }
 
        
    }
    while(selection != 'q' && selection != 'Q');
    cout<<endl;
    return 0;
}
