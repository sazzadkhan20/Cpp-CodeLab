/*#include <iostream>

using namespace std;

int main()
{
    string myString = "1234556364";
    int myInt = stoi(myString);

    cout << "myInt: "<< myInt <<endl;

    return 0;
}*/
#include <iostream>
#include <string>

int main() {
    int myInt = 12345;
    std::string myString = std::to_string(myInt);

    // Output: "12345"
    std::cout << "myString: " << myString << std::endl;

    return 0;
}


