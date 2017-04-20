// This Game Programmed By Tarik Seyceri - 2010 //
#include <stdio.h>
void Drawing(int *a,int *b,int *c,int *d,int *e,int *f);
int  EasyPC(int *y);
int  HardPC(int *a,int *b,int *c,int *d,int *e,int *f,int *y);
int  UserPlay(int *x);
char UserName(char *fname,char *lname);
main()
{
      //System//
      system("color 81");
      char fname[10],lname[10],q='a';
      int k=0,j=0,i=0,l=0,m=0,n=0,p=0,y[10],x[10],a[7],b[7],c[7],d[7],e[7],f[7];
      for(i=1;i!=8;i++){a[i]=0;b[i]=0;c[i]=0;d[i]=0;e[i]=0;f[i]=0;}
      //END System//
      
      //User Name Function//
      UserName(fname,lname);
      //END User Name Function//
  
go1:  //Choice To Play First//
      system("cls");
      q='a';
      printf("Hello %s %s , Hope You Enjoy This Game.....!!\n\n",fname,lname);
      printf("\n\n\n\n\n\n                       Do You Want To Play First....??\n\n");
      printf("                          YES : Y            NO : N\n\n\n");
      printf("                          Enter Your Choice : ");
      scanf("%c",&q);
      if (q=='y') goto go2;
      if (q=='Y') goto go2;
      if (q=='n') goto go5;
      if (q=='N') goto go5;
      goto go1;
      //END Choice To Play First//
      
go2:  //Choosing Computer Mod1//
      system("cls");
      q='a';
      printf("Hello %s %s , Hope You Enjoy This Game.....!!\n\n",fname,lname);
      printf("\n\n\n\n\n\n                       Choose Your Opponent Mod.......\n\n");
      printf("                          Easy : E            Hard : H\n\n\n");
      printf("                          Enter Your Choice : ");
      scanf("%c",&q);
      if (q=='E') goto go3;
      if (q=='e') goto go3;
      if (q=='H'){k=1;goto go3;}
      if (q=='h'){k=1;goto go3;}
      goto go2;
      //END Choosing Computer Mod1//
      
go3:  //Drawing Function//
      Drawing(a,b,c,d,e,f);
      printf("Enter Your Play : ");
      //END Drawing Function//
      
      //User Play Function//
      UserPlay(x);
      //END User Play Function//
      
      //Play Game User//
      for(i=1;i!=8;i++){if(x[0]==i && f[i]==1 && x[0]!=getchar()){goto go3;}}
      for(i=1;i!=8;i++){if(x[0]==i && f[i]==2 && x[0]!=getchar()){goto go3;}}
      for(i=1;i!=8;i++){if(x[0]==i && a[i]!=1 && a[i]!=2 && x[0]!=getchar()){a[i]=1;goto go4;}}
      for(i=1;i!=8;i++){if(x[0]==i && b[i]!=1 && b[i]!=2 && x[0]!=getchar()){b[i]=1;goto go4;}}
      for(i=1;i!=8;i++){if(x[0]==i && c[i]!=1 && c[i]!=2 && x[0]!=getchar()){c[i]=1;goto go4;}}
      for(i=1;i!=8;i++){if(x[0]==i && d[i]!=1 && d[i]!=2 && x[0]!=getchar()){d[i]=1;goto go4;}}
      for(i=1;i!=8;i++){if(x[0]==i && e[i]!=1 && e[i]!=2 && x[0]!=getchar()){e[i]=1;goto go4;}}
      for(i=1;i!=8;i++){if(x[0]==i && f[i]!=1 && f[i]!=2 && x[0]!=getchar()){f[i]=1;goto go4;}}
      if (x[0]==getchar()) goto go3;
      goto go3;
      //END Play Game User//
      
go4:  //User Winner//
      for(i=1;i!=8;i++){if(1==a[i] && 1==b[i] && 1==c[i] && 1==d[i]){a[i]=4,b[i]=4,c[i]=4,d[i]=4;goto go11;}}
      for(i=1;i!=8;i++){if(1==b[i] && 1==c[i] && 1==d[i] && 1==e[i]){b[i]=4,c[i]=4,d[i]=4,e[i]=4;goto go11;}}
      for(i=1;i!=8;i++){if(1==c[i] && 1==d[i] && 1==e[i] && 1==f[i]){c[i]=4,d[i]=4,e[i]=4,f[i]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==a[i] && 1==b[l] && 1==c[m] && 1==d[n]){a[i]=4,b[l]=4,c[m]=4,d[n]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==b[i] && 1==c[l] && 1==d[m] && 1==e[n]){b[i]=4,c[l]=4,d[m]=4,e[n]=4;goto go11;}}      
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==c[i] && 1==d[l] && 1==e[m] && 1==f[n]){c[i]=4,d[l]=4,e[m]=4,f[n]=4;goto go11;}}
      for(i=4,l=3,m=2,n=1;i!=8,l!=7,m!=6,n!=5;i++,l++,m++,n++){if(1==a[i] && 1==b[l] && 1==c[m] && 1==d[n]){a[i]=4,b[l]=4,c[m]=4,d[n]=4;goto go11;}}
      for(i=4,l=3,m=2,n=1;i!=8,l!=7,m!=6,n!=5;i++,l++,m++,n++){if(1==b[i] && 1==c[l] && 1==d[m] && 1==e[n]){b[i]=4,c[l]=4,d[m]=4,e[n]=4;goto go11;}}
      for(i=4,l=3,m=2,n=1;i!=8,l!=7,m!=6,n!=5;i++,l++,m++,n++){if(1==c[i] && 1==d[l] && 1==e[m] && 1==f[n]){c[i]=4,d[l]=4,e[m]=4,f[n]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==a[i] && 1==a[l] && 1==a[m] && 1==a[n]){a[i]=4,a[l]=4,a[m]=4,a[n]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==b[i] && 1==b[l] && 1==b[m] && 1==b[n]){b[i]=4,b[l]=4,b[m]=4,b[n]=4;goto go11;}}  
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==c[i] && 1==c[l] && 1==c[m] && 1==c[n]){c[i]=4,c[l]=4,c[m]=4,c[n]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==d[i] && 1==d[l] && 1==d[m] && 1==d[n]){d[i]=4,d[l]=4,d[m]=4,d[n]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==e[i] && 1==e[l] && 1==e[m] && 1==e[n]){e[i]=4,e[l]=4,e[m]=4,e[n]=4;goto go11;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(1==f[i] && 1==f[l] && 1==f[m] && 1==f[n]){f[i]=4,f[l]=4,f[m]=4,f[n]=4;goto go11;}}
      //END User Winner//
      
      //Easy Or Hard Computer//
      while(k==1){goto go6;break;}
      goto go7;
      //END Easy Or Hard Computer//
      
go5:  //Choosing Computer Mod2//
      system("cls");
      q='a';
      printf("Hello %s %s , Hope You Enjoy This Game.....!!\n\n",fname,lname);
      printf("\n\n\n\n\n\n                       Choose Your Opponent Mod......\n\n");
      printf("                          Easy : E            Hard : H\n\n\n");
      printf("                          Enter Your Choice : ");
      scanf("%c",&q);
      if (q=='E') goto go7;
      if (q=='e') goto go7;
      if (q=='H'){k=1;goto go6;}
      if (q=='h'){k=1;goto go6;}
      goto go5;
      //END Choosing Computer Mod2//
      
go6:  //Hard Computer Function//
      HardPC(a,b,c,d,e,f,y);
      goto go8;
      //END Hard Computer Function//
      
go7:  //Easy Computer Function//
      EasyPC(y);
      //END Easy Computer Function//
      
go8:  //Play Game Computer//
      for(i=1;i!=8;i++){if(y[0]==i && f[i]==1){goto go7;}}
      for(i=1;i!=8;i++){if(y[0]==i && f[i]==2){goto go7;}}
      for(i=1;i!=8;i++){if(y[0]==i && a[i]!=1 && a[i]!=2){a[i]=2;goto go9;}}
      for(i=1;i!=8;i++){if(y[0]==i && b[i]!=1 && b[i]!=2){b[i]=2;goto go9;}}
      for(i=1;i!=8;i++){if(y[0]==i && c[i]!=1 && c[i]!=2){c[i]=2;goto go9;}}
      for(i=1;i!=8;i++){if(y[0]==i && d[i]!=1 && d[i]!=2){d[i]=2;goto go9;}}
      for(i=1;i!=8;i++){if(y[0]==i && e[i]!=1 && e[i]!=2){e[i]=2;goto go9;}}
      for(i=1;i!=8;i++){if(y[0]==i && f[i]!=1 && f[i]!=2){f[i]=2;goto go9;}}
      //END Play Game Computer//
      
go9:  //Computer Winner//
      for(i=1;i!=8;i++){if(2==a[i] && 2==b[i] && 2==c[i] && 2==d[i]){a[i]=3,b[i]=3,c[i]=3,d[i]=3;goto go14;}}
      for(i=1;i!=8;i++){if(2==b[i] && 2==c[i] && 2==d[i] && 2==e[i]){b[i]=3,c[i]=3,d[i]=3,e[i]=3;goto go14;}}
      for(i=1;i!=8;i++){if(2==c[i] && 2==d[i] && 2==e[i] && 2==f[i]){c[i]=3,d[i]=3,e[i]=3,f[i]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==a[i] && 2==b[l] && 2==c[m] && 2==d[n]){a[i]=3,b[l]=3,c[m]=3,d[n]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==b[i] && 2==c[l] && 2==d[m] && 2==e[n]){b[i]=3,c[l]=3,d[m]=3,e[n]=3;goto go14;}}      
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==c[i] && 2==d[l] && 2==e[m] && 2==f[n]){c[i]=3,d[l]=3,e[m]=3,f[n]=3;goto go14;}}
      for(i=4,l=3,m=2,n=1;i!=8,l!=7,m!=6,n!=5;i++,l++,m++,n++){if(2==a[i] && 2==b[l] && 2==c[m] && 2==d[n]){a[i]=3,b[l]=3,c[m]=3,d[n]=3;goto go14;}}
      for(i=4,l=3,m=2,n=1;i!=8,l!=7,m!=6,n!=5;i++,l++,m++,n++){if(2==b[i] && 2==c[l] && 2==d[m] && 2==e[n]){b[i]=3,c[l]=3,d[m]=3,e[n]=3;goto go14;}}
      for(i=4,l=3,m=2,n=1;i!=8,l!=7,m!=6,n!=5;i++,l++,m++,n++){if(2==c[i] && 2==d[l] && 2==e[m] && 2==f[n]){c[i]=3,d[l]=3,e[m]=3,f[n]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==a[i] && 2==a[l] && 2==a[m] && 2==a[n]){a[i]=3,a[l]=3,a[m]=3,a[n]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==b[i] && 2==b[l] && 2==b[m] && 2==b[n]){b[i]=3,b[l]=3,b[m]=3,b[n]=3;goto go14;}}  
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==c[i] && 2==c[l] && 2==c[m] && 2==c[n]){c[i]=3,c[l]=3,c[m]=3,c[n]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==d[i] && 2==d[l] && 2==d[m] && 2==d[n]){d[i]=3,d[l]=3,d[m]=3,d[n]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==e[i] && 2==e[l] && 2==e[m] && 2==e[n]){e[i]=3,e[l]=3,e[m]=3,e[n]=3;goto go14;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(2==f[i] && 2==f[l] && 2==f[m] && 2==f[n]){f[i]=3,f[l]=3,f[m]=3,f[n]=3;goto go14;}}
      //END Computer Winner//
      
      //Stones Counter//
      j++;
      if(j==21)goto go17;
      //END Stones Counter//
      
      //Circle Ends And Turn Around//
      goto go3;
      //END Circle Ends And Turn Around//
            
      //Replay//
go10: system("cls");
      system("color 81");
      q='a';
      y[0]=0,x[0]=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0;
      for(i=1;i!=8;i++){a[i]=0;b[i]=0;c[i]=0;d[i]=0;e[i]=0;f[i]=0;}
      goto go1;
      //END Replay//
      
      //User Wins//
go11: printf("\a");
go12: system("cls");
      system("color 8f");
      q='a';
      Drawing(a,b,c,d,e,f);
      printf("               ----Congradulations %s %s You Won The Game----  \n",fname,lname);
      printf("                                 Play Again....? \n");
      printf("                            YES : Y            NO : N\n");
      printf("                              Enter Your Choice : ");
      scanf("%c",&q);
      if (q=='y') goto go10;
      if (q=='Y') goto go10;
      if (q=='n') goto go13;
      if (q=='N') goto go13;
      goto go12;
go13: system("pause");
      exit(0);
      //END User Wins//
      
      //Computer Wins//
go14: printf("\a\a");
go15: system("cls");
      system("color 84");
      q='a';
      Drawing(a,b,c,d,e,f);
      printf("                       ----%s %s You Lost The Game----  \n",fname,lname);
      printf("                                 Play Again....? \n");
      printf("                            YES : Y            NO : N\n");
      printf("                              Enter Your Choice : ");
      scanf("%c",&q);
      if (q=='y') goto go10;
      if (q=='Y') goto go10;
      if (q=='n') goto go16;
      if (q=='N') goto go16;
      goto go15;
go16: system("pause");
      exit(0);
      //END Computer Wins//
      
      //No One Wins (Draw)//
go17: printf("\a\a\a\a");
go18: system("cls");
      system("color 37");
      q='a';
      Drawing(a,b,c,d,e,f);
      printf("                               ---- D R A W ----  \n");
      printf("                                 Play Again....? \n");
      printf("                            YES : Y            NO : N\n");
      printf("                              Enter Your Choice : ");
      scanf("%c",&q);
      if (q=='y') goto go10;
      if (q=='Y') goto go10;
      if (q=='n') goto go19;
      if (q=='N') goto go19;
      goto go18;
go19: system("pause");
      exit(0);
      //END No One Wins (Draw)//
}//END Main
//////////////////////////////////////// FUNCTIONS ////////////////////////////////////////////////
void Drawing(int *a,int *b,int *c,int *d,int *e,int *f)
{
      system("cls");
      printf("                   _____ _____ _____ _____ _____ _____ _____  \n");
      printf("                  |     |     |     |     |     |     |     | \n");
      printf("                  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  | \n",f[1],f[2],f[3],f[4],f[5],f[6],f[7]);
      printf("                  |_____|_____|_____|_____|_____|_____|_____| \n");
      printf("                  |     |     |     |     |     |     |     | \n");
      printf("                  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  | \n",e[1],e[2],e[3],e[4],e[5],e[6],e[7]);
      printf("                  |_____|_____|_____|_____|_____|_____|_____| \n");
      printf("                  |     |     |     |     |     |     |     | \n");
      printf("                  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  | \n",d[1],d[2],d[3],d[4],d[5],d[6],d[7]);
      printf("                  |_____|_____|_____|_____|_____|_____|_____| \n");
      printf("                  |     |     |     |     |     |     |     | \n");
      printf("                  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  | \n",c[1],c[2],c[3],c[4],c[5],c[6],c[7]);
      printf("                  |_____|_____|_____|_____|_____|_____|_____| \n");
      printf("                  |     |     |     |     |     |     |     | \n");
      printf("                  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  | \n",b[1],b[2],b[3],b[4],b[5],b[6],b[7]);
      printf("                  |_____|_____|_____|_____|_____|_____|_____| \n");
      printf("                  |     |     |     |     |     |     |     | \n");
      printf("                  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  | \n",a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
      printf("                  |_____|_____|_____|_____|_____|_____|_____| \n");
      printf("                     1     2     3     4     5     6     7    \n\n");
}    
int EasyPC(int *y)
{
      y[0]=0;
      srand(time(NULL));
      y[0]=rand()%7+1;
}
int HardPC(int *a,int *b,int *c,int *d,int *e,int *f,int *y)
{
      int i=0,l=0,m=0,n=0,p=0;
      y[0]=0;
      for(i=1;i!=8;i++){srand(time(NULL));p=rand()%2+1;if(b[i]==p && c[i]!=1 && c[i]!=2){y[0]=i;goto go;}}
      for(i=1;i!=8;i++){srand(time(NULL));p=rand()%2+1;if(b[i]==p && c[i]!=1 && c[i]!=2){y[0]=i;goto go;}}
      for(i=1;i!=8;i++){srand(time(NULL));p=rand()%2+1;if(b[i]==p && c[i]!=1 && c[i]!=2){y[0]=i;goto go;}}
      for(i=1;i!=8;i++){srand(time(NULL));p=rand()%2+1;if(b[i]==p && c[i]!=1 && c[i]!=2){y[0]=i;goto go;}}
      for(i=1;i!=8;i++){if(a[i]==1 && b[i]==1 && c[i]!=1 && c[i]!=2){y[0]=i;goto go;}}
      for(i=1;i!=8;i++){if(b[i]==1 && c[i]==1 && d[i]!=1 && d[i]!=2){y[0]=i;goto go;}}
      for(i=1;i!=8;i++){if(c[i]==1 && d[i]==1 && e[i]!=1 && e[i]!=2){y[0]=i;goto go;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(a[i]==1 && a[l]==1 && a[m]==1 && a[n]!=1 && a[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=4,n=1;i!=6,l!=7,m!=8,n!=5;i++,l++,m++,n++){if(a[i]==1 && a[l]==1 && a[m]==1 && a[n]!=1 && a[n]!=2){y[0]=n;goto go;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(b[i]==1 && b[l]==1 && b[m]==1 && b[n]!=1 && b[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=4,n=1;i!=6,l!=7,m!=8,n!=5;i++,l++,m++,n++){if(b[i]==1 && b[l]==1 && b[m]==1 && b[n]!=1 && b[n]!=2){y[0]=n;goto go;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(c[i]==1 && c[l]==1 && c[m]==1 && c[n]!=1 && c[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=4,n=1;i!=6,l!=7,m!=8,n!=5;i++,l++,m++,n++){if(c[i]==1 && c[l]==1 && c[m]==1 && c[n]!=1 && c[n]!=2){y[0]=n;goto go;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(d[i]==1 && d[l]==1 && d[m]==1 && d[n]!=1 && d[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=4,n=1;i!=6,l!=7,m!=8,n!=5;i++,l++,m++,n++){if(d[i]==1 && d[l]==1 && d[m]==1 && d[n]!=1 && d[n]!=2){y[0]=n;goto go;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(e[i]==1 && e[l]==1 && e[m]==1 && e[n]!=1 && e[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=4,n=1;i!=6,l!=7,m!=8,n!=5;i++,l++,m++,n++){if(e[i]==1 && e[l]==1 && e[m]==1 && e[n]!=1 && e[n]!=2){y[0]=n;goto go;}}
      for(i=1,l=2,m=3,n=4;i!=5,l!=6,m!=7,n!=8;i++,l++,m++,n++){if(f[i]==1 && f[l]==1 && f[m]==1 && f[n]!=1 && f[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=4,n=1;i!=6,l!=7,m!=8,n!=5;i++,l++,m++,n++){if(f[i]==1 && f[l]==1 && f[m]==1 && f[n]!=1 && f[n]!=2){y[0]=n;goto go;}}
      for(i=2,l=3,m=1;i!=7,l!=8,m!=6;i++,l++,m++){if(a[i]==1 && a[l]==1 && a[m]!=1 && a[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){if(a[i]==1 && a[l]==1 && a[m]!=1 && a[m]!=2){y[0]=m;goto go;}}
      for(i=2,l=3,m=1;i!=7,l!=8,m!=6;i++,l++,m++){if(b[i]==1 && b[l]==1 && b[m]!=1 && b[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){if(b[i]==1 && b[l]==1 && b[m]!=1 && b[m]!=2){y[0]=m;goto go;}}
      for(i=2,l=3,m=1;i!=7,l!=8,m!=6;i++,l++,m++){if(c[i]==1 && c[l]==1 && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){if(c[i]==1 && c[l]==1 && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=2,l=3,m=1;i!=7,l!=8,m!=6;i++,l++,m++){if(d[i]==1 && d[l]==1 && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){if(d[i]==1 && d[l]==1 && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=2,l=3,m=1;i!=7,l!=8,m!=6;i++,l++,m++){if(e[i]==1 && e[l]==1 && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){if(e[i]==1 && e[l]==1 && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=2,l=3,m=1;i!=7,l!=8,m!=6;i++,l++,m++){if(f[i]==1 && f[l]==1 && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){if(f[i]==1 && f[l]==1 && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}} 
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=1,l=2,m=3;i!=6,l!=7,m!=8;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}} 
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}} 
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=3,l=1,m=2;i!=8,l!=6,m!=7;i++,l++,m++){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}} 
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(a[i]==1 && b[l]==1 && b[m]==p && c[m]!=1 && c[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(b[i]==1 && c[l]==1 && c[m]==p && d[m]!=1 && d[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(c[i]==1 && d[l]==1 && d[m]==p && e[m]!=1 && e[m]!=2){y[0]=m;goto go;}} 
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}}
      for(i=7,l=6,m=5;i!=2,l!=1,m!=0;i--,l--,m--){srand(time(NULL));p=rand()%2+1;if(d[i]==1 && e[l]==1 && e[m]==p && f[m]!=1 && f[m]!=2){y[0]=m;goto go;}} 
      EasyPC(y);
go:   printf("");      
}
int UserPlay(int *x)
{
      x[0]=0;
      scanf("%d",&x[0]);    
}
char UserName(char *fname,char *lname)
{
      printf("\n\n\n\n\n\n                Developed By Tarik Seyceri 2010\n");
      printf("               ---------------------------------------");
      printf("\n\n\n\n\n\n");
      printf("                         Your First Name : " );
      scanf("%s",&*fname);
      printf("                         Your Last Name : " );
      scanf("%s",&*lname);
      *fname=toupper(*fname);
      *lname=toupper(*lname);
}
//END PROJECT
