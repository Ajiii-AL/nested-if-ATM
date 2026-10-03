#include <stdio.h>

int main(){

    int saldo;
    int jumlahTarik;
    int pin;
    int HasilSaldo;


    printf("Masukkan Pin Anda : ");
    scanf("%d", &pin);

    if(pin == 1234){

        printf("masukan jumlah tarik : \n");
        scanf("%d", &jumlahTarik);

        if(jumlahTarik >= 0){

            printf("masukan saldo anda : \n");
            scanf("%d", &saldo);

                if(jumlahTarik <= saldo){

                HasilSaldo = saldo - jumlahTarik;
                printf("penarikan berhasil, saldo anda sekarang : %d", HasilSaldo);

                }else{

                printf("Peenarikan gagal, saldo anda tidak cukup");

                }
            
        }else{

            printf("Jumlah Penarikan tidka valid");
        }


    }else{
        printf("Pin Anda Salah");
    }



    return 0;
}