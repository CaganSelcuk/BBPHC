#include <iostream>
#include <string>

//2 GOREV

int main() {
    std::string ilkMetin;
    std::string ikinciMetin;

    std::cout << "İlk metni giriniz: ";
    std::getline(std::cin, ilkMetin); 

    std::cout << "İkinci metni giriniz: ";
    std::getline(std::cin, ikinciMetin); 

    std::string birlestirilmisMetin = ilkMetin + " " + ikinciMetin;

    std::cout << "Sonuç: " << birlestirilmisMetin << std::endl;

    return 0;
}