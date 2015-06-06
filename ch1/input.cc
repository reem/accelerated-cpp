// Ask for a person's name and then greet them.
#include <iostream>
#include <string>

int main() {
    // Prompt for a name.
    std::cout << "Please enter your first name: ";

    // Read in a name.
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}

