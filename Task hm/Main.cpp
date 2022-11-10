//8. Имеется треугольник со сторонами а, b, с.Найти медианы треугольника, сторонами которого
//являются медианы исходного треугольника.#define _USE_MATH_DEFINES 
#include <iostream>
#include <math.h>
int main() {
    int a, b, c; //Declaring variables
    //Output a string to the user and user input
    std::cout << "You need to enter the sides of the triangle" << std::endl;
    std::cout << "Enter a ";
    std::cin >> a;
    std::cout << "Enter b ";
    std::cin >> b;
    std::cout << "Enter c ";
    std::cin >> c;
    //Using if we check the existence of a triangle
    if (a < b + c) 
    {
        if (abs(a - b) < c) {
            int m_a = sqrt(2 * a * a + 2 * b * b - c * c) / 2;
            int m_b = sqrt(2 * b * b + 2 * c * c - a * a) / 2;
            int m_c = sqrt(2 * c * c + 2 * a * a - b * b) / 2;
 
            if (m_a < m_b + m_c) 
            {
                if (abs(a - b) < c) {
                    int m1 = sqrt(2 * m_a * m_a + 2 * m_b * m_b - m_c * m_c) / 2;
                    int m2 = sqrt(2 * m_b * m_b + 2 * m_c * m_c - m_a * m_a) / 2;
                    int m3 = sqrt(2 * m_c * m_c + 2 * m_a * m_a - m_b * m_b) / 2;
                    std::cout << "The medians of such a triangle = " << m_a << ", " << m_b << ", " << m_c << std::endl;
                }
 
            }
          
        }
      
    }
    else
    {
        std::cout << "Incorrect values of sides. There is no such triangle";
    }
}