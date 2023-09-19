#include <iostream>
#include <string>

//3 GOREV

int main() {

    std::string metin;
    std::cout << "Bir metin giriniz: ";
    std::getline(std::cin, metin);

    int soglAsciSayisi = 0;
    for (char karakter : metin) {
        char buyukHarf = std::toupper(karakter); 
        // Küçük harfi büyük harfe dönüştürmek
        
        if (buyukHarf >= 'A' && buyukHarf <= 'Z' && buyukHarf != 'A' && buyukHarf != 'E' && buyukHarf != 'I' && buyukHarf != 'O' && buyukHarf != 'U') {
            soglAsciSayisi++;
        }
    }

    std::cout << "Ünlü harf sayısı: " << soglAsciSayisi << std::endl;

    return 0;
}

 
