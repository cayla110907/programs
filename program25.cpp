#include <stdio.h>
#include <string.h>

#define tarifdasar 5000
#define max 3

typedef struct {
    char jenis[20];
    int durasi;
    float tariftotal;
} Kendaraan;

float hitungTarifTotal(char jenis[], int durasi) {
    float tarif = 0;

    if (strcmp(jenis, "Mobil") == 0) {
        tarif = tarifdasar;
    } else if (strcmp(jenis, "Motor") == 0) {
        tarif = 0.5 * tarifdasar;
    } else if (strcmp(jenis, "Truk") == 0) {
        tarif = 2 * tarifdasar;
    }

    float total = tarif * durasi;
    if (durasi > 5) {
        total = total - (0.10 * total);
    }
    return total;
}

float hitungKendaraan(Kendaraan k[], int jumlah) {
    float total = 0;
    int i;

    for (i = 0; i < jumlah; i++) {
        total += k[i].tariftotal;
    }
    return total;
}

void printStruk(char nama[], Kendaraan k[], int jumlah) {
    int i;

    printf("\n--- STRUK PARKIR ---\n");
    printf("Nama Pelanggan: %s\n", nama);
    printf("_________________________________\n");
    
    for (i = 0; i < jumlah; i++) {
        printf("Kendaraan %d\n", i+1);
        printf("Jenis Kendaraan: %s\n", k[i].jenis);
        printf("Biaya: Rp %.0f\n", k[i].tariftotal);
        printf("_________________________________\n");
    }
    printf("TOTAL KESELURUHAN: Rp %.0f\n", hitungKendaraan(k, jumlah));
}

int main() {
    char nama[50];
    Kendaraan k[max];
    int jumlah;
    int i;

    printf("Selamat datang!\n");
    printf("Masukkan nama pelanggan: ");
    scanf("%s", nama);
    printf("Masukkan jumlah kendaraan: ");
    scanf("%d", &jumlah);
    if (jumlah > max) {
        printf("Maaf, maksimal hanya memiliki 3 kendaraan.\n");
        return 0;
    }

    for (i = 0; i < jumlah; i++) {
        printf("Kendaraan ke-%d\n", i+1);
        printf("Jenis Kendaraan (Mobil/Motor/Truk): ");
        scanf("%s", k[i].jenis);
        printf("Durasi waktu parkir (jam): ");
        scanf("%d", &k[i].durasi);

        k[i].tariftotal = hitungTarifTotal(k[i].jenis, k[i].durasi);
    }

    printStruk(nama, k, jumlah);

    return 0;
}