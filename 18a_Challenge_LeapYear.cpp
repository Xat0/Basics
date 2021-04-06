#include <iostream>
#include <string>

using namespace std;

int main18() {

    string year_string; 

    std::cout << "Enter the year: /n";
    std::cin >> year_string; 

    if (year_string.length() == 4) {  
        string::size_type sz; 
        int year = stoi(year_string, &sz);    

        if (year % 4 == 0) {

            if (year % 100 == 0 && year % 400 == 0) {
                std::cout << year << " is a leap year\n";
            }

            else {
                std::cout << year << "is not a leap year because it's not divisible by 100 and 400";

            }
        }

        else {
            std::cout << year << "is not a leap year because it's not divisible by 4\n";
        }
    }

    else {
        std::cout << "thats not a 4 digit year\n";
    }

    return 0;

}