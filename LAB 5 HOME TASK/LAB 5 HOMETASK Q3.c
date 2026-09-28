#include<stdio.h>
int main(){
	int pcategory,ccategory,amount,d,discount=0,on;
	float tamount,discounta;
	printf("Enter Product Category 1.Electronics 2.Clothing 3.Books 4.Household\n");
	scanf("%d",&pcategory);
	printf("Enter Customer Category 1.Regular 2.Premium 3.Corporate\n");
	scanf("%d",&ccategory);
	printf("Enter Order Amount\n");
	scanf("%d",&amount);
	printf("Enter Delivery Distance\n");
	scanf("%d",&d);
	printf("Enter Order Number\n");
	scanf("%d",&on);
	switch(pcategory){
		case 1:{
		printf("Your Product is Electronics\n");
	switch(ccategory){
		case 1:{
			printf("You are Regular Customer\n");
			discount=5;
			 break;}
		case 2:{
			printf("You are Premium Customer\n");
			discount=10;
			 break;}
		case 3:{
			printf("You are Corporate Customer\n");
			discount=15;
			 break;}
			default: printf("INVALID\n");break;
			}break;}
		case 2:{
		printf("Your Product is Clothing\n");
	switch(ccategory){
		case 1:{
			printf("You are Regular Customer\n");
			discount=10;
			 break;}
		case 2:{
	        printf("You are Premium Customer\n");
			discount=15;
			 break;}
		case 3:{
		    printf("You are Corporate Customer\n");
			discount=20; 
			break;}
			default:printf("INVALID\n");break;
			}break;}
	    case 3:{
		printf("Your Product is Books\n");
	switch(ccategory){
		case 1:{
		printf("You are Regular Customer\n"); 
		discount=8;
		break;}
		case 2:{
		    printf("You are Premium Customer\n");
			discount=12;
			 break;}
		case 3:{
		    printf("You are Corporate Customer\n");
			discount=18;
			 break;}
			default:printf("INVALID\n");break;
			}break;}
		case 4:{
			printf("Your Product is Household\n");
	switch(ccategory){
		case 1:{
            printf("You are Regular Customer\n"); 
			discount=7;
			break;}
		case 2:{
		    printf("You are Premium Customer\n");
			discount=14;
			 break;}
		case 3:{
		    printf("You are Corporate Customer\n");
			discount=20;
			 break;}
			default: printf("INVALID\n");break;
			}break;}
		default:printf("INVALID Product\n");break;
	}
	discounta=amount*discount/100;
	tamount=amount-discounta;
	if(tamount>=5000||ccategory==2||ccategory==3){
	printf("\nFree Shipping");}
	else {
	printf("NO FREE SHIPPING\n");
	printf("Delivery Charge is same as Distance= %d",d);
	tamount=tamount+d;}
	if((ccategory==2||ccategory==3)&&amount>=10000){
	printf("\nPRIORITY DELIVERY\n");
	tamount=tamount+500;
}
    else printf("\nNO PRIORITY SO NO ADDITIONAL FEE\n");
    if (on%4==0)
    printf("Group Processing A\n"); 
	else if (on%4==1)
    printf("Group Processing B\n"); 
	else if (on%4==2)
    printf("Group Processing C\n");  
    else if (on%4==3)
    printf("Group Processing D\n");
    else printf("NO PROCESSING\n");
    printf("DISCOUNT PERCENT IS= %d",discount);
    printf("\nDISCOUNTED AMOUNT= %2f",discounta);
    printf("\nTOTAL AMOUNT TO PAY IS= %2f",tamount);
    return 0;
}

