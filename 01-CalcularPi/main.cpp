#include <iostream>
#include <cmath>
#include <iomanip>

const float PI = 3.141592;

int main(void)
{
    float sum = 0;
    float aux;
    size_t count = 0;

    // Fijamos la precision para la cantidad de decimales pedida.
    std::cout << std::fixed;
    std::cout << std::setprecision(6);

    // La serie de Leibniz converge en PI/4
    while (sum != PI/4)
    {
        aux = pow(-1,count)/((2 * count) + 1);
        sum += aux;
        count++;
    }
    
    std::cout << "Llegamos al resultado en " << count << " iteraciones." << std::endl;
    std::cout << "Resultado: " << (4 * sum) << std::endl;

    return 0;
}