#include <iostream>
using namespace std;
int main() {
  int choice;
  cout << "Press 1 to Check if a number is prime" << endl;
  cout << "Press 2 Find prime numbers in a range" << endl;
  cout << "Choose an option: ";
  cin >> choice;

  if (choice == 1) {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int Prime = 1;
    if (number <= 1) {
      Prime = 0;
      }
	  else {
      for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
          Prime = 0;
          break;
        }
      }
    }
    if (Prime) {
      cout << number << " is a prime number.\n";
    } else {
      cout << number << " is not a prime number.\n";
    }
  } else if (choice == 2) {
    int start, end;
    cout << "Enter the range (start _ end): ";
    cin >> start >> end;

    cout << "Prime numbers in the range " << start << " to " << end << " is: ";
    for (int number = start; number <= end; ++number) {
      int Prime = 1;
      if (number <= 1) {
        Prime = 0;
      } else {
        for (int i = 2; i * i <= number; ++i) {
          if (number % i == 0) {
            Prime = 0;
            break;
          }
        }
      }
      if (Prime) {
        cout << number << " ";
      }
    }
    cout << endl;
  } else {
    cout << "Invalid choice";
  }

  return 0;
}
