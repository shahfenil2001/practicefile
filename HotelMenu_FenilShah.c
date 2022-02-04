/*
			     Name : Fenil Shah
			     Objective : Hotel Menu
			     Date : 8 January 2022
*/

#include<stdio.h>
#include<conio.h>
#define PRICE 50
void main()
{
	int choice,bread,naan,plainNaan,IndianBread,paratha,roti,poori,indianDishes,gujarati,paneer,chicken,rajasthani,southIndian,idli,dosa,uttapam,rice,chinese,soup,noodles,chineseRice,gravy,beverages,softDrinks,tea,coffee,juice;
	mainMenu:
	textbackground(BLUE);
	clrscr();

	printf("\n1------Indian Breads");
	printf("\n2------Indian Dishes");
	printf("\n3------South Indian");
	printf("\n4------Chinese");
	printf("\n5------Beverages");
	printf("\n6------Exit");

printf("\nEnter Your Choice	:- ");
scanf("%d",&choice);

switch(choice)
{
	case 1 : printf("\n You Have Selected Indian Breads");

			printf("\n1-----Naan");
			printf("\n2-----Paratha");
			printf("\n3-----Roti");
			printf("\n4-----Poori");
			printf("\n5-----Goto Main Menu");

			printf("\nEnter Your Choice :- ");
			scanf("%d",&bread);

			switch(bread)

			{
				case 1 : printf("\n1 You have selected Naan under Indian Breads");

						printf("\n1-----Plain Naan");
						printf("\n2-----Butter Naan");
						printf("\n3-----Garlic Naan");
						printf("\n4-----Goto Main Menu");

						printf("\nEnter Your Choice under Naan");
						scanf("%d",&naan);

						switch(naan)
						{
							case 1 : printf("\n You have selected Plain Naan");
								 printf("\n Enter The Number of Plain Naan You want : ");
								 scanf("%d",&naan);

								 IndianBread=naan*PRICE;

								 printf("Total Price Of Plain Naan is %d",IndianBread);
								 getch();
								 break;
							case 2 : printf("\n You have selected Butter Naan");
								 printf("\n Enter The Number of Butter Naan You want : ");
								 scanf("%d",&naan);

								 IndianBread=naan*PRICE;

								 printf("Total Price Of Butter Naan is %d ",IndianBread);
								 getch();
								 break;
							case 3 : printf("\n You have selected Garlic Naan");
								 printf("\n Enter The Number of Garlic Naan You want : ");
								 scanf("%d",&naan);

								 IndianBread=naan*PRICE;

								 printf("Total Price Of Garlic Naan is %d",IndianBread);
								 getch();
								 break;
							case 4  : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(naan)




				case 2 : printf("\n2 You have selected Paratha under Indian Breads");

						printf("\n1-----Aloo Paratha");
						printf("\n2-----Paneer Paratha");
						printf("\n3-----Gobi Paratha");
						printf("\n4-----Laccha Paratha");
						printf("\n5-----Cheese Paratha");
						printf("\n6-----Goto Main Menu");
						printf("\nEnter Your Choice under Paratha");
						scanf("%d",&paratha);

						switch(paratha)
						{
							case 1 : printf("\n You have Aloo Paratha");
								 printf("\n Enter The Number of Aloo Paratha You want : ");
								 scanf("%d",&paratha);

								 IndianBread=paratha*PRICE;

								 printf("Total Price Of Aloo Paratha is %d",IndianBread);
								 getch();
								 break;
							case 2 : printf("\n You have selected Paneer Paratha");
								 printf("\n Enter The Number of Paneer Paratha You want : ");
								 scanf("%d",&paratha);

								 IndianBread=paratha*PRICE;

								 printf("Total Price Of Paneer Paratha is %d ",IndianBread);
								 getch();
								 break;
							case 3 : printf("\n You have selected Gobi Paratha");
								 printf("\n Enter The Number of Gobi Paratha You want : ");
								 scanf("%d",&paratha);

								 IndianBread=paratha*PRICE;

								 printf("Total Price Of Gobi Paratha is %d",IndianBread);
								 getch();
								 break;
							case 4 : printf("\n You have selected Laccha Paratha");
								 printf("\n Enter The Number of Laccha Paratha You want : ");
								 scanf("%d",&paratha);

								 IndianBread=paratha*PRICE;

								 printf("Total Price Of Laccha Paratha is %d",IndianBread);
								 getch();
								 break;
							case 5 : printf("\n You have selected Cheese Paratha");
								 printf("\n Enter The Number of Cheese Paratha You want : ");
								 scanf("%d",&paratha);

								 IndianBread=paratha*PRICE;

								 printf("Total Price Of Cheese Paratha is %d",IndianBread);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(paratha)
					    case 3 : printf("\n3 You have selected Roti under Indian Breads");

						printf("\n1-----Kashmiri Roti");
						printf("\n2-----Bajari Roti");
						printf("\n3-----Roomali Roti");
						printf("\n4-----Makki ki Roti");
						printf("\n5-----Tanddori Roti");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Roti");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1 : printf("\n You have selected Kashmiri Roti");
								 printf("\n Enter The Number of Kashmiri Roti You want : ");
								 scanf("%d",&roti);

								 IndianBread=roti*PRICE;

								 printf("Total Price Of Kashmiri Roti is %d",IndianBread);
								 getch();
								 break;
							case 2 : printf("\n You have selected Bajari Roti");
								 printf("\n Enter The Number of Bajari Roti You want : ");
								 scanf("%d",&roti);

								 IndianBread=roti*PRICE;

								 printf("Total Price Of Bajari Roti is %d ",IndianBread);
								 getch();
								 break;
							case 3 : printf("\n You have selected Roomali Roti");
								 printf("\n Enter The Number of Roomali Roti You want : ");
								 scanf("%d",&roti);

								 IndianBread=roti*PRICE;

								 printf("Total Price Of Roomali Roti is %d",IndianBread);
								 getch();
								 break;
							case 4 : printf("\n You have selected Makki ki roti");
								 printf("\n Enter The Number of Makki ki Roti You want : ");
								 scanf("%d",&roti);

								 IndianBread=roti*PRICE;

								 printf("Total Price Of makki ki roti is %d",IndianBread);
								 getch();
								 break;
							case 5 : printf("\n You have selected Tandoori Roti");
								 printf("\n Enter The Number of Tandoori Roti You want : ");
								 scanf("%d",&roti);

								 IndianBread=roti*PRICE;

								 printf("Total Price Of Tandoori Roti is %d",IndianBread);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(roti)
					    case 4 : printf("\n4 You have selected Poori under Indian Breads");

						printf("\n1-----Methi Bajra Poori");
						printf("\n2-----Crispy Masala Poori");
						printf("\n3-----Beetroot Chana dal Poori");
						printf("\n4-----Bhedawi Poori");
						printf("\n5-----Besan ki poori");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under poori");
						scanf("%d",&poori);

						switch(poori)
						{
							case 1 : printf("\n You have selected Methi Bajra Poori");
								 printf("\n Enter The Number of Methi bajra poori You want : ");
								 scanf("%d",&poori);

								 IndianBread=poori*PRICE;

								 printf("Total Price Of Methi Bajra poori is %d",IndianBread);
								 getch();
								 break;
							case 2 : printf("\n You have selected Crispy Masala Poori");
								 printf("\n Enter The Number of Crispy Masala Poori You want : ");
								 scanf("%d",&poori);

								 IndianBread=poori*PRICE;

								 printf("Total Price Of Crispy Masala Poori is %d ",IndianBread);
								 getch();
								 break;
							case 3 : printf("\n You have selected Beetroot Chana dal poori");
								 printf("\n Enter The Number of Beetroot chana dal poori You want : ");
								 scanf("%d",&poori);

								 IndianBread=poori*PRICE;

								 printf("Total Price Of Beetroot chana dal poori is %d",IndianBread);
								 getch();
								 break;
							case 4 : printf("\n You have selected Bhedawi poori");
								 printf("\n Enter The Number of Bhejawi poori You want : ");
								 scanf("%d",&poori);

								 IndianBread=poori*PRICE;

								 printf("Total Price of Bhejawi poori is %d",IndianBread);
								 getch();
								 break;
							case 5 : printf("\n You have selected Besan ki poori");
								 printf("\n Enter The Number of Besan ki poori You want : ");
								 scanf("%d",&poori);

								 IndianBread=poori*PRICE;

								 printf("Total Price Of Besan ki poori is %d",IndianBread);
								 getch();
								 break;
							case 6 : goto mainMenu;
					break;
							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(poori)
				   case 5 : goto mainMenu;
					break;


			}	//end of switch(bread)
		clrscr();
		 break;
	case 2 : printf("\n You Have Selected Indian Dishes");

			printf("\n1-----Gujarati");
			printf("\n2-----Paneer");
			printf("\n3-----Chicken");
			printf("\n4-----Rajasthani");
			printf("\n5-----Goto Main Menu");

			printf("\nEnter Your Choice :- ");
			scanf("%d",&indianDishes);

			switch(indianDishes)

			{
				case 1 : printf("\n1 You have selected Gujarati under Indian Dishes");

						printf("\n1-----Mix Veg");
						printf("\n2-----Aloo Subji");
						printf("\n3-----Bhindi Masala");
						printf("\n4-----Mutter Gobi");
						printf("\n5-----Goto Main Menu");

						printf("\nEnter Your Choice under Gujarati dishes");
						scanf("%d",&gujarati);

						switch(gujarati)
						{
							case 1 : printf("\n You have selected Mix Veg");
								 printf("\n Enter The Number of Mix Veg You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Mix Veg is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Aloo Sabji");
								 printf("\n Enter The Number of Aloo Sabji You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Aloo Sabji is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Bhindi Masala");
								 printf("\n Enter The Number of Bhindi Masala You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Bhindi Masala is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Mutter gobi");
								 printf("\n Enter The Number of Mutter Gobi You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Mutter Gobi is %d",indianDishes);
								 getch();
								 break;

							case 5  : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(gujarati)




				case 2 : printf("\n2 You have selected Paneer under Indian Dishes");

						printf("\n1-----Paneer Tikka Masala");
						printf("\n2-----Paneer Handi");
						printf("\n3-----Palak Panner");
						printf("\n4-----Paneer kadhai");
						printf("\n5-----Paneer Bhurji");
						printf("\n6-----Goto Main Menu");
						printf("\nEnter Your Choice under Paratha");
						scanf("%d",&paneer);

						switch(paneer)
						{
							case 1 : printf("\n You have selected Panner Tikka Masala");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Paneer Tikka Masala is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Paneer Handi");
								 printf("\n Enter The Number of dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Paneer Handi is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Palak Paneer");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Palak Paneer is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Paneer Kadhai");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Paneer Kadhai is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Paneer Bhurji");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Paneer Bhurji is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(paneer)
					    case 3 : printf("\n3 You have selected Chicken under Indian Dish");

						printf("\n1-----Chicken Handi");
						printf("\n2-----Chicken Masala");
						printf("\n3-----Chicken Kadhai");
						printf("\n4-----Chicken Kadhai");
						printf("\n5-----Butter Chicken");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Roti");
						scanf("%d",&chicken);

						switch(chicken)
						{
							case 1 : printf("\n You have selected Chicken Handi");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Chicken Handi is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Chicken Masala");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Chicken Masala is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Chicken Kadhai");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Chicken Kadhai is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Chicken Mughlai");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Chicken Mughlai is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Butter Chicken");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Butter Chicken is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(chicken)
					    case 4 : printf("\n4 You have selected Rajasthani under Indian Breads");

						printf("\n1-----Dal Baati");
						printf("\n2-----Gatte ki sabzi");
						printf("\n3-----Sev Tamatar");
						printf("\n4-----Haldi Matar");
						printf("\n5-----Churma");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Rajasthani");
						scanf("%d",&rajasthani);

						switch(rajasthani)
						{
							case 1 : printf("\n You have selected Daal Baati");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Daal Baati is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Gatte ki Sabzi");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Gatte ki Sabzi is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Sev Tamatar");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Sev Tamatar is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Haldi Matar");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price of Haldi Matar is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Churma");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Churma is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;
					break;
							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(rajasthani)
				   case 5 : goto mainMenu;
					break;


			}	//end of switch(indianBread)
		 clrscr();
		 break;
	case 3 : printf("\n You Have Selected South Indian");
			printf("\n1-----Idli");
			printf("\n2-----Dosa");
			printf("\n3-----Uttapam");
			printf("\n4-----Rice");
			printf("\n5-----Goto Main Menu");

			printf("\nEnter Your Choice :- ");
			scanf("%d",&southIndian);

			switch(southIndian)

			{
				case 1 : printf("\n1 You have selected Idli under South Indian Dishes");

						printf("\n1-----Simple Idli");
						printf("\n2-----Rava Idli");
						printf("\n3-----Kanchipuram Idli");
						printf("\n4-----Idli 65");
						printf("\n5-----Goto Main Menu");

						printf("\nEnter Your Choice under Idli");
						scanf("%d",&idli);

						switch(idli)
						{
							case 1 : printf("\n You have selected Simple Idli");
								 printf("\n Enter The Number of Simple Idli You want : ");
								 scanf("%d",&idli);

								 southIndian=idli*PRICE;

								 printf("Total Price Of idli is %d",southIndian);
								 getch();
								 break;
							case 2 : printf("\n You have selected Rava Idli");
								 printf("\n Enter The Number of Rava Idli You want : ");
								 scanf("%d",&idli);

								 southIndian=idli*PRICE;

								 printf("Total Price Of Rava idli is %d ",southIndian);
								 getch();
								 break;
							case 3 : printf("\n You have selected Kanchipuram Idli");
								 printf("\n Enter The Number of Kanchipuram Idli You want : ");
								 scanf("%d",&idli);

								 southIndian=idli*PRICE;

								 printf("Total Price Of Kanchipuram idli is %d",southIndian);
								 getch();
								 break;
							case 4 : printf("\n You have selected Idli65");
								 printf("\n Enter The Number of Idli65 You want : ");
								 scanf("%d",&dosa);

								 southIndian=dosa*PRICE;

								 printf("Total Price Of Idli65 is %d",southIndian);
								 getch();
								 break;

							case 5  : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(idli)




				case 2 : printf("\n2 You have selected Dosa under South Indian Dishes");

						printf("\n1-----Plain Dosa");
						printf("\n2-----Mysore Masala Dosa");
						printf("\n3-----Butter Masala Dosa");
						printf("\n4-----Double Masala Dosa");
						printf("\n5-----Family Dosa");
						printf("\n6-----Goto Main Menu");
						printf("\nEnter Your Choice under Dosa");
						scanf("%d",&dosa);

						switch(dosa)
						{
							case 1 : printf("\n You have selected Plain Dosa");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",dosa);

								 southIndian=dosa*PRICE;

								 printf("Total Price Of Plain Dosa is %d",southIndian);
								 getch();
								 break;
							case 2 : printf("\n You have selected Mysore Masala Dosa");
								 printf("\n Enter The Number of dish You want : ");
								 scanf("%d",&dosa);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Mysore Masala Dosa is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Butter Masala Dosa");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Butter Masala Dosa is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Doubel Masala Dosa");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Double Masala Dosa is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Family Dosa");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Family Dosa is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(dosa)
					    case 3 : printf("\n3 You have selected Uttapam under South Indian Dish");

						printf("\n1-----Plain Uttapam");
						printf("\n2-----Onion Uttapam");
						printf("\n3-----Tomato Uttapam");
						printf("\n4-----Pudina Paneer Uttapam");
						printf("\n5-----Coconut Uttapam");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Uttapam");
						scanf("%d",&uttapam);

						switch(uttapam)
						{
							case 1 : printf("\n You have selected Plain Uttapam");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Plain Uttapam is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Onion Uttapam");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Onion Uttapam is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected  Tomato Uttapam");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Tomato Uttapam is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Pudina Paneer Uttapam");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Pudina Paneer Uttapam is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Coconut Uttapam");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Butter Coconut Uttapam is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(uttapam)
					    case 4 : printf("\n4 You have selected Rice under South Indian Breads");

						printf("\n1-----Lemon Rice");
						printf("\n2-----Masala Rice");
						printf("\n3-----Tomato Rice");
						printf("\n4-----Coconut Rice");
						printf("\n5-----Sambhar Rice");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Rice");
						scanf("%d",&rice);

						switch(rice)
						{
							case 1 : printf("\n You have selected Lemon Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Lemon Rice is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Masala Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Masala Rice is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Tomato Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Tomato Rice is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Coconut Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price of Coconut Rice is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Sambhar Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Sambhar Rice is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;
					break;
							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(rice)
				   case 5 : goto mainMenu;
					break;


			}	//end of switch(southindian)
		 clrscr();
		 break;
	case 4 : printf("\n You Have Selected Chinese");
			printf("\n1-----Soup");
			printf("\n2-----Noodles");
			printf("\n3-----Veg.Gravy or Dry");
			printf("\n4-----Rice");
			printf("\n5-----Goto Main Menu");

			printf("\nEnter Your Choice :- ");
			scanf("%d",&chinese);

			switch(chinese)

			{
				case 1 : printf("\n1 You have selected Soup under Chinese");

						printf("\n1-----Tomato Soup");
						printf("\n2-----Manchow Soup");
						printf("\n3-----Hot & Sour Soup");
						printf("\n4-----Sweet Corn Soup");
						printf("\n5-----Goto Main Menu");

						printf("\nEnter Your Choice under Soup");
						scanf("%d",&soup);

						switch(soup)
						{
							case 1 : printf("\n You have selected Tomato Soup");
								 printf("\n Enter The Number of Tomato Soup You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Tomato Soup is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Manchow Soup");
								 printf("\n Enter The Number of Manchow SOup You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Manchow Soup is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Hot and Sour Soup");
								 printf("\n Enter The Number of Hot and Sour Soup You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Hot and Sour Soup is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Sweet Corn Soup");
								 printf("\n Enter The Number of Sweet Corn Soup You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Sweet Corn Soup is %d",indianDishes);
								 getch();
								 break;

							case 5  : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(soup)




				case 2 : printf("\n2 You have selected Noodles under Chinese");

						printf("\n1-----Vegetarian Hakka Noodles");
						printf("\n2-----Veg. Sezwan Noodles");
						printf("\n3-----Veg. Singapore Noodles");
						printf("\n4-----Veg. Chow mein");
						printf("\n5-----Veg. triple Sezwan Noodles");
						printf("\n6-----Goto Main Menu");
						printf("\nEnter Your Choice under Noodles");
						scanf("%d",&noodles);

						switch(noodles)
						{
							case 1 : printf("\n You have selected Veg Hakka Noodles");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Veg Hakka Noodles is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Veg. Sezwan Noodles");
								 printf("\n Enter The Number of dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Veg. Sezwan Noodles is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Veg.Singapore Noodles");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Veg. Singapore Noodles is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Veg. Chow Mein");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Veg. Chow Mein %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Veg. Triple Sezwan Noodles");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Veg.Triple Sezwan Noodles is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(noodles)
					    case 3 : printf("\n3 You have selected Veg. Gravy or Dry under South Indian Dish");

						printf("\n1-----Veg. Chilly");
						printf("\n2-----Veg. Manchurian");
						printf("\n3-----Veg. Veg. Sweat Garlic Souce");
						printf("\n4-----Veg. chow chow");
						printf("\n5-----Veg. Hong Kong");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Veg. gravy or dry");
						scanf("%d",&gravy);

						switch(gravy)
						{
							case 1 : printf("\n You have selected Veg. Chilly");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Veg. Chilly is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Veg. Manchurian");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Veg.Manchurian is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Veg. Sweat Garlic Souce");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Veg. Sweat Garlic Souce is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Veg. Chow Chow");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Veg. Chow Chow is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Veg. Hong Kong");
								 printf("\n Enter The Number of Dish You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Veg. Hong Kong is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(gravy)
					    case 4 : printf("\n4 You have selected Rice under Chinese");

						printf("\n1-----Paneer Pulav");
						printf("\n2-----Veg. fried Rice");
						printf("\n3-----Veg. Sezwan Rice");
						printf("\n4-----Veg. Manchurian fried Rice");
						printf("\n5-----Paneer Biryani");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Rice");
						scanf("%d",&chineseRice);

						switch(chineseRice)
						{
							case 1 : printf("\n You have selected Paneer Pulav");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Paneer Pulav is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Veg. Fried Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Veg. Fried Rice is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Veg. Sezwan Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Veg. Sezwan Rice is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Veg. Manchurian Fried Rice");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price of Veg.Manchurian Fried Rice is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Paneer Biryani");
								 printf("\n Enter The Number of Dishes You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Paneer Biryani is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;
					break;
							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(chineserice)
				   case 5 : goto mainMenu;
					break;


			}	//end of switch(chinese)
		 clrscr();
		 break;
	case 5 : printf("\n You Have Selected Beverages");
			printf("\n1-----SoftDrinks");
			printf("\n2-----Tea");
			printf("\n3-----Coffee");
			printf("\n4-----Juice");
			printf("\n5-----Goto Main Menu");

			printf("\nEnter Your Choice :- ");
			scanf("%d",&beverages);

			switch(beverages)

			{
				case 1 : printf("\n1 You have selected Soft Drinks under Beverages");

						printf("\n1-----Sprite");
						printf("\n2-----Coca-Cola");
						printf("\n3-----Fanta");
						printf("\n4-----Maaza");
						printf("\n5-----ThumsUp");

						printf("\nEnter Your Choice under SoftDrinks");
						scanf("%d",&softDrinks);

						switch(softDrinks)
						{
							case 1 : printf("\n You have selected Sprite");
								 printf("\n Enter The Number of sprite You want : ");
								 scanf("%d",&softDrinks);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Sprice is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Coca-Cola");
								 printf("\n Enter The Number of Coca-Cola You want : ");
								 scanf("%d",&softDrinks);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Coca-Cola is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Fanta Masala");
								 printf("\n Enter The Number of Fanta You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Fanta is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Maaza");
								 printf("\n Enter The Number of Maaza You want : ");
								 scanf("%d",&gujarati);

								 indianDishes=gujarati*PRICE;

								 printf("Total Price Of Maaza is %d",indianDishes);
								 getch();
								 break;

							case 5  : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(softDrinks)




				case 2 : printf("\n2 You have selected Tea under Beverages");

						printf("\n1-----Amdavadi Tea");
						printf("\n2-----Gingermasala Tea");
						printf("\n3-----Orange Tea");
						printf("\n4-----Lemon Tea");
						printf("\n5-----Green Tea");
						printf("\n6-----Goto Main Menu");
						printf("\nEnter Your Choice under Tea");
						scanf("%d",&tea);

						switch(tea)
						{
							case 1 : printf("\n You have selected Amdavadi Tea");
								 printf("\n Enter The Number of Amdavadi Tea You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Amdavadi Tea is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected GingerMasala Tea");
								 printf("\n Enter The Number of GingerMasala Tea You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of GingerMasala Tea is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Orange Tea");
								 printf("\n Enter The Number of Orange Tea You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Orange Tea is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Lemon Tea");
								 printf("\n Enter The Number of Lemon Tea You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Lemon Tea is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Green Tea ");
								 printf("\n Enter The Number of Green Tea You want : ");
								 scanf("%d",&paneer);

								 indianDishes=paneer*PRICE;

								 printf("Total Price Of Green Tea is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(tea)
					    case 3 : printf("\n3 You have selected Coffee under Beverages");

						printf("\n1-----Black Coffee");
						printf("\n2-----Cold Coffee");
						printf("\n3-----Cappuccino Coffee");
						printf("\n4-----American Coffee");
						printf("\n5-----Mocha Coffee");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Coffee");
						scanf("%d",&coffee);

						switch(coffee)
						{
							case 1 : printf("\n You have selected Black Coffee");
								 printf("\n Enter The Number of Black Coffee You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Black Coffee is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Cold Coffee");
								 printf("\n Enter The Number of Cold Coffee You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Cold Coffee is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have selected Cappuccino Coffee");
								 printf("\n Enter The Number of Cappuccino Coffee You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Cappuccino Coffee is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected America Coffee");
								 printf("\n Enter The Number of American Coffee You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of American Coffee is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Mocha Coffee");
								 printf("\n Enter The Number of Mocha Coffee You want : ");
								 scanf("%d",&chicken);

								 indianDishes=chicken*PRICE;

								 printf("Total Price Of Mocha Coffee is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;

							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(coffee)
					    case 4 : printf("\n4 You have selected Juice under Beverages");

						printf("\n1-----Apple Juice");
						printf("\n2-----Kiwi Juice");
						printf("\n3-----Ananas Da Panna");
						printf("\n4-----Mango Juice");
						printf("\n5-----Orange Juice");
						printf("\n6-----Goto Main Menu");

						printf("\nEnter Your Choice under Juice");
						scanf("%d",&juice);

						switch(juice)
						{
							case 1 : printf("\n You have selected Apple Juice");
								 printf("\n Enter The Number of Apple Juice You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Apple Juice is %d",indianDishes);
								 getch();
								 break;
							case 2 : printf("\n You have selected Kiwi Juice");
								 printf("\n Enter The Number of Kiwi Juice You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Kiwi Juice is %d ",indianDishes);
								 getch();
								 break;
							case 3 : printf("\n You have Ananas Juice");
								 printf("\n Enter The Number of Ananas juice You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Ananas juice is %d",indianDishes);
								 getch();
								 break;
							case 4 : printf("\n You have selected Mango Juice");
								 printf("\n Enter The Number of Mango Juice You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price of Mango Juice is %d",indianDishes);
								 getch();
								 break;
							case 5 : printf("\n You have selected Orange Juice");
								 printf("\n Enter The Number of Orange Juice You want : ");
								 scanf("%d",&rajasthani);

								 indianDishes=rajasthani*PRICE;

								 printf("Total Price Of Orange Juice is %d",indianDishes);
								 getch();
								 break;
							case 6 : goto mainMenu;
					break;
							printf("\nEnter Your Choice");
							getch();

							clrscr();
						}	//End of switch(juice)
				   case 5 : goto mainMenu;
					break;


			}	//end of switch(beverages)
		 clrscr();

		 break;
	case 6 : exit(0);
	default: printf(" This is not on the menu. \n");
		 break;




}                //End of switch(choice)
getch();


}		// end of void main
