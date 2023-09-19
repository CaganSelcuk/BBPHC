#include <iostream>
#include <vector>

//5 GOREV

int main() {
    int satir, sutun;

    std::cout << "Matrisin boyutunu girin (satır ve sütun sayısı): ";
    std::cin >> satir >> sutun;

    if (satir <= 0 || sutun <= 0) {
        std::cout << "Geçersiz boyut. Pozitif tam sayılar girin." << std::endl;
        return 1; // Hata ile çık
    }

    std::vector<std::vector<int>> matris(satir, std::vector<int>(sutun));

    std::cout << "Matrisin elemanlarını girin:" << std::endl;

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            std::cin >> matris[i][j];
        }
    }

    if (satir != sutun) {
        std::cout << "Bu program yalnızca kare matrisler için çalışır." << std::endl;
        return 1; // Hata ile çık
    }

    int diagonalToplam = 0;

    for (int i = 0; i < satir; ++i) {
        diagonalToplam += matris[i][i];
    }

    std::cout << "Ana köşegen elemanlarının toplamı: " << diagonalToplam << std::endl;

    return 0;
}