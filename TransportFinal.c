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
   printf("\nPassword String = %s", log.password);
	
	while(fread(&log, sizeof(log),1,fpointer)){
		if(strcmp(username, log.username)==0 && strcmp(password,log.password)==0){
		    printf("Successful login\n");
	    }
		else{
			printf("Please re-enter your Username and Password");
		}
	}
	fclose(fpointer);
}

int main(){
	
	int choice;
	login_page();
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
	return 0;
}
