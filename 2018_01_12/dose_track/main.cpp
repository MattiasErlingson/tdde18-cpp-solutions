#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::cout << "Welcome to dose track!" << std::endl;
    std::cout << std::endl;

    int dosage;
    std::cout << "What is the total amount of medicine (in gram)? ";
    std::cin >> dosage;

    int hours;
    std::cout << "Over how many hours do you want to take the medicine? ";
    std::cin >> hours;

    std::cout << "The dosage is: ";

    int remainder{dosage % hours};
    int even_dosage{(dosage - remainder) / hours};

    std::vector<int> result(hours);

    /* Fill vector with correct dosages */
    std::generate(result.begin(), result.end(), [=]() mutable {
        if (remainder-- > 0) {
            return even_dosage + 1;
            
        } else {
            return even_dosage;
        }
    });
    
    /* Print dosages to standard output */
    std::copy(result.begin(), result.end(), 
        std::ostream_iterator<int>(std::cout, " "));
    
    std::cout << std::endl;


    return 0;
}

/*
// Simple example with for-loop

  // Print the dosage
  std::cout << "The dosage is:";
  for (int i = 0; i < hours; i++) {
    if (remainder > 0) {
      std::cout << " " << hourly_dose + 1;
      remainder--;
    } else {
      std::cout << " " << hourly_dose;
    }
  }
  
*/