#include<iostream>
using namespace std;

int main()
{
    struct pegawai {
        char nip[20];
        char nama[20];
    };

    struct hitung {
        char jbt[20];
        int gapok, tj, ttl;
    };

    struct {
        struct pegawai peg;
        struct hitung gaji;
    } total;

    // Input
    cout << " NIP                        : "; cin >> total.peg.nip;
    cout << " NAMA PEGAWAI               : "; cin >> total.peg.nama;
    cout << " JABATAN                    : "; cin >> total.gaji.jbt;
    cout << " GAJI POKOK                 : "; cin >> total.gaji.gapok;
    cout << " TUNJANGAN                  : "; cin >> total.gaji.tj;
    cout << endl;

    // Proses
    total.gaji.ttl = total.gaji.gapok + total.gaji.tj;

    // Output
    cout << " ==============================================" << endl;
    cout << " SLIP GAJI PEGAWAI" << endl;
    cout << " ==============================================" << endl;
    cout << " NIP SAYA                    : " << total.peg.nip << endl;
    cout << " NAMA SAYA                   : " << total.peg.nama << endl;
    cout << " JABATAN                     : " << total.gaji.jbt << endl;
    cout << " GAJI POKOK                  : " << total.gaji.gapok << endl;
    cout << " TUNJANGAN                   : " << total.gaji.tj << endl;
    cout << " TOTAL GAJI                  : " << total.gaji.ttl << endl;

    return 0;
}
