#include <iostream>  
#include <iomanip>
using namespace std;

double hitungDurasiTidur(double tidur, double bangun) {
 
    if (bangun < tidur) {
        bangun += 24;
    }
    return bangun - tidur;
}

double hitungWaktuOptimalBangun(double tidur) {
    double optimalBangun = tidur + 7;

    if (optimalBangun >= 24) {
        optimalBangun -= 24;
    }
    return optimalBangun;
}

int main() {
    double waktuTidur, waktuBangun;
    int pilihan;

    do {
        cout << "Kapan anda mulai tidur (format 24 jam, contoh: 22.30): ";
        cin >> waktuTidur;
        cout << "Kapan anda bangun tidur (format 24 jam, contoh: 6.30): ";
        cin >> waktuBangun;

        double durasiTidur = hitungDurasiTidur(waktuTidur, waktuBangun);

        double waktuOptimalBangun = hitungWaktuOptimalBangun(waktuTidur);

        cout << fixed << setprecision(2);
        cout << "Total waktu tidur anda: " << durasiTidur << " jam." << endl;

        if (durasiTidur >= 7) {
            cout << "Tidur Anda sudah optimal." << endl;
        } else {
            cout << "Tidur Anda kurang optimal. Paling tidak tidur minimal 7 jam." << endl;
            cout << "Jam terbaik anda untuk bangun adalah: " << waktuOptimalBangun << " (24 jam format)." << endl;
        }

        cout << "\nKetik 1 untuk coba lagi, atau ketik 0 untuk keluar: ";
        cin >> pilihan;
        cout << endl;

    } while (pilihan != 0);

    cout << "Terima kasih telah menggunakan program ini. Selamat Tidur!" << endl;

    return 0;
}
