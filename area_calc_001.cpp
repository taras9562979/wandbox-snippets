#include <iostream>
#include <string>

// Function that calculates the area of a rectangle
double calculateArea(double width, double height) {
    return width * height;
}

int main() {
    // Variable declarations
    int age = 25;
    float temperature = 36.6f;
    double width = 5.5;
    double height = 3.2;
    char grade = 'A';
    bool isSunny = true;
    std::string name = "Тарас";

    // Function call
    double area = calculateArea(width, height);

    // Output results
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Temperature: " << temperature << "°C" << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is it sunny? " << (isSunny ? "Yes" : "No") << std::endl;
    std::cout << "Rectangle area: " << area << " square units" << std::endl;

    return 0;
}
