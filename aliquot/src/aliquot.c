#include <stdio.h>

int main() {
    int sn , maxl; // sn = o θετικός αριθμός με τον οποίο ξεκινάει η ακολουθία , maxl = μέγιστο μήκος ακολουθίας
    char forl[2] ;
    printf("Please give the number to start the aliquot sequence from: ");
    scanf("%d" , &sn);
    printf("Provide the max aliquot length to look for (0 for unlimited):  ");
    scanf("%d" , &maxl);
    printf("Do you want to print the full sequence ('f') or just the length ('l')? ");
    scanf(" %c" , &forl[0]);
    int steps = 0;
    int sum = 0;
    while (sum!=1){
        for (int i=1; i<sn; i++){
            if (sn % i==0) {
                sum = sum + i ;
            }
        }
        if (forl[0] == 'f'){
            printf("%d\n" , sum);
        }
 
        steps = steps + 1;
        sn = sum;
        if (sum!=1){
            sum=0;
        }else  if (forl[0]== 'f'){
            printf("0\n");

            }
        }
        
    
    steps = steps + 1 ;
    if (forl[0] == 'l'){
        printf("The length of the aliquot sequence is %d\n" , steps);
    }
    return 0;

}