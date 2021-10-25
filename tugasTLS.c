#include <stdio.h>

int main(void)
{
    
    float beratBadan, tinggiBadan, imt;
    int i=0;

    printf("\tMenghitung Indeks Massa Tubuh (IMT)\n");
    do
    {
    printf("\nBerat Badan (kg): ");
    scanf("%f", &beratBadan);
    printf("Tinggi Badan (m): ");
    scanf("%f", &tinggiBadan);

    imt=beratBadan/(tinggiBadan*tinggiBadan);

    printf("IMT: %.2f",imt);

    if(imt>=30)
    {
        printf("\t(Obesitas)\n");
        printf("Aktivitas fisik 30 menit per hari\nKonsumsi buah dan sayur\n");
        printf("Semangat, kamu pasti bisa!!!\n");
    }
        else if(imt<30 && imt>=25)
        {
            printf("\t(Berat badan berlebih)\n");
            printf("Tingkatkan aktivitas fisik\nJaga pola makan\n");
            printf("Ayo sedikit lagi!!!\n");
        }
            else if(imt<25 && imt>=18.5)
            {
                printf("\t(Berat badan normal)\n");
                printf("Pertahankan pola makan dan aktivitas fisik\n");
                printf("Good Job!!!\n");
            }
                else 
                {
                    printf("\t(Berat badan dibawah normal)\n");
                    printf("Tingkatkan porsi makan\nPilih makanan yang padat gizi dan kalori\nOlahraga rutin\n");
                    printf("Semangat, kamu pasti bisa!!!\n");
                }
        i++;
        printf("\nMasukkan 0 untuk hitung ulang dan lainnya untuk keluar: ");
        scanf("%d",&i);
    }
    while (i==0);
    return 0;
}