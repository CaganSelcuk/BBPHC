#include <iostream>

//1 GOREV

int main() {
    int size;

    std::cout << "Dizinin boyutunu girin: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Geçersiz boyut. Pozitif bir tamsayı girin." << std::endl;
        return 1; 
        // Programı hata ile sonlandırmak
    }

    int* dizi = new int[size];

    std::cout << "Dizinin " << size << " elemanını girin: ";

    for (int i = 0; i < size; ++i) {
        std::cin >> dizi[i];
    }

    int toplam = 0;

    for (int i = 0; i < size; ++i) {
        toplam += dizi[i];
    }

    std::cout << "Dizi elemanlarının toplamı: " << toplam << std::endl;

    delete[] dizi; 
    // Bellek sızıntısını önlemek için belleği serbest bırakmak

    return 0;
} 