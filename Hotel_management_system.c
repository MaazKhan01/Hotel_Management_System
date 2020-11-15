//  Simple structure Program On Hotel Management System only runs in TURBO C++ (IDE)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>

//prototypes
 int  options(char a);
 void room();
 void food();
 void about();
 void querie();
 void backToMain();
// void cls();
 void timefunction();
 void breakfast();
 void lunch();
 void dinner();
 void back();
//main program starts
 //  int i;
  int main(void){
 // do{
    char x ;

    int gd=DETECT,gm;
       //cls();
       clrscr();

       initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
       //   setbkcolor(BLUE);
      // closegraph();

       printf("\n\n\n");
       timefunction();
      // setbkcolor(BLUE);
     //  rectangle(122,120,490,70);
       //gotoxy(100,50);
       printf("\t\t**_________HOTEL MANAGEMENT SYSTEM_________**\t\n\n\n");

      // textcolor(10);
       printf("  1 - Room(s)\n\n");
       printf("  2 - Food Service\n\n");
       printf("  3 - About Us\n\n");
       printf("  4 - Queries and Help\n\n");
       printf("  Press 0 to stop: \n\n");

  scanf("%c",&x);
  if(x == '1'|| '2'|| '3'|| '4'){
    options(x);
  }
  getch();

       //  scanf("%d",&i);

    return 0;
    }
//main program ends here
 int options(char a){
    switch(a){
  case '1':
       //    cls();
     clrscr();
     timefunction();
     room();
     getch();
  break;
  case '2':
   //cls();
     clrscr();
     timefunction();
     food();
     getch();
  break;
  case '3':
   //cls();
     clrscr();
     timefunction();
     about();
     getch();
  break;
  case '4':
   //cls();
     clrscr();
     timefunction();
     querie();
     getch();
  break;
  case '0':
     exit(0);
        default:
 //        cls();
     main();
    // return 0;
  }
    return a;
}
//  main();
// Functions to use in main Func.
  void room(){
  FILE *fptr;
    char name[15];
    long int phone;
    int room,age,bk;

    clrscr();
    fptr = fopen("C:\\data.txt ","a");
    if(fptr == NULL){
    printf("file is Empty");
    return ;
    }
    printf("Enter you First Name \n");
    scanf("%c",&name[15]);
    fprintf(fptr,"Name is  %s\n",name);
    printf("Enter your phone number\n");
    scanf("%ld",&phone);
    fprintf(fptr,"Phone Number : %ld\n",phone);
    printf("How many room(s) you want to reserve\n");
    scanf("%d",&room);
    fprintf(fptr,"Rooms  %d\n",room);
    printf(" ");
    printf("\nEnter your Age\n");
    scanf("%d",&age);
    fprintf(fptr,"Age : ",age);
    printf("\n\t\tWe will inform you soon\n");  getch();
  printf("\t\t~~~~ RESERVED ROOMS ~~~~\t\t");


  printf("\n\n Room no 101.\n");

  printf("\n\n Roon no 102. \n");

  printf("\n\n 101\tHelloo,world2\txyz111 street, \n");

  printf("\n\n 102\tHelloo,world3\txyz222 street, \n");

  printf("\n\n 103\tHelloo,world4\txyz333 street, \n");

  printf("\n\n\t\t\t~~~~ AVAILABLE ROOMS ~~~~\t\t");

  printf("\n\n\t Room No.\t PRICE\t\tROOM TYPE\t\n\n");

  printf("\n\n\t 001\t\t 1500 (Per Night) \t\tVIP \t\n");

  printf("\n\n\t 002\t\t 2000 (24 Hour)\t\tNOT VIP\t\n");

  printf("\n\n\t 003\t\t 2500 (24 Hour) \t\tNOT VIP\t\n");

  printf("\n\n\t 004\t\t 1000 (6 Hour) \t\tVIP \t\n");

  printf("\nPRESS 0 TO GO BACK PROGRAM\n");
       scanf("%d",&bk);
  if(bk == 0){
   clrscr();
    main();
   getch();
}
    }
 void food(){
      int items;

  printf(" \t\t ~~~~WELCOME TO FOOD SECTION~~~~\t\n\n");

  printf(" 1 - Breakfast\n");
  printf(" 2 - Lunch\n");
  printf(" 3 - Dinner\n");
  printf(" 0 - Exit\n");
  printf("Enter option no.: ");

  scanf("%d",&items);
      switch(items){

       case 1:
//       cls();
   clrscr();
        breakfast();
   getch();
       break;
       case 2:
      //cls();
   clrscr();
        lunch();
   getch();
       break;
       case 3:
      //cls();
  clrscr();
        dinner();
  getch();
       break;
       case 0:
      //cls();
  clrscr();
        main();
  //getch();
       break;
       default:
       printf("Error");

       /*  int toMain;
      //cls();
  clrscr();
  printf("\t\t\tTyped invalid no. \n");

  printf("\t\t\ttype 1 to goto Home Page:\n");
  scanf("%d",&toMain);
  if(toMain == 1){
      //    cls();
      clrscr();
      main();
  }else{
     food();
  }*/
    }
  }
    //brakfast function
    void breakfast(){

  printf("\t\t~~~~WELCOME TO BREAKFAST SECTION~~~~\t\n\n");

  printf("\t1) Sandwiches \tPrice : 350\n");
  printf("\t2) Eggs \tPrice : 250\n");
  printf("\t3) Cup of Tea \tPrice : 50\n");
  printf("\t4) Paratha \tPrice : 15\n");
  printf("\t\t\n 0 To go back : \n");
  back();
   // getch();
    }
 void lunch(){

  printf("\t\t~~~~WELCOME TO LUNCH SECTION~~~~\t\n\n");

  printf("\t1) Daal Chana \tPrice : 200\n");
  printf("\t2) EGG SANDWICHES \tPrice : 350\n");
  printf("\t3) BIRYANI \tPrice : 150\n");
  printf("\t4) EGG BURGER \tPrice : 100\n");
  printf("\t5) PILAO \tPrice : 120\n");
  printf("\t6) CHINESS RICE \tPrice : 350\n");
  printf("\t\t\n 0 To go back : ");
  back();
    //getch();
    }
 void dinner(){

  printf("\t\t~~~~WELCOME TO DINNRR SECTION~~~~\t\n\n");

  printf("\t1) Fishes\t\tPrice : 200\n");
  printf("\t2) Urgent Fishes \tPrice : 200\n");
  printf("\t3) Burger\t\tPrice : 90\n");
  printf("\t4) Pizza(small) \tPrice : NA\n");
  printf("\t5) Pizza(medium) \tPrice : 450\n");
  printf("\t6) Pizaa(large) \tPrice : 650(with bottle)\n");
  printf("\t\t\n 0 To go back : ");
  back();
    //getch();
    }
 void about(){
int bk;
  printf("\t\t\t\t~~~~MOST WELCOME~~~~\n\n");
  printf("\t\tOur editorial staff provides the very latest news and insight for the hospitality community and boasts a masthead brimming with sought-after thought leaders in the industry.\n\t You can contact us by our Email Service or phone number:\n\t\t Email:xyz123@gmail.com\n\t\t Phone: +92 987654321\n\n\n");
  printf("\t\tPress 0 to go back \n");
    scanf("%d", &bk);
   if(bk == 0){
    clrscr();
      main();
    getch();
}

 //   getch();
}
void querie(){

    printf("\t\t\t\n~~~~COMPLAINS AND QUERIES~~~~\n\n");
    printf("\t\t\t**There are some complains which asked a lot:**\n\n");
    printf("\t\t\tMY ROOM IS SO HOT/COLD:\n\n\tthere will be easily readable printed instructions on the unit itself but be prepared to walk guests step-by-step through the process.\n");
    printf("\n\t\t\tI CANT ACCESS THE INTERNET:\n\n\tWifi passwords are hand-written on a card in the guest book. The password may be hard to see or your proprietary wifi login may be confusing to navigate.\n");
    printf("\t\t\tI AM HEARING TOO MUCH NOISE IN MY ROOM:\n\n\tIf the noise is coming from outside the hotel, our staff can offer to move the guest up several floors or across the floor plan to get them away from the noise. This transition will be easier (and more enjoyable) with a luggage cart so that you don’t have to pack completely back up. If the noise is coming from inside the hotel (other guests or, perhaps, a service room), we can either try to squelch the noise or, again, move our guest.\n");
    printf("\t\t\tI HAVE A PROBLEMS WITH YOUR SERVICE:\n\n\tWe Apologize to our guest and we offer the closest thing our hotel can provide to what you expected to receive. If the issue could be legitimate (a rude staff member, an unfortunate meal, etc), we conduct an investigation to make sure it doesn’t happen again.\n");
    printf("\n\n\t If You Have any Complain Contact us by our Email Service or phone number:\n\t Email:xyz123@gmail.com\n\t Phone: +92 987654321\n\n\t");
    printf("Type 0 to go back : ");
     backToMain();
     }
//funcr5ion used in queries and complain
void backToMain(){
  int bkMain;
  scanf("%d",&bkMain);
  if(bkMain == 0){
   // cls();
      clrscr();
      main();
  }
    else{
     printf("\nInvalid!!");
   }
   }
 void back(){
  int bk;
  scanf("%d",&bk);
  if(bk == 0){
  //        cls();
      clrscr();
      food();
  }
    else{
     main();
   }
}

 void timefunction(){
      time_t t; // not a primitive datatype time(&t);
      time(&t);
      printf("\t\t\tDATE & time :\t%s\n\n",ctime(&t));
}
/*
    //function to clear screen if u are using code block
 void cls(){

   int col,row;
   for(row = 1;row <= 25;row++){
      for(col = 1;col <= 80;col++){
          printf(" \n");
        }
  }
  //  gotoxy(1,1);
 }
*/
//timefunction function which is not running in codeblock

