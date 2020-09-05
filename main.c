//SEFA ENES ERGİN-sefaenesergin@gmail.com
//Çok boyutlu bir diziyi tek boyuta indirgeyen ve sıralayan kod.
#include <stdio.h>
void kabarcik_siralamasi( int [ ], int );
void dizi_goster( int *, int );
int main(int argc, const char * argv[]) {
    int tablo[5][4] = {
            {4, 3, 2, 1},
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {2, 5, 7, 9},
            {0, 5, 9, 0} };
    int *ptr=tablo[0];/*çok boyutlu bir dizinin başlangıç adresini pointer'a atadık.*/
    //ptr isimli pointer artık tek boyutlu bir dizi oldu.
    kabarcik_siralamasi( ptr, 20 );
    dizi_goster( ptr, 20 );
    return 0;
}
void kabarcik_siralamasi( int dizi[ ], int boyut )
{
    //Bubble sort algoritmasını kullanarak sıralama yapar.
    int i, j, temp;
    for( i = 0; i < boyut-1; i++ ) {
        for( j = boyut - 1; j > i; j-- )  {
            if( dizi[ j ] < dizi[ j - 1 ] ) {
                temp = dizi[ j -1 ];
                dizi[ j - 1 ] = dizi[ j ];
                dizi[ j ] = temp;
            }

        }
    }
    
}
void dizi_goster( int dizi[],int boyut )
{
    int i;
    for( i = 0; i < boyut; i++ ) {
        printf("%d ",dizi[i]);
    }
    printf("\n");
}
