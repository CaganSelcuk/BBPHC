#include <iostream>
#include <string>

//4 GOREV 

int main() {
    std::string metin;
    std::cout << "Bir metin giriniz: ";
    std::getline(std::cin, metin);

    std::string tersMetin = "";
    for (int i = metin.length() - 1; i >= 0; i--) {
        tersMetin += metin[i];
    }

    std::cout << "Sonuç: " << tersMetin << std::endl;

    return 0;
}