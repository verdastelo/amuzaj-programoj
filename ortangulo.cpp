#include <iostream>

// Jena kodero difinas ortangulon.

void ortangulo (int mallonga_latero, int longa_latero)
{

    for (int i = 0; i < mallonga_latero; i++) {
        std::cout << "*";
        }

    std::cout << '\n';

// Sen tiu ĉi kodero, la flanklongeco de la longa latero estos 2 da mezurunoj pli longa ol ĝi vere estas.

    for (int i = 0; i < (longa_latero-2); i++) {
            for (int j = 0; j < mallonga_latero; j++) {
                std::cout << "*";
            }
        std::cout << '\n';
        }

    for (int i = 0; i < mallonga_latero; i++) {
        std::cout << "*";
        }
}

int main()
{
    std::cout << "Skribu la laterojn de la ortangulo, kiun"
              << " vi volas vidi sur ekrano. "
              << std::endl;

    int m = 0; // kie "m" signifas mallonga lateron.
    int l = 0; // kie "l" signifas longan lateron.

    std::cout << "Enigu la mallongan lateron: ";
    std::cin >> m;
    std::cout << "La mallonga latero estas " << m << " da mezurunoj." << std::endl;

    std::cout << "Enigu la longan lateron: ";
    std::cin >> l;
    std::cout << "La longa latero estas " << l << " da mezurunoj." << std::endl;

    std::cout << "La aero de la ortangulo estas " << (m * l) << " kvadrataj mezurumoj." << std::endl;

    ortangulo (m, l);

    std::cout << '\n';

    return 0;
}
