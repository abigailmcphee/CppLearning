#include <iostream>
#include <list>

int main()
{
    int midterm;
    int final;
    int project;
    std::cout << "Enter your midterm grade: ";
    std::cin >> midterm;
    std::cout << "Enter your final exam grade: ";
    std::cin >> final;
    std::cout << "Enter your project grade: ";
    std::cin >> project;

    int grade = (midterm * 0.25 + final * 0.5 + project * 0.25) / 3;
    std::cout << grade;

    return 0;

}