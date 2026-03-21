#include <stdio.h>

float kedelai (float nilai_tanggungan, float luas_tanah) {
    return 2 * (3.5 * nilai_tanggungan * luas_tanah);
}

float kentang (float nilai_tanggungan, float luas_tanah) {
    return 2 * (3.5 * nilai_tanggungan * luas_tanah);
}

float bamer (float nilai_tanggungan, float luas_tanah) {
    return 2 * (3.5 * nilai_tanggungan * luas_tanah);
}

float cabai (float nilai_tanggungan, float luas_tanah) {
    return 2 * (3.5 * nilai_tanggungan * luas_tanah);
}

float padi (float nilai_tanggungan, float luas_tanah) {
    return 1.5 * (3.5 * nilai_tanggungan * luas_tanah);
}

float singkong (float nilai_tanggungan, float luas_tanah) {
    return 1.5 * (3.5 * nilai_tanggungan * luas_tanah);
}

float jagung (float nilai_tanggungan, float luas_tanah) {
    return 1.5 * (3.5 * nilai_tanggungan * luas_tanah);
}

void cetak_slip(char nama[50], int jumlah_ladang, int jenis[], float biaya[]) {
    float total = 0;
    printf("=== SLIP PEMBAYARAN ASURANSI LADANG ===\n");
    printf("Nama Petani     : %s\n", nama);
    printf("=================================\n");
    for (int i = 0; i < jumlah_ladang; i++) {
        printf("Jenis Ladang Ke-%d: ", i+1);
        switch (jenis[i]) {
            case 1: printf("Ladang Kacang Kedelai");
            break;
            case 2: printf("Ladang Kentang");
            break;
            case 3: printf("Ladang Bawang Merah");
            break;
            case 4: printf("Ladang Cabai");
            break;
            case 5: printf("Ladang Padi");
            break;
            case 6: printf("Ladang Singkong");
            break;
            case 7: printf("Ladang Jagung");
            break;
            default: printf("Jenis ladang tidak diketahui!");
        }
        printf("\nBesar Biaya Asuransi: Rp %.2f\n\n", biaya[i]);
        total += biaya [i];
    }
    printf("TOTAL BIAYA ASURANSI KESELURUHAN: Rp %.2f\n", total);
}

int main() {
    char nama[50];
    int jumlah_ladang;
    int jenis[10];
    float nilai_tanggungan[10];
    float luas_tanah[10];
    float biaya[10];

    printf("Masukkan nama petani: ");
    scanf("%s", nama);

    printf("Jumlah ladang yang diasuransikan (maks 3):");
    scanf("%d", &jumlah_ladang);

    for (int i = 0; i < jumlah_ladang; i++) {
        printf("\n=== Data Ladang ke-%d ===\n", i + 1);
        printf("Pilih jenis ladang:\n");
        printf("1. Kacang Kedelai\n");
        printf("2. Kentang\n");
        printf("3. Bawang Merah\n");
        printf("4. Cabai\n");
        printf("5. Padi\n");
        printf("6. Singkong\n");
        printf("7. Jagung\n");
        printf("Masukkan pilihan jenis ladang: ");
        scanf("%d", &jenis[i]);

        printf("Masukkan nilai tanggungan per hektar: ");
        scanf("%f", &nilai_tanggungan[i]);

        printf("Masukkan luas tanah (hektar): ");
        scanf("%f", &luas_tanah[i]);

        switch (jenis[i]) {
        case 1:
            if (jenis[i] == 1) {
                biaya[i] = kentang(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 2) {
                biaya[i] = bamer(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 3) {
                biaya[i] = kedelai(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 4) {
                biaya[i] = cabai(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 5) {
                biaya[i] = padi(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 6) {
                biaya[i] = singkong(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 7) {
                biaya[i] = jagung(nilai_tanggungan[i], luas_tanah[i]);
            }
            break;
        case 2:
            if (jenis[i] == 1) {
                biaya[i] = kentang(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 2) {
                biaya[i] = bamer(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 3) {
                biaya[i] = kedelai(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 4) {
                biaya[i] = cabai(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 5) {
                biaya[i] = padi(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 6) {
                biaya[i] = singkong(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 7) {
                biaya[i] = jagung(nilai_tanggungan[i], luas_tanah[i]);
            }
            break;
        case 3:
            for(int i = 0; i < 3; i++) {
            if (jenis[i] == 1) {
                biaya[i] = kentang(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 2) {
                biaya[i] = bamer(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 3) {
                biaya[i] = kedelai(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 4) {
                biaya[i] = cabai(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 5) {
                biaya[i] = padi(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 6) {
                biaya[i] = singkong(nilai_tanggungan[i], luas_tanah[i]);
            } else if (jenis[i] == 7) {
                biaya[i] = jagung(nilai_tanggungan[i], luas_tanah[i]);
            }
        }        
    }
}

    cetak_slip (nama, jumlah_ladang, jenis, biaya);

    return 0;
}