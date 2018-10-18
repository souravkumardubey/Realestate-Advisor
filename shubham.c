#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>

struct seller
 {
   long ph;
   char name[20],email[30],add[20];
 }list;

 char query[20],name[20];
 FILE *fp, *ft;
 int i,n,ch,l,found,choice,a=1;
 char location,property_type;
 int pass=123;

 int main(void)
{	
    system("shieldofficial.mp3");
char R[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 system("color Ce");
 printf("\t\t\t                  @     @  @@@@@ @     @@@@@   @@   @     @ @@@@@@\n");
 printf("\t\t\t                  @     @  @     @     @     @    @ @ @ @ @ @    \n");
 printf("\t\t\t                  @  @  @  @@@@  @     @     @    @ @  @  @ @@@@@ \n");
 printf("\t\t\t                  @ @ @ @  @     @     @     @    @ @     @ @    \n");
 printf("\t\t\t                  @     @  @@@@@ @@@@@ @@@@@   @@   @     @ @@@@@@\n\n\n");
 printf("\t\t\t                                  @@@@@@@    @@\n ");
 printf("\t\t\t                                     @     @    @\n");
 printf("\t\t\t                                     @     @    @\n");
 printf("\t\t\t                                     @     @    @\n");
 printf("\t\t\t                                     @       @@\n\n\n");
 printf("\t\t\t         @@@@  @@@@@   @@   @     @@@@@     @@@@@  @@@@@  @@@@@@@   @@   @@@@@@@ @@@@@@\n");
 printf("\t\t\t        @    @ @     @    @ @     @         @      @         @    @    @    @    @\n");
 printf("\t\t\t        @ @@   @@@@  @@@@@@ @     @@@@      @@@@     @ @     @    @@@@@@    @    @@@@@\n");
 printf("\t\t\t        @   @  @     @    @ @     @         @          @     @    @    @    @    @\n");
 printf("\t\t\t        @    @ @@@@@ @    @ @@@@@ @@@@@     @@@@@  @@@@      @    @    @    @    @@@@@@\n\n\n");
 printf("\t\t\t                      @@   @@@@  @    @ @@@@@@@ @@@@@    @@    @@@@\n");
 printf("\t\t\t                    @    @ @   @ @    @    @    @      @    @ @    @\n");
 printf("\t\t\t                    @@@@@@ @   @ @    @    @      @@   @    @ @ @@\n");
 printf("\t\t\t                    @    @ @   @ @    @    @        @  @    @ @   @\n");
 printf("\t\t\t                    @    @ @@@@    @@   @@@@@@@ @@@@     @@   @    @\n\n");       
        printf("\t\t\tPress any key to countinue.....\a"); 
        getch();
        goto login;

 {
  {
 login:
 	system("cls");
 printf("\t\t\t\tAdmin/User\n");
 printf("\t\t\t\t[1]Admin\n\t\t\t\t[2]User\n\t\t\t\t[0]Exit\n");
 printf("\t\t\t\tEntetr your choice");
 scanf("%d",&ch);
 switch(ch)
    {
    case 1:
	printf("\n\t\t\tEnter password");
	scanf("%d",&pass);

	if(pass==123)
	{

       goto main;

    }
    else
    {
    printf("\t\t\tPassword entered is incorrect pls try again\n");

    	goto login;
    	system("cls");
	}

    break;
    case 2:

	/* *******************search PROPERTY**********************  */
    system("cls");
    printf("\n\n\t\t..::SEARCH PROPERTY::..\n\n");
    printf("\t\tSearch for Location:");
    scanf("%s",&location);
    printf("\t\tPropert Type:\n");
    printf("\t\t[1]FLAT\n\t\t[2]PLOT\n");
    printf("\t\tEnter your choice:");
    scanf("%d",&ch);
    printf("\t\tChoose your Requriments:\n");
    printf("\t\t[1]2BHK\n\t\t[2]3BHK\n");
    printf("\t\tEnter your choice:");
    scanf("%d",&ch);
    printf("\t\tBUDGET:\n");
    printf("\t..::[1]1,00,000\t-\t20,00,000\n\t..::[2]21,00,000\t-\t40,00,000\n");
    printf("\t\tEnter your choice:");
    scanf("%d",&ch);
    if(ch==1)
{
	system("cls");
    printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

for(i=97;i<=122;i=i+1)
   {

    fp=fopen("contact1.dll","r");
    fflush(stdin);
    found=0;
    while(fread(&list,sizeof(list),1,fp)==1)
    {
    if(list.name[0]==i || list.name[0]==i-32)
    {
    printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,
    list.ph,list.add,list.email);
    found++;
    }
}
    if(found!=0)
{
    printf("=========================================================== [%c]-(%d)\n\n",i-32,found);
    system("cls");
    goto login;
}
fclose(fp);

}
}
    else
{
	system("cls");
    printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

for(i=97;i<=122;i=i+1)
{

   fp=fopen("contact2.dll","r");
   fflush(stdin);
   found=0;
   while(fread(&list,sizeof(list),1,fp)==1)
{
   if(list.name[0]==i || list.name[0]==i-32)
{
   printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,
   list.ph,list.add,list.email);
   found++;
}
}
if(found!=0)
{
    printf("=========================================================== [%c]-(%d)\n\n",i-32,found);
    system("cls");
    goto login;

}
fclose(fp);

}



}


{
main:
system("cls");    /* ************Main menu ***********************  */
printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Seller\n\t\t[2] List all Seller\n\t\t[3] Edit a Seller\n\t\t[4] Delete a Seller\n\t\t[5] Back to Login Form\n\t\t[0] Exit\n\t\t=================\n\t\t");
printf("Enter the choice:");
scanf("%d",&ch);

switch(ch)
{
case 0:
printf("\n\n\t\tAre you sure u want to exit?");
break;
/* *********************adding new Seller************  */
case 1:
printf("Choose Price range of your property\n");
printf("..::[1]\t1,00,000\t-\t20,00,000\n..::[2]\t21,00,000\t-\t40,00,000\n");
printf("Enter your choice:");
scanf("%d",&ch);
/* *********************adding new seller of according to price*********************** */
if(ch==1)
{

system("cls");
fp=fopen("contact1.dll","a");
for (;;)
{ fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
}
fclose(fp);
}
else
{
	system("cls");
fp=fopen("contact2.dll","a");
for (;;)
{ fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
}
fclose(fp);
}
break;

/* *********************list of Seller*************************  */
case 2:
printf("Enter the Seller range you want to Look\n");
printf("..::[1]\t1,00,000\t-\t20,00,000\n..::[2]\t21,00,000\t-\t40,00,000\n");
printf("Enter your choice:");
scanf("%d",&ch);
if(ch==1)
{

system("cls");
printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

for(i=97;i<=122;i=i+1)
{

fp=fopen("contact1.dll","r");
fflush(stdin);
found=0;
while(fread(&list,sizeof(list),1,fp)==1)
{
if(list.name[0]==i || list.name[0]==i-32)
{
printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,
list.ph,list.add,list.email);
found++;
}
}
if(found!=0)
{
    printf("=========================================================== [%c]-(%d)\n\n",i-32,found);
    getch();

}
fclose(fp);

}
}
else
{
	system("cls");
printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

for(i=97;i<=122;i=i+1)
{

fp=fopen("contact2.dll","r");
fflush(stdin);
found=0;
while(fread(&list,sizeof(list),1,fp)==1)
{
if(list.name[0]==i || list.name[0]==i-32)
{
printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,
list.ph,list.add,list.email);
found++;
}
}
if(found!=0)
{
    printf("=========================================================== [%c]-(%d)\n\n",i-32,found);
    getch();

}
fclose(fp);

}
}

break;
/* *********************edit seller info************************/
case 3:
	system("cls");
printf("Enter the Seller range you want to edit\n");
printf("..::[1]\t1,00,000\t-\t20,00,000\n..::[2]\t21,00,000\t-\t40,00,000\n");
printf("Enter your choice:");
scanf("%d",&ch);
if(ch==1)
{
system("cls");
fp=fopen("contact1.dll","r");
ft=fopen("temp1.dat","w");
fflush(stdin);
printf("..::Edit contact\n===============================\n\n\t..::Enter the name of contact to edit:");
scanf("%[^\n]",name);
while(fread(&list,sizeof(list),1,fp)==1)
{
if(stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
}
fflush(stdin);
printf("\n\n..::Editing '%s'\n\n",name);
printf("..::Name(Use identical):");
scanf("%[^\n]",&list.name);
fflush(stdin);
printf("..::Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("..::address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("..::email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.dll");
rename("temp.dat","contact.dll");
}
else
{
system("cls");
fp=fopen("contact2.dll","r");
ft=fopen("temp2.dat","w");
fflush(stdin);
printf("..::Edit contact\n===============================\n\n\t..::Enter the name of contact to edit:");
scanf("%[^\n]",name);
while(fread(&list,sizeof(list),1,fp)==1)
{
if(stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
}
fflush(stdin);
printf("\n\n..::Editing '%s'\n\n",name);
printf("..::Name(Use identical):");
scanf("%[^\n]",&list.name);
fflush(stdin);
printf("..::Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("..::address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("..::email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.dll");
rename("temp.dat","contact.dll");
}

break;


/* ********************delete seller**********************/
case 4:
printf("Enter the Seller range so that u can edit delet seller\n");
printf("..::[1]\t1,00,000\t-\t20,00,000\n..::[2]\t21,00,000\t-\t40,00,000\n");
printf("Enter your choice:");
scanf("%d",&ch);
if(ch==1)
{
system("cls");
fflush(stdin);
printf("\n\n\t..::DELETE A CONTACT\n\t==========================\n\t..::Enter the name of contact to delete:");
scanf("%[^\n]",&name);
fp=fopen("contact1.dll","r");
ft=fopen("temp1.dat","w");
while(fread(&list,sizeof(list),1,fp)!=0)
if (stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact1.dll");
rename("temp1.dat","contact1.dll");
break;

default:
printf("Invalid choice");
}
else
{
system("cls");
fflush(stdin);
printf("\n\n\t..::DELETE A CONTACT\n\t==========================\n\t..::Enter the name of contact to delete:");
scanf("%[^\n]",&name);
fp=fopen("contact2.dll","r");
ft=fopen("temp2.dat","w");
while(fread(&list,sizeof(list),1,fp)!=0)
if (stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact2.dll");
rename("temp2.dat","contact2.dll");
break;

}

case 5:
	system("cls");
goto login;

break;
}

}
system("cls");
printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");
scanf("%d",&ch);
switch (ch)
{
case 1:
goto main;


case 0:
break;


break;
}
case 0:
break;
break;

}
}

printf("\n\n\n..::Enter the Choice:\n\n\t[1] Back to login\t\t[0] Exit\n");
scanf("%d",&ch);
switch (ch)
{
case 1:
goto login;


case 0:


    srand(time(NULL));
    char color_string[50];

    while(1) {

        int Ra = rand() %16;
        int Rb = rand() %16;
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tThank You");      
        sprintf(color_string, "color %c%c", R[Ra], R[Rb]);
        system(color_string);  		

		system("cls"); 
};

break;
}
}
}
