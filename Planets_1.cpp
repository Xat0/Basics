#include <iostream>
#include <string>

using namespace std;

int main() {

    double earthWeight;
    double const mercury = 0.38, venus = 0.91,  mars = 0.38, jupiter = 2.34, saturn = 1.06, uranus = 0.92, neptune = 1.19;
    int planet;    
    double weight;  


    cout << "What is your earth weight?" << endl;
    cin >> earthWeight;
    cout << "Which planet do you wish to visit? Type 1 for mercury, 2 for Venus, 3 for Mars, 4 for Jupiter, 5 for Saturn, 6 for Uranus, or 7 for Neptune." << endl;
    cin >> planet;

    switch (planet) {
    case 1 :
        weight = mercury * earthWeight; 
        std::cout << "Your weight on Mercury is " << weight << endl;
        break;
    case 2:
        weight = venus * earthWeight; 
        std::cout << "Your weight on Venus is " << weight << endl;
        break;
    case 3: 
        weight = mars * earthWeight; 
        std::cout << "Your weight on Mars is " << weight << endl;
        break;
    case 4:
        weight = jupiter * earthWeight; 
        std::cout << "Your weight on Jupiter is " << weight << endl;
        break;
    case 5:
        weight = saturn * earthWeight; 
        std::cout << "Your weight on Saturn is " << weight << endl;
        break;
    case 6:
        weight = uranus * earthWeight; 
        std::cout << "Your weight on Uranis is " << weight << endl;
        break;
    case 7:
        weight = neptune * earthWeight;
        std::cout << "Your weight on Neptune is " << weight << endl;
        break;
    default :
        cout << "ERROR";
    }

    return 0;

}