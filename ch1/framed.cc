// Ask for a person's name then generated and print a framed greeting.
#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;
    std::cout << std::endl;

    const std::string greeting = "Hello, " + name + "!";

    const std::string spaces(greeting.size(), ' ');

    // second and fourth lines
    const std::string surrounded = "* " + spaces + " *";

    // first and fifth lines
    const std::string stars(surrounded.size(), '*');

    std::cout
        << stars << std::endl
        << surrounded << std::endl
        << "* " << greeting << " *" << std::endl
        << surrounded << std::endl
        << stars << std::endl;
}

