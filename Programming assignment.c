#include<stdio.h>
#include<string.h>
#include<time.h>
int main(){
	int menuoption;
	int i;
	int mealnumber;
	char phonenumber[10];
	char address[100];
	char typeofpizza;
	char paymentmethod;
	char additionalmeal[4];
	int numberofmeals;
	int count3=0;
	int count4=0;
	int count8=0;
	int count9=0;
	int count13=0;
	int count14=0;
	int invoicenumber=0;
	int totalmeals;
	double totalsaleamount;
	double invoicesubtotal;
	double 	GST;
	double QST;
	double invoicetotal;
	time_t (now);
	struct tm *current;
	//declaring and initialising the meal table as arrays so as to print it
	int number[6]={3,4,8,9,13,14};
	char description[6][100]={"1 moyenne Pizza 12'' + 1 petite poutine + 1 pepsi(355ml)","1 moyenne Pizza 12'' +10 ailes de poulet + Frites + 1 pepsi(355ml)",
	"1 pizza large 14'' + 1 moyenne poutine + 1 pepsi(355ml)","1 pizza large 14''  + 12 ailes de poulet + frites + 1 pepsi(355ml)",
	"1 pizza X-large 16'' + 1 grande poutine + 1 pepsi(355ml)","1 pizza X-large 16'' + 12 ailes de poulet + 1 pepsi(355ml)"};
	char unitprice[6][50]={"$20.49","$21.99","$24.49","$25.99","$28.49","$29.99"};
	//Displaying welcome message and service summary
	printf("  -----------------------------------------\n");
	printf("         Beinvenue a Pizza Pour Tous\n");
	printf("  -----------------------------------------\n");
	printf("on offre several plusieurs choix plats avec livraison gratuite\n\n");
	//displaying options
	do{
	printf("entrez votre option de service\n\n");
	printf("1.facturer une commande\n2.affichez le nombre de repas vendus et le montant total des ventes\n3.Quitter le programme\n");
	scanf("%d",&menuoption);
	switch(menuoption){
		// in case user enters option 1
		case 1:
			//requesting and reading phone number
			printf("entrez votre numero de telephone\n");
			scanf("%s",phonenumber);
			//requesting and reading address
			printf("entrez votre addresse\n");
			scanf("%s",address);
			//printing the meal table
			printf("Menu(Super Combos)\n");
			printf("Numero   Description                                                     Prix unique\n");
			printf("  3     1 Medium 12'' Pizza + 1 Small shawarma + 1 pepsi(355ml)          $20.49\n");
			printf("  4     1 Medium 12'' Pizza + 10 chicken wings + fries + 1 pepsi(355ml)   $21.99\n");
			printf("  8     1 large 14'' Pizza + 1 medium shawarma + 1 pepsi(355ml)           $24.49\n");
			printf("  9     1 large 14'' Pizza + 12 chicken wings + fries+ 1 pepsi(355ml)    $25.99\n");
			printf("  13    1 X-large 16'' Pizza + 1 large shawarma + 1 pepsi(355ml)         $28.49\n");
			printf("  14    1 X-large 16'' Pizza + 15 chicken wings + 1 pepsi(355ml)         $29.99\n");
			
            //requesting which meals the user wants
				printf("entrez le numero de repas(3,4,8,9,13,14)\n");
			scanf("%d",&mealnumber);
				//making sure the meal number is part of the given values
			while((mealnumber!=3)&&(mealnumber!=4)&&(mealnumber!=8)&&(mealnumber!=9)&&(mealnumber!=13)&&(mealnumber!=14)){
				printf("entree invalide, reesayez\n");
				scanf("%d",&mealnumber);}
				//reading the type of pizza from the user
			printf("entrez le type de pizza: v ou V=vegeterien, f ou F=fromage, t ou T=toute-granie, e ou E= epinard, m ou M=fruits de mer\n");
			scanf(" %c",&typeofpizza);
			//making sure only the given letters are accepted
			while((typeofpizza!='v'&&typeofpizza!='V')&&(typeofpizza!='f'&&typeofpizza!='F')&&(typeofpizza!='t'&&typeofpizza!='T')
			&&(typeofpizza!='e'&&typeofpizza!='E')&&(typeofpizza!='m'&&typeofpizza!='M')){
				printf("entree invalide, reesayez\n");
					scanf(" %c",&typeofpizza);	
			}
	//asking the number of meals from the user
					printf("combien de plats souhaitez-vous?\n");
			scanf("%d",&numberofmeals);
			//ensuring number of meals is strictly greater than 0
			while(numberofmeals<=0){
				printf("entree invalide, reesayez\n");
				scanf("%d",&numberofmeals);}
		//counting the number of each meal chosen
				if(mealnumber==3)
				count3+=numberofmeals;
				else if(mealnumber==4)
				count4+=numberofmeals;
					else if(mealnumber==8)
					count8+=numberofmeals;
					else if(mealnumber==9)
					count9+=numberofmeals;
					else if(mealnumber==13)
					count13+=numberofmeals;
					else if(mealnumber==14)
					count14+=numberofmeals;
							
				//asking if user wants another meal
				printf("voulez vous ajouter un autre repas ?,(o ou O=OUI, N ou n=non)\n");
				scanf("%s",additionalmeal);
				while(strcmp(additionalmeal,"o")==0||strcmp(additionalmeal,"O")==0){
					printf("entrez le numero de repas(3,4,8,9,13,14)\n");
					      scanf("%d",&mealnumber);
				//making sure the meal number is part of the given values
			while((mealnumber!=3)&&(mealnumber!=4)&&(mealnumber!=8)&&(mealnumber!=9)&&(mealnumber!=13)&&(mealnumber!=14)){
				printf("entree invalide, reesayez\n");
				scanf("%d",&mealnumber);}
				//reading the type of pizza from the user
			printf("entrez le type de pizza: v ou V=vegeterien, f ou F=fromage, t ou T=toute-granie, e ou E= epinard, m ou M=fruits de mer\n");
			scanf(" %c",&typeofpizza);
			//making sure only the given letters are accepted
			while((typeofpizza!='v'&&typeofpizza!='V')&&(typeofpizza!='f'&&typeofpizza!='F')&&(typeofpizza!='t'&&typeofpizza!='T')
			&&(typeofpizza!='e'&&typeofpizza!='E')&&(typeofpizza!='m'&&typeofpizza!='M')){
				printf("entree invalide, reesayez\n");
					scanf(" %c",&typeofpizza);
				
			}
			
			//asking the number of meals from the user
					printf("combien de plats souhaitez-vous?\n");
			scanf("%d",&numberofmeals);
			//ensuring number of meals is strictly greater than 0
			while(numberofmeals<=0){
				printf("entree invalide, reesayez\n");
				scanf("%d",&numberofmeals);}
		//counting the number of each meal chosen
				if(mealnumber==3)
				count3+=numberofmeals;
				else if(mealnumber==4)
				count4+=numberofmeals;
					else if(mealnumber==8)
					count8+=numberofmeals;
					else if(mealnumber==9)
					count9+=numberofmeals;
					else if(mealnumber==13)
					count13+=numberofmeals;
					else if(mealnumber==14)
					count14+=numberofmeals;
					//asking again if user wants another meal
					printf("voulez vous ajouter un autre repas ?,(o ou O=OUI, N ou n=non)\n");
				scanf("%s",additionalmeal);
			
		}
		
			//calculating invoice subtotal  by multiplying the number of times each meal was chosen by its price and summing
				invoicesubtotal=(count3*20.49)+(count4*21.99)+(count8*24.49)+(count9*25.99)+(count13*28.49)+(count14*29.99);
			
			//requesting for payment method
			printf("entrez le mode de paiement: C=comptant, D=debit, R=credit\n");
			scanf(" %c",&paymentmethod);
			//making sure the entry is valid
			while((paymentmethod!='C')&&(paymentmethod!='D')&&(paymentmethod!='R')){
				printf("entree invalide, reesayez\n");
					scanf(" %c",&paymentmethod);
			}
			invoicenumber++;
			//invoice section
			//calculating tax amounts
			GST=(0.05*invoicesubtotal);
			QST=(0.09975*invoicesubtotal);
				//calculating total invoice
		invoicetotal=GST+QST+invoicesubtotal;
		
		//displaying invoice
	printf("    ---------------------------------------\n");
	printf("            Pizza Pour Tous\n");
	printf("            Keyce titi Garage\n");
	printf("            Tel: +237 620 239 480\n\n");
		printf("   -----------------------------------------\n");
	printf("                          Facture\n      ");
		//generating current time and date
	time(&now);
		current=localtime(&now);
		printf("\tdate: %02d/%02d/%d",
		current->tm_mday,
		current->tm_mon+1,
		current->tm_year+1900);
		printf("\theure: %02d:%02d:%02d\n",
		current->tm_hour,
		current->tm_min,
		current->tm_sec);
		//printing phone number and address
	printf("\tfacture No:%d\t",invoicenumber);
	printf("\ttelephone: %s\n",phonenumber);
	printf("\tAddresse du client: %s\n",address);
	//displaying the description, quantity and unit prices of each meal choosen
			printf("DESCRIPTION                                                        QUANTITE      PRIX UNIQUE\n");
			if(count3>0)
			printf("%2s               \t%d        \t%s\n",description[0],count3,unitprice[0]);
			if(count4>0)
			printf("%2s              %d        %s\n",description[1],count4,unitprice[1]);
			if(count8>0)
			printf("%2s               \t%d        \t%s\n",description[2],count8,unitprice[2]);
			if(count9>0)
			printf("%2s               %d        %s\n",description[3],count9,unitprice[3]);
			if(count13>0)
			printf("%2s                \t%d        \t%s\n",description[4],count13,unitprice[4]);
			if(count14>0)
			printf("%2s                \t%d        \t%s\n\n\n",description[5],count14,unitprice[5]);
			printf("\n");
	// printing payment method
			if(paymentmethod=='C')
			printf("Le mode de paiement: Comptant\n");
			else if(paymentmethod='D')
				printf("Le mode de paiement: Debit\n");
				else if(paymentmethod=='R')
				printf("Le mode de paiement: Credit\n");
				//printing invoice amounts
			printf("sous-total: $%.2f\n",invoicesubtotal);
				printf("montant TPS: $%.2f\n",GST);
					printf("montant TVQ: $%.2f\n",QST);
						printf("montant total: $%.2f\n\n",invoicetotal);
						printf("Merci pour votre  confiance\n");
						break;
						
	case 2:
				//calculating total number of meals sold
				totalmeals=count3+count4+count8+count9+count13+count14;
				//calculating total sales amount
				totalsaleamount=(count3*20.49)+(count4*21.99)+(count8*24.49)+(count9*25.99)+(count13*28.49)+(count14*29.99);
				//display section
				//generating current time and date

	printf(" -----------------------------------------\n");
	printf("              Pizza Pour Tous\n");
	printf("              Keyce titi Garage\n");
	printf("              Tel: +237 620 239 480\n\n");
		time(&now);
		current=localtime(&now);
		printf("\tdate: %02d/%02d/%d",
		current->tm_mday,
		current->tm_mon+1,
		current->tm_year+1900);
		printf("\theure: %02d:%02d:%02d\n",
		current->tm_hour,
		current->tm_min,
		current->tm_sec);
		printf("  -----------------------------------------\n");
	printf("nombres total de ventes: %d repas\n",totalmeals);
	printf("montant total de ventes: $%.2f\n",totalsaleamount);
	break;
	
	case 3:
		//displaying thank you message and ending
		printf("Merci et a la prochaine\n");
		break;
					
					default: 
					printf("entree invalide\n");	
}
}
while(menuoption!=3);
	return 0;
}
