#include <stdio.h>
 
typedef struct{
    char NPM[10];
    char Nama[51];
} Mahasiswa;
 
int main() {
 
    Mahasiswa M1 = { "535000001", "Mhs 1"};
    Mahasiswa M2 = { "535000002", "Mhs 2"};
    Mahasiswa M3 = { "535000003", "Mhs 3"};
 
    FILE *FileMahasiswaWrite;
    FileMahasiswaWrite = fopen("mahasiswa.txt", "wb");
 
    fwrite(&M1, sizeof(Mahasiswa), 1, FileMahasiswaWrite);
    fwrite(&M2, sizeof(Mahasiswa), 1, FileMahasiswaWrite);
    fwrite(&M3, sizeof(Mahasiswa), 1, FileMahasiswaWrite);
   
    fclose(FileMahasiswaWrite);
 
    FILE *FileMahasiswaRead;
    FileMahasiswaRead = fopen("mahasiswa.txt", "r");
 
    Mahasiswa R1 ;
    Mahasiswa R2 ;
    Mahasiswa R3 ;
 
    int i = 1;
    Mahasiswa R[i];
 
    for(i = 1; i <=3; i++){
        fread(&R[i], sizeof(Mahasiswa), 1, FileMahasiswaRead);
    }

    printf("=======\nFor\n");
    for(i = 1; i <=3; i++){
        printf("%s\t%s\n", R[i].NPM, R[i].Nama);
    }
 
    fclose(FileMahasiswaRead);
   
    return 0;
}