//CT-2020-019 - This is my simple program
//This is created for the juice bar
//This is a simple customer billing system

#include <stdio.h>

struct shop{
    char item[20];
    int price;
    int qty;
};

struct shop data[] = {
    "Avocado",80,100,
    "Mango",80,100,
    "Apple",150,80,
    "Chocolate Milkshake",100,100,
    "Coffee Milkshake",100,100
};

void shopData()
{

    printf("\nWelcome to our Juice Bar\n");
    printf("\nItem ---> Price ---> Quantity\n\n");

    for(int i = 0; i<5; i++ ){
        printf("|%s | %d |%d |\n\n",data[i].item,data[i].price,data[i].qty);
    }

}

void updateData()
{
    printf("\n\n----Updated shop data---\n\n");
    for(int i = 0; i<5; i++ ){
        printf("|%s | %d |%d |\n\n",data[i].item,data[i].price,data[i].qty);
    }
}

void customerData()
{
    extern struct shop data[5];
    char juice;
    int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, Q5 = 0;
    int B1 = 0, B2 = 0, B3 = 0, B4 = 0, B5 = 0;
    int total_bill = 0;

    printf("\n----Enter the data----\n");

    printf("\nName of the item: \n\nApple - A\nMango - M\nAvocado - V\nChocolate Milkshake - C\nCoffee Milkshake - F\n");

    char i;
    char loop;

    do{
        printf("\nItem : ");
        scanf(" %c",&juice);
        if(1){

            if('A' == juice){
                printf("\nNo of items: ");
                scanf("%d",&Q1);
                if(data[2].qty > Q1){
                    data[2].qty--;
                    B1 = 150 * Q1;
                }else{
                    printf("\nCannot do this!!\n");
                    printf("\nTry again\n");
                }
            }
            if('M' == juice){
                printf("\nNo of items: ");
                scanf("%d",&Q2);
                if(data[1].qty > Q2){
                    data[1].qty--;
                    B2 = 80 * Q2;
                }else{
                    printf("\nCannot do this!!\n");
                    printf("\nTry again\n");
                }
            }
            if('V' == juice){
                printf("\nNo of items: ");
                scanf("%d",&Q3);
                if(data[0].qty > Q3){
                    data[0].qty--;
                    B3 = 80 * Q3;
                }else{
                    printf("\nCannot do this!!\n");
                    printf("\nTry again\n");
                }
            }
            if('C' == juice){
                printf("\nNo of items: ");
                scanf("%d",&Q4);
                if(data[3].qty > Q4){
                    data[3].qty--;
                    B4 = 100 * Q4;
                }else{
                    printf("\nCannot do this!!\n");
                    printf("\nTry again\n");
                }
            }
            if('F' == juice){
                printf("\nNo of items: ");
                scanf("%d",&Q5);
                if(data[4].qty > Q5){
                    data[4].qty--;
                    B5 = 100 * Q5;
                }else{
                    printf("\nCannot do this!!\n");
                    printf("\nTry again\n");
                }
            }
        }
        printf("\nEnter for the continue --> Y or Stop --> S : ");
        scanf(" %c",&loop);
    }while( loop == 'Y' || loop == 'y');

    total_bill = B1+B2+B3+B4+B5;

    printf("\n\nTOTAL BILL (RS): %d\n",total_bill);
}

void main()
{
    shopData();
    customerData();
    updateData();
    printf("\n----Happy coding---\n");
    printf("\nCreated by: CT/2020/019\n");
}
