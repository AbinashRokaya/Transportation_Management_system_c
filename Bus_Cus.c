#include <stdio.h>
#include<string.h>
FILE *ftr;
struct Bus
{
    int seat_no;
    int seat_Display[100];
    char Bus_Name[20];
    int Bus_No;
    char Bus_Destenation[20];

};
struct BusCustomer {
    char Bus_Customer_Name[20];
    char Bus_Customer_Address[20];
    char Bus_Customer_Number[10];
    char Bus_Customer_Destination[20];
    int customer;
};
void saving(struct Bus *b)
{
    char nam[20];
    printf("Enter a destanation:");
    scanf("%s",nam);
    ftr=fopen("Test.txt","r");
        fseek(ftr,0,SEEK_SET);
    while(( fread(b,sizeof(struct Bus),1,ftr))==1)
    {
        if(strcmp(b->Bus_Destenation,nam)==0)
        {
    
     for(int i=0;i<1;i++)
     {
    printf("\nBus name:%s:",b->Bus_Name);
    printf("\nBus number:%d",b->Bus_No);
    printf("\nBus destanation:%s",b->Bus_Destenation);
    printf("\nAvaiable is no are:\n");
    for (int i = 0; i < b->seat_no; i++) {
        printf("%d\t", b->seat_Display[i]);
        if((i+1)%2==0)
        {
            printf("\t\t");
        }
        if ((i + 1) % 4 == 0) {
            printf("\n");
        }
        
    }
    printf("\n");
    }
    }
    }
        fclose(ftr);

}


void Bus_information(struct Bus *b,struct BusCustomer *c) {
    
    
   char nam[20];
    printf("Enter a Your destanation:");
    scanf("%s",nam);
    ftr=fopen("Test.txt","r");
        fseek(ftr,0,SEEK_SET);
    while(( fread(b,sizeof(struct Bus),1,ftr))==1)
    {
        if(strcmp(b->Bus_Destenation,nam)==0)
        {
    
     for(int i=0;i<1;i++)
     {
    printf("\nBus name:%s:",b->Bus_Name);
    printf("\nBus number:%d",b->Bus_No);
    printf("\nBus destanation:%s",b->Bus_Destenation);
    printf("\nAvaiable is no are:\n");
    for (int i = 0; i < b->seat_no; i++) {
        printf("%d\t", b->seat_Display[i]);
        if((i+1)%2==0)
        {
            printf("\t\t");
        }
        if ((i + 1) % 4 == 0) {
            printf("\n");
        }
        
    }
    printf("\n");
    }
    }
    }

    printf("Here is the list bus of your Desnation Choose Bus name\n");
     char na[20];
    printf("Enter a Your Bus name:");
    scanf("%s",na);
        fseek(ftr,0,SEEK_SET);
    while(( fread(b,sizeof(struct Bus),1,ftr))==1)
    {
        if(strcmp(b->Bus_Name,na)==0)
        {
    
     for(int i=0;i<1;i++)
     {
    printf("\nBus name:%s:",b->Bus_Name);
    printf("\nBus number:%d",b->Bus_No);
    printf("\nBus destanation:%s",b->Bus_Destenation);
    printf("\nAvaiable is no are:\n");
    for (int i = 0; i < b->seat_no; i++) {
        printf("%d\t", b->seat_Display[i]);
        if((i+1)%2==0)
        {
            printf("\t\t");
        }
        if ((i + 1) % 4 == 0) {
            printf("\n");
        }
        
    }
    printf("\n");
    }
    }
    }
    printf("\nEnter Your Name:");
    scanf("%s",c->Bus_Customer_Name);
    printf("\nEnter your Adress:");
    scanf("%s",c->Bus_Customer_Address);
    printf("\nEnter you mobile phone number:");
    scanf("%s",c->Bus_Customer_Number);
     int index;
    printf("Ente the seat no:");
    scanf("%d",&index);
    c->customer=index;
    b->seat_Display[index-1]=0;
    char a[]=".txt";
    //strcpy(na,b->Bus_Name);
   strcat(na,a);
   ftr=fopen(na,"a");
   printf("Your Name:%s\n",c->Bus_Customer_Name);
   printf("Your address is:%s",c->Bus_Customer_Address);
   printf("Your phone number is:%s",c->Bus_Customer_Number);
   printf("Destinatio is:%s",b->Bus_Destenation);
   printf("Seat number is:%d",c->customer);
   fwrite(c,sizeof(struct BusCustomer),1,ftr);


        fclose(ftr);

}
void Display(struct Bus *b) {
     ftr=fopen("Test.txt","a");
    printf("\nBus name:%s:",b->Bus_Name);
    printf("\nBus number:%d",b->Bus_No);
    printf("\nBus destanation:%s",b->Bus_Destenation);
    printf("\nAvaiable is no are:\n");
    for (int i = 0; i < b->seat_no; i++) {
        printf("%d\t", b->seat_Display[i]);
        if((i+1)%2==0)
        {
            printf("\t\t");
        }
        if ((i + 1) % 4 == 0) {
            printf("\n");
        }
        
    }
    printf("\n");
     fwrite(b,sizeof(struct Bus),1,ftr);
        fclose(ftr);
}
void BusCustomer_Ticket(struct BusCustomer *c,struct Bus *b)
{
     char a[]=".txt",d[30];
    strcpy(d,b->Bus_Name);
   strcat(d,a);
   ftr=fopen(d,"a");

}

void BusCustomer_Name(struct Bus *b)
{
    char nam[20];
    printf("Enter a Your Bus name:");
    scanf("%s",nam);
    ftr=fopen("Test.txt","r");
        fseek(ftr,0,SEEK_SET);
    while(( fread(b,sizeof(struct Bus),1,ftr))==1)
    {
        if(strcmp(b->Bus_Name,nam)==0)
        {
    
     for(int i=0;i<1;i++)
     {
    printf("\nBus name:%s:",b->Bus_Name);
    printf("\nBus number:%d",b->Bus_No);
    printf("\nBus destanation:%s",b->Bus_Destenation);
    printf("\nAvaiable is no are:\n");
    for (int i = 0; i < b->seat_no; i++) {
        printf("%d\t", b->seat_Display[i]);
        if((i+1)%2==0)
        {
            printf("\t\t");
        }
        if ((i + 1) % 4 == 0) {
            printf("\n");
        }
        
    }
    printf("\n");
    }
    }
    }

        fclose(ftr);

}
void Ticket(struct Bus *b,struct BusCustomer *c)
{
    int index;
    printf("Ente the seat no:");
    scanf("%d",&index);
    c->customer=index;
    b->seat_Display[index-1]=0;
    char a[]=".txt",d[30];
    strcpy(d,b->Bus_Name);
   strcat(d,a);
   ftr=fopen(d,"a");
   printf("Your Name:%s\n",c->Bus_Customer_Name);
   printf("Your address is:%s",c->Bus_Customer_Address);
   printf("Your phone number is:%s",c->Bus_Customer_Number);
   printf("Destinatio is:%s",b->Bus_Destenation);
   printf("Seat number is:%d",c->customer);
   fwrite(c,sizeof(struct BusCustomer),1,ftr);
   fclose(ftr);



}

void BusCustomer_Information(struct BusCustomer *c)
{
    printf("\nEnter Your Name:");
    scanf("%s",c->Bus_Customer_Name);
    printf("\nEnter your Adress:");
    scanf("%s",c->Bus_Customer_Address);
    printf("\nEnter you mobile phone number:");
    scanf("%s",c->Bus_Customer_Number);
}


int main() {
    struct Bus b;
    struct BusCustomer c;

    int option;
    printf("Enter an option: ");
    scanf("%d", &option);
    
    switch (option) {
        case 1:
        saving(&b);
            // Bus_information(&b,&c);
            
            //BusCustomer_Information(&c);
            //Ticket( &b,&c);
            break;
        default:
            printf("Invalid input");
            break;
    }

    fclose(ftr); // Close the file
    return 0;
}