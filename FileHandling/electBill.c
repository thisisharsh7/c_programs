// Write a program that will calculate and show the bills of an Electric Company. The rates vary depending on whether the use is residential (R), commercial( C), or industrial (I). Any other code should be treated as an error. The program should accept the subscriber ID, Subscriber Name, his total electrical consumption(kWh) in a month, and the code of the consumer type.The rates are computed as follows:
// R: 50 plus .50 per kWh used
// C: 100 for the first 1000 kWh and 0.45 for each additional kWh
// I: 180 for the first 1000 kWh and 0.75 for each additional kWh

#include<stdio.h>
typedef struct sub{
    int id,consum;
    char name[100],ch;
}sub;
void charge(sub p1){
    int ans;
    if(p1.ch=='I'){
        ans = 180 + (0.75)*(p1.consum-1000);
    }else if(p1.ch=='R'){
        ans = 50 + (0.50)*(p1.consum);
    }else if(p1.ch=='C'){
        ans = 100 + (0.45)*(p1.consum-1000);
    }else{
        printf("\nCode Error\nRun program again\n");
        return;
    }
    printf("Consumption charge(Bill) is %d.",ans);
    
}

int main(){
    sub p1;
    printf("Enter the subscriber details\n");
    printf("Subscriber code: ");
    scanf("%c",&p1.ch);
    printf("Subscriber Id: ");
    scanf("%d",&p1.id);
    printf("Subscriber name: ");
    scanf("%s",&p1.name);
    printf("Subscriber cosumption(kWh): ");
    scanf("%d",&p1.consum);
    charge(p1);

    return 0;
}