#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct logindata{
	char first_name[50];
    char last_name[50];
	char username[50];
	char password[50];
};

login_page(){
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb        =============================          \xdb\n");
	printf("\t\t\xdb       VEHICLE PARKING MANAGEMENT SYSTEM       \xdb\n");
	printf("\t\t\xdb                     ---                       \xdb\n");
	printf("\t\t\xdb   CHAITANYA BHARATI INSTITUTE OF TECHNOLOGY   \xdb\n");
	printf("\t\t\xdb        =============================          \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb          Program Written By Group 9           \xdb\n");
	printf("\t\t\xdb                Roll Numbers:                  \xdb\n");
	printf("\t\t\xdb   (033), (032),(041), (039), (043), (062)     \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb              Prototype Version                \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf(" \n\t                   Press Any Key To Continue:");

	getch();
    system("CLS");
}
secondary_page(){
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb             Enter '0' to Register             \xdb\n");
	printf("\t\t\xdb               Enter '1' to Login              \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
}
registration(){
	FILE *fpointer;
	fpointer = fopen("login12.txt", "w");
	struct logindata log;
	printf("Enter first name: ");
	scanf("%s", log.first_name);
	printf("Enter last name: ");
	scanf("%s", log.last_name);
	printf("Enter Username: ");
	scanf("%s", log.username);
	printf("Enter Password: ");
	int index = 0;
	char c;
	while((c = getch()) != 13){//ASCII value of Enter is 13
       if(index < 0)
           index = 0;
       else if(c == 8){//ASCII value of Backspace is 8
           printf("\b");
           printf(NULL);
           printf("\b");
           index--;
       continue;
       }
       log.password[index++] = c;
       printf("*");
   }
   log.password[index] = '\0';
   printf("\nEntered Password is %s", log.password);
	fwrite(&log, sizeof(log),1,fpointer);

	fclose(fpointer);

	printf("\nYour Username is now %s", log.username);
	printf("\n\nYou can now Login with your Username and Password to continue");
	printf("\n\nPress any key to continue...");
	getch();
	system("CLS");
}


login(){
	char username[50], password[50];
	FILE *fpointer;
	fpointer = fopen("login12.txt", "r");
	struct logindata log;
	printf("Username: ");
	scanf("%s", &username);
	printf("Password: ");
	int index = 0;
	char c;
	while((c = getch()) != 13){//ASCII value of Enter is 13
       if(index < 0)
           index = 0;
       else if(c == 8){//ASCII value of Backspace is 8
           printf("\b");
           printf(NULL);
           printf("\b");
           index--;
       continue;
       }
       log.password[index++] = c;
       printf("*");
   }
   log.password[index] = '\0';
   printf("\nPassword = %s", log.password);

	while(fread(&log, sizeof(log),1,fpointer)){
		if(strcmp(username, log.username)==0 && strcmp(password,log.password)==0){
		    printf("Successful login\n");
	    }
		else{
			printf("Please re-enter your Username and Password\n");
		}
	}
	fclose(fpointer);
}
void rulespage()
{

    printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\xdb        =============================          \xdb\n");
	printf("\t\t\t\xdb           Rules of CBIT PARKING LOT           \xdb\n");
	printf("\t\t\t\xdb        =============================          \xdb\n");
	printf("\t\t\t\xdb    1. Take Care to Park Between the Lines     \xdb\n");
	printf("\t\t\t\xdb    2. Don't Block Other Vehicles              \xdb\n");
	printf("\t\t\t\xdb    3. Watch for Pedestrians                   \xdb\n");
	printf("\t\t\t\xdb    4. Park in a Properly Allocated Spot       \xdb\n");
	printf("\t\t\t\xdb    5. Avoid Tailgating Fellow Drivers         \xdb\n");
	printf("\t\t\t\xdb    6. No overnight parking                    \xdb\n");
	printf("\t\t\t\xdb                                               \xdb\n");
	printf("\t\t\t\xdb                                               \xdb\n");
	printf("\t\t\t\xdb                                               \xdb\n");
	printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf(" \n\t                   Press Any Key To Continue:");
	getch();
	system("cls");
}
void menupage()
{
    system("cls");
    printf("\t\t=================================================================================\n");
    printf("\t\t=                                MENU PAGE                                      =\n");
    printf("\t\t=================================================================================\n");
    printf("\t\t=   1>> Arrival Of Vehicle                                                      =\n");
    printf("\t\t=   2>> Total No. Of Vehicles Parked                                            =\n");
    printf("\t\t=   3>> Total No. Of Cars Parked                                                =\n");
    printf("\t\t=   4>> Total No. Of bikes Parked                                               =\n");
    printf("\t\t=   5>> Display Vehicles Parked (Order)                                         =\n");
    printf("\t\t=   6>> Departure Of Vehicle                                                    =\n");
    printf("\t\t=   7>> Exit                                                                    =\n");
    printf("\t\t=================================================================================\n");
    printf("\n\nEnter your choice:");

}
void parkinglot(char veh[10])
{
    printf("\n\n\n\t\t   |  |   |   |   |   |   |   |   |   |");
    printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t   |   |   |   |   |   |   |   |   |   |");
}




int main(){

	int choice,n,v;
	//char veh[10]='\0';
	login_page();
	rulespage();
    secondary_page();
    printf("\n");
	scanf("%d", &choice);
	if(choice == 0){
		system("CLS");
		registration();
		login();
    }
    else if(choice == 1){
		system("CLS");
		login();
	}
	menupage();
	scanf("%d",&n);
	switch(n)
	{
    case 1:
        printf("Please enter the vehicle type:(1 for car/2 for bike)\n");
        scanf("%d",&v);
        if(v==1)
        {
            printf("Enter the Car number:");
            //scanf("%s",veh);
        }
        else if(v==2)
        {
            printf("Enter the bike number:");
            //scanf("%s",veh);
        }
        break;
    case 2:
        printf("Total number of vehicles parked are ");
        break;
    case 3:
        printf("Total No. Of Cars Parked");
        break;
    case 4:
        printf("Total No. Of bikes Parked");
        break;
    case 5:
       // parking lot(veh);
        break;
    //case 6:




	}
	return 0;
}
