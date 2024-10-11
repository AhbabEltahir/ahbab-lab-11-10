#include <stdio.h>
//Prompt the user to input the admin password; if it is incorrect, print a relevant message and exit the Admin mode.
//Once the correct password is entered, display to the coffee maker operator a menu-driven interface; the code of the menu should be embedded within an infinite loop, presenting the following options:
void adminpassword();
int main(){
	int password;
	printf("enter the admin password: ");
	scanf("%d",&password);
if(password==0){
	adminpassword();
}
else{
	printf("incorrect password.exit the admin code");
}
void adminpassword(){
	printf("correct password.");
return 0;
}


