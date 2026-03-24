#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char namaitem[50];
    int jumlahitem;
} Item;

void tambahItem() {
    Item item;
    FILE *fp = fopen("ShoppingList.txt", "a");

    if (fp == NULL) {
        printf("File gagal dibuka!\n");
        return;
    }

    printf("Masukkan nama item: ");
    scanf(" %[^\n]", item.namaitem);

    printf("Masukkan jumlah item: ");
    scanf("%d", &item.jumlahitem);

    fprintf(fp, "%s,%d\n", item.namaitem, item.jumlahitem);
    fclose(fp);

    printf("Berhasil menambahkan item ke dalam list!\n\n");
}

void displayList() {
    FILE *fp = fopen("ShoppingList.txt", "r");
    char line[100];

    if (fp == NULL) {
        printf("Tidak ada shopping list yang tersimpan.\n");
        return;
    }

    printf("--- SHOPPING LIST ---\n");

    while (fgets(line, sizeof(line), fp)) {
        char nama[50];
        int jumlah;

        if(sscanf(line, "%[^,],%d", nama, &jumlah) == 2) {
            printf("- %s (jumlah: %d)\n", nama, jumlah);
        }
    }

    printf("--------------------\n\n");
    fclose(fp);
}

int main() {
    int pilihan;

    while(1) {
        printf("--- PILIHAN MENU SHOPPING LIST ---\n");
        printf("1. Tambahkan item\n");
        printf("2. Tampilkan shopping list\n");
        printf("3. Keluar\n");

        printf("Masukkan pilihan menu: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            tambahItem();
            break;
        case 2:
            displayList();
            break;
        case 3:
            printf("Program selesai, berhasil keluar dari program!\n");
            return 0;
        default:
            printf("Pilihan Anda tidak valid!");
            break;
        }
    }
    return 0;
}