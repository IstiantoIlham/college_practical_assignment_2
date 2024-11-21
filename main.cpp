#include <iostream>
#include <string>
#include <limits>

using namespace std;

string sayHello(const string &name) {
    return "Hello " + name;
}

int getInput(const string &prompt) {
    int number;

    while (true) {
        cout << prompt;
        cin >> number;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid. Masukkan angka yang benar!" << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return number;
        }
    }
}

string soalPertama() {
    cout << "===Menjalankan fungsi cek ganji genap===" << endl;

    int number = getInput("Masukan bilangan: ");

    if (number % 2 == 0) {
        return "Bilangan " + to_string(number) + " termasuk Genap";
    } else {
        return "Bilangan " + to_string(number) + " termasuk Ganjil";
    }
}

string soalKedua() {
    cout << "===Menjalankan fungsi cek bilangan terbesar diantara 2 bilangan===" << endl;
    int a = getInput("Masukan bilangan pertama: ");
    int b = getInput("Masukan bilangan kedua: ");

    if (a > b) {
        return "Bilangan pertama : " + to_string(a) + " lebih besar dari pada bilangan kedua : " + to_string(b);
    } else {
        return "Bilangan pertama : " + to_string(a) + " lebih kecil dari pada bilangan kedua : " + to_string(b);
    }
}

string soalKetiga() {
    cout << "===Menjalankan fungsi check bilangan terbesar diantara 3 bilangan===" << endl;

    int a = getInput("Masukan bilangan pertama: ");
    int b = getInput("Masukan bilangan kedua: ");
    int c = getInput("Masukan bilangan ketiga: ");

    if ((a > b) && (a > c)) {
        return "Bilangan pertama : " + to_string(a) + " lebih besar dari bilangan kedua : " + to_string(b) +
               " dan ketiga : " + to_string(c);
    } else if ((b > a) && (b > c)) {
        return "Bilangan kedua : " + to_string(b) + " lebih besar dari bilangan pertama : " + to_string(a) +
               " dan ketiga : " + to_string(c);
    } else if ((c > b) && (c > a)) {
        return "Bilangan ketiga : " + to_string(c) + " lebih besar dari bilangan kedua : " + to_string(b) +
               " dan pertama : " + to_string(a);
    }
    return "Error diluar prediksi";
}

string soalKeempat() {
    cout << "===Menjalankan fungsi menentukan nilai huruf dari hasil rata rata UTS & UAS===" << endl;

    int uts = getInput("Masukan total nilai uts: ");
    int uas = getInput("Masukan total nilai uas: ");
    int na = (40 * uts / 100) + (60 * uas / 100);

    if (na <= 40) {
        return "Nilai akhir = " + to_string(na) + " mendapatkan huruf E";
    } else if (na <= 55) {
        return "Nilai akhir = " + to_string(na) + " mendapatkan huruf D";
    } else if (na <= 65) {
        return "Nilai akhir = " + to_string(na) + " mendapatkan huruf C";
    } else if (na <= 79) {
        return "Nilai akhir = " + to_string(na) + " mendapatkan huruf B";
    } else if (na <= 100) {
        return "Nilai akhir = " + to_string(na) + " mendapatkan huruf A";
    }
    return "Error diluar nalar";
}

string soalKelima() {
    cout << "===Menjalankan fungsi menentukan total gaji lebur pada karyawan===" << endl;

    int total_jam_lembur = getInput("Masukan bilangan jam lembur : ");
    int bonus_lembur = total_jam_lembur * 20000;
    int gaji_pokok;

    while (true) {
        int golongan = getInput("Pilih golongan karyawa 1 hingga 3 : ");
        switch (golongan) {
            case 1:
                gaji_pokok = 100000;
                return "Total bonus lembur dari karyawan golongan ke satu adalah : " + to_string(bonus_lembur) +
                       " dan total gaji yang diterima adalah : " +
                       to_string(gaji_pokok + bonus_lembur);
            case 2:
                gaji_pokok = 200000;
                return "Total bonus lembur dari karyawan golongan ke dua adalah : " + to_string(bonus_lembur) +
                       " dan total gaji yang diterima adalah : " +
                       to_string(gaji_pokok + bonus_lembur);
            case 3:
                gaji_pokok = 300000;
                return "Total bonus lembur dari karyawan golongan ke tiga adalah : " + to_string(bonus_lembur) +
                       " dan total gaji yang diterima adalah : " +
                       to_string(gaji_pokok + bonus_lembur);
            default:
                cout << "Gunakan nomor golongan dari 1 hingga 3." << endl;
        }
    }
}

string soalKeenam() {
    cout << "=== Menjalankan fungsi untuk menentukan hari dari kode hari yang di inputkan" << endl;
    int kode_hari = getInput("Masukan kode hari dari 1 hingga 7 : ");
    switch (kode_hari) {
        case 1:
            return "Senin";
        case 2:
            return "Selasa";
        case 3:
            return "Rabu";
        case 4:
            return "Kamis";
        case 5:
            return "Jumat";
        case 6:
            return "Sabtu";
        case 7:
            return "Minggu";
        default:
            return "Tidak ada hari dengan kode hari: " + to_string(kode_hari);
    }
}


int main() {
    int pilihan;
    bool selesai = false;

    while (!selesai) {
        cout << "\n=== Menu Program ===" << endl;
        cout << "1. Cek Ganjil/Genap" << endl;
        cout << "2. Cek 2 bilangan terbesar" << endl;
        cout << "3. Cek 3 bilangan terbesar" << endl;
        cout << "4. Cek nilai huruf dari hasil rata rata UTS & UAS" << endl;
        cout << "5. Cek total gaji karyawan lembur" << endl;
        cout << "6. Cek hari dengan kode hari" << endl;
        cout << "7. Keluar" << endl;
        cout << "Masukkan nomor urut untuk mengesekusi program: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << soalPertama() << endl;
                break;
            case 2:
                cout << soalKedua() << endl;
                break;
            case 3:
                cout << soalKetiga() << endl;
                break;
            case 4:
                cout << soalKeempat() << endl;
                break;
            case 5:
                cout << soalKelima() << endl;
                break;
            case 6:
                cout << soalKeenam() << endl;
                break;
            case 7:
                cout << "\nKeluar dari program. Terima kasih!" << endl;
                selesai = true;
                break;
            default:
                cout << "\nPilihan tidak valid. Coba lagi." << endl;
        }
    }

    return 0;
}
