#include<stdio.h>
#include<string.h>
FILE *ftr;
FILE *f1;
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
void BusCustomer_Information(struct BusCustomer *c)
 {//char busName[20];
// char a[]=".txt";
//     printf("Enter Bus name:");
//     scanf("%s",busName);
    
//    strcat(busName,a);
//    printf("%s",busName);
   
    printf("\nEnter Your Name:");
    scanf("%s",c->Bus_Customer_Name);
    printf("\nEnter your Adress:");
    scanf("%s",c->Bus_Customer_Address);
    printf("\nEnter you mobile phone number:");
    scanf("%s",c->Bus_Customer_Number);
    printf("\nEnter your Destanation:");
    scanf("%s",c->Bus_Customer_Destination);
    
}
void Ticket1(struct BusCustomer *c)
{
    char busName[20];
char a[]=".txt";
    printf("Enter Bus name:");
    scanf("%s",busName);
    
   strcat(busName,a);
   printf("%s",busName);
    f1=fopen(busName,"a");
    if (f1 == NULL) {
        printf("Error opening file.\n");
        return;
    }

   printf("Your Name:%s\n",c->Bus_Customer_Name);
   printf("Your address is:%s\n",c->Bus_Customer_Address);
   printf("Your phone number is:%s\n",c->Bus_Customer_Number);
   printf("Destinatio is:%s\n",c->Bus_Customer_Destination);
   printf("Seat number is:%d\n",c->customer);
   fwrite(c,sizeof(struct BusCustomer),1,f1);
   fclose(f1);



}
void CusomerCall(struct BusCustomer *c)
{
    // char name[20];
    // printf("Enter Customer name:");
    // scanf("%s",name);
    char Busname[20];
   
char a[]=".txt";
    printf("Enter Bus name:");
    scanf("%s",Busname);
    
   strcat(Busname,a);
   //printf("%s",Busname);
   
    f1=fopen(Busname,"r");
    while(fread(c,sizeof(struct BusCustomer ),1,f1)==1)
    {
        printf("Your Name:%s\n",c->Bus_Customer_Name);
   printf("Your address is:%s\n",c->Bus_Customer_Address);
   printf("Your phone number is:%s\n",c->Bus_Customer_Number);
   printf("Destinatio is:%s\n",c->Bus_Customer_Destination);
   printf("Seat number is:%d\n",c->customer);
    }
    
    fclose(f1);

}
void information(struct Bus *b)
{

    printf("Enter a Bus name:");
    scanf("%s",b->Bus_Name);
    printf("Enter a Bus No:");
    scanf("%d",&b->Bus_No);
    printf("Enter a seat no:");
    scanf("%d",&b->seat_no);
    printf("Enter a Bus Destanation");
    scanf("%s",b->Bus_Destenation);
    for(int i=0;i<b->seat_no;i++)
    {
        b->seat_Display[i]=i+1;
    }
    char a[]=".txt",d[30];
    strcpy(d,b->Bus_Name);
   strcat(d,a);
   f1=fopen(d,"a");
      fclose(f1);

        
}
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

void insearting(struct Bus *b,int index)
{
    for(int i=b->seat_no;i>index;i--)
    {
        b->seat_Display[i+1]=b->seat_Display[i];
        printf("%d",b->seat_Display[i+1]);
    }
    b->seat_Display[index]=0;
    b->seat_no++;
}
void Ticket(struct Bus *b,struct BusCustomer *c)
{
    int index;
    printf("Ente the seat no:");
    scanf("%d",&index);
    b->seat_Display[index-1]=0;
    c->customer=index;

}
int main()
{
    //jump:
    struct Bus b;
     struct BusCustomer c;
    int option;
    // ftr=fopen("Test.txt","w");
    // if(ftr!=NULL)
    // {
    //     printf("File Open Sucessful");
    // }
    // else
    // {
    //     printf("File Open Unsucessfull");
    // }
    printf("Enterf a option");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        information(&b);
    Display(&b);

        break;
        case 2:
        saving(&b);
         BusCustomer_Information(&c);
    Ticket(&b,&c);
         Ticket1(&c);
    Display(&b);
    break;
    case 4:
CusomerCall(&c);
        
    break;

        default:
        printf("Invalid input");
        break;
    }

//goto jump;
    
    return 0;
}