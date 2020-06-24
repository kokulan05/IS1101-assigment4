#include<stdio.h>
# define FIXED_COST 500

int revenue, cost, ticketPrice, attendees;

int Profit(){
	int profit=Revenue()-Cost();
	return profit;
}

int Revenue(){
	int revenue= attendees*ticketPrice;
	return revenue;	
}

int Cost(){
	int cost=FIXED_COST+(attendees*3);
	return cost;
}


int main(){
	
	printf("Relationship between profit and ticket price\n");
	printf("---------------------------------------------\n");
	
	printf("Please enter the number of attendees :");
	scanf("%d",&attendees);
	
	printf("\nPlease enter the price of the ticket :\n");
	scanf("%d",&ticketPrice);

	int profit=Profit();
	printf("Profit %d",profit);
	
	return 0;
	
}
