#include <stdio.h>
#include <stdlib.h>

int Triagtest(int n){
    int i,holder;
    holder = 0;
    i = 1;
    while(holder<n){
        holder = i + holder;
        i++;
    }
    if(holder == n){
        return 1;
    }
    else{
        return 0;
}
}

int main()
{
    int k;
    do{
    int rank,i,counter,sum,j;
    counter = 1;
    i = 0;
    int *tableTriag;
    printf("Enter the rank up to which you want to sum the triangular numbers:\n");
    scanf("%d",&rank);
    tableTriag = malloc(rank*sizeof(int));
    while(i<rank){

        if(Triagtest(counter)){
            tableTriag[i] = counter;
            i++;
            counter++;
        }
        else{
            counter++;
        }
    }
    /*calculating the sum of the triangular numbers*/
    sum = 0;
    for(j=0;j<rank;j++){
        sum = sum + tableTriag[j];
    }
    printf("The sum of all the triangular numbers up to and including the n-th,\n where n is %d is:\t%d", rank,sum);
    free(tableTriag);
     //there was also a parentheses lacking here
    printf("\n \n Enter 1 to continue and 0 to exit:\t");
    scanf("%d", &k);
 }while(k==1);
 return 0;
}


