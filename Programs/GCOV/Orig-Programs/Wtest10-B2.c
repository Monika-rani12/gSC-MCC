#include <assert.h>
#include <math.h>
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif
#include <assert.h>
#define BOUND 2


// inputs
int a= 1;
int e= 5;
int d= 4;
int f= 6;
int c= 3;

// outputs
int u = 21;
int v = 22;
int w = 23;
int x = 24;
int y = 25;
int z = 26;


int a25 = 0;
int a11 = 0;
int a28 = 7;
int a19 = 1;
int a21 = 1;
int a17 = 8;
int kappa;
int calculate_output(int input) {
if((((!(a11==1)&&((a19==1)&&((input==4)&&((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9))))))&&(a21==1))&&(a17==8))){
a28 = 9;
a11 = 1;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if(((a17==8)&&((((!(a11==1)&&((a21==1)&&(input==6)))&&(a28==7))&&(a19==1))&&!(a25==1)))){
a28 = 10;
printf("%d", 22);//return 22;
} else{
 if(((a21==1)&&((a19==1)&&((((((a25==1)||!(a25==1))&&(input==3))&&(a17==9))&&(a11==1))&&(a28==9))))){
a28 = 7;
a25 = 1;
printf("%d", 22);//return 22;
} else{
 if(((a28==9)&&(!(a19==1)&&((a21==1)&&((((input==4)&&!(a25==1))&&!(a11==1))&&(a17==8)))))){
a25 = 1;
a19 = 1;
a11 = 1;
printf("%d",-1);//return -1;
} else{
 if(((((a17==8)&&((((input==1)&&((a25==1)||!(a25==1)))&&!(a11==1))&&(a19==1)))&&(a21==1))&&(a28==10))){
a25 = 0;
printf("%d",-1);//return -1;
} else{
 if(((a19==1)&&(!(a25==1)&&((a21==1)&&((((input==1)&&(a17==8))&&!(a11==1))&&(a28==7)))))){
a28 = 11;
a25 = 1;
printf("%d", 26);//return 26;
} else{
 if(((((!(a19==1)&&((input==1)&&((((a25==1)&&(a28==7))||((a28==7)&&!(a25==1)))||((a25==1)&&(a28==8)))))&&(a21==1))&&(a17==8))&&!(a11==1))){
a28 = 7;
a11 = 1;
a25 = 0;
printf("%d",-1);//return -1;
} else{
 if(((a19==1)&&(((((input==1)&&(((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||((a28==7)&&!(a25==1)))))&&(a11==1))&&(a21==1))&&(a17==9)))){
a28 = 11;
a17 = 7;
a11 = 0;
a25 = 1;
printf("%d", 22);//return 22;
} else{
 if(((a19==1)&&(((a17==8)&&(((input==6)&&((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9))))&&!(a11==1)))&&(a21==1)))){
a28 = 10;
a25 = 0;
printf("%d", 22);//return 22;
} else{
 if((!(a11==1)&&((((a21==1)&&((input==1)&&(((a28==8)&&!(a25==1))||((a25==1)&&(a28==9)))))&&!(a19==1))&&(a17==8)))){
a28 = 7;
a25 = 0;
a11 = 1;
printf("%d",-1);//return -1;
} else{
 if((!(a19==1)&&(((((a17==8)&&((a25==1)&&(input==3)))&&(a28==10))&&!(a11==1))&&(a21==1)))){
if((a19==1)){

}else{
a19 = 1;
a28 = 8;
}
printf("%d", 26);//return 26;
} else{
 if((((!(a19==1)&&((a21==1)&&((((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||((a28==7)&&!(a25==1))))&&(input==4))))&&!(a11==1))&&(a17==8))){
if((a28==10)){
a28 = 7;
a25 = 1;
}else{
a28 = 8;
a25 = 0;
}
printf("%d", 22);//return 22;
} else{
 if(((a17==8)&&((a21==1)&&((a25==1)&&((a19==1)&&(!(a11==1)&&((a28==11)&&(input==3)))))))){
a28 = 10;
a25 = 0;
printf("%d",-1);//return -1;
} else{
 if(((a28==9)&&(((!(a19==1)&&(((input==3)&&!(a11==1))&&(a17==8)))&&!(a25==1))&&(a21==1)))){
a28 = 10;
a19 = 1;
printf("%d", 22);//return 22;
} else{
 if(((!(a11==1)&&(((a28==11)&&((a25==1)&&((input==1)&&(a19==1))))&&(a17==8)))&&(a21==1))){
a17 = 7;
a25 = 0;
a11 = 1;
a28 = 10;
a19 = 0;
printf("%d",-1);//return -1;
} else{
 if((((a11==1)&&((((((a25==1)&&(a28==8))||(((a25==1)&&(a28==7))||(!(a25==1)&&(a28==7))))&&(input==6))&&(a19==1))&&(a17==9)))&&(a21==1))){
a17 = 8;
a25 = 0;
a19 = 0;
a28 = 11;
a11 = 0;
printf("%d", 23);//return 23;
} else{
 if(((a17==8)&&((a21==1)&&(!(a11==1)&&(!(a19==1)&&(((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))&&(input==3))))))){
a28 = 10;
a19 = 1;
a11 = 1;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if((((((a21==1)&&((a28==10)&&((input==1)&&(a25==1))))&&!(a11==1))&&(a17==8))&&!(a19==1))){
a25 = 0;
a19 = 1;
printf("%d", 26);//return 26;
} else{
 if((!(a11==1)&&(!(a19==1)&&(((a17==8)&&((input==6)&&((((a25==1)&&(a28==7))||((a28==7)&&!(a25==1)))||((a28==8)&&(a25==1)))))&&(a21==1))))){
a17 = 7;
a25 = 1;
a11 = 1;
a28 = 7;
a19 = 1;
printf("%d",-1);//return -1;
} else{
 if(((((a17==8)&&(!(a19==1)&&(((input==6)&&(a21==1))&&!(a25==1))))&&!(a11==1))&&(a28==9))){
a28 = 10;
a19 = 1;
printf("%d", 22);//return 22;
} else{
 if((!(a11==1)&&((!(a25==1)&&(((a21==1)&&((input==1)&&(a19==1)))&&(a17==8)))&&(a28==11)))){
a28 = 7;
a19 = 0;
a11 = 1;
printf("%d",-1);//return -1;
} else{
 if((((a11==1)&&(((a19==1)&&((a21==1)&&(((a25==1)||!(a25==1))&&(input==4))))&&(a17==9)))&&(a28==9))){
a25 = 0;
a17 = 8;
printf("%d",-1);//return -1;
} else{
 if(((!(a11==1)&&((a28==9)&&(((!(a19==1)&&(input==5))&&!(a25==1))&&(a21==1))))&&(a17==8))){
a17 = 7;
a11 = 1;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if(((!(a11==1)&&(((a17==8)&&(((((a28==7)&&(a25==1))||(!(a25==1)&&(a28==7)))||((a28==8)&&(a25==1)))&&(input==3)))&&!(a19==1)))&&(a21==1))){
a11 = 1;
a19 = 1;
a28 = 10;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if(((a21==1)&&(!(a19==1)&&((((input==5)&&(((a28==8)&&(a25==1))||(((a25==1)&&(a28==7))||(!(a25==1)&&(a28==7)))))&&!(a11==1))&&(a17==8))))){
a25 = 1;
a19 = 1;
a28 = 7;
printf("%d",-1);//return -1;
} else{
 if((((a17==9)&&(((a28==8)&&(((input==1)&&(a19==1))&&!(a25==1)))&&(a11==1)))&&(a21==1))){
a17 = 8;
a19 = 0;
a28 = 9;
a25 = 1;
printf("%d", 22);//return 22;
} else{
 if((((a21==1)&&((a19==1)&&((a28==7)&&((a17==8)&&(!(a25==1)&&(input==3))))))&&!(a11==1))){
a25 = 1;
a28 = 9;
printf("%d", 26);//return 26;
} else{
 if(((a28==11)&&(((a17==8)&&((((input==6)&&(a21==1))&&(a19==1))&&!(a25==1)))&&!(a11==1)))){
a17 = 7;
a11 = 1;
a28 = 7;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if(((!(a11==1)&&(((a17==8)&&((a21==1)&&((input==3)&&(a28==8))))&&(a19==1)))&&(a25==1))){
a28 = 10;
a19 = 0;
printf("%d", 26);//return 26;
} else{
 if((((a21==1)&&(((a19==1)&&(((((a25==1)&&(a28==7))||((a28==7)&&!(a25==1)))||((a25==1)&&(a28==8)))&&(input==4)))&&(a11==1)))&&(a17==9))){
a17 = 8;
a25 = 1;
a11 = 0;
a28 = 8;
printf("%d",-1);//return -1;
} else{
 if((((!(a11==1)&&((a17==8)&&(((input==4)&&(a19==1))&&(a28==8))))&&(a21==1))&&(a25==1))){
printf("%d", 22);//return 22;
} else{
 if(((a19==1)&&((((((input==4)&&(a21==1))&&(a28==9))&&!(a25==1))&&!(a11==1))&&(a17==8)))){
printf("%d", 22);//return 22;
} else{
 if(((a17==8)&&((((((input==1)&&(a21==1))&&!(a11==1))&&(a19==1))&&!(a25==1))&&(a28==9)))){
printf("%d", 23);//return 23;
} else{
 if((((((((input==4)&&((a25==1)||!(a25==1)))&&!(a11==1))&&(a21==1))&&(a17==8))&&(a28==10))&&(a19==1))){
a25 = 1;
printf("%d", 22);//return 22;
} else{
 if(((!(a25==1)&&((a11==1)&&((a28==8)&&(((a17==9)&&(input==4))&&(a19==1)))))&&(a21==1))){
a17 = 7;
a11 = 0;
printf("%d", 22);//return 22;
} else{
 if((!(a19==1)&&((a17==8)&&((a28==10)&&(((a25==1)&&(!(a11==1)&&(input==5)))&&(a21==1)))))){
a19 = 1;
a28 = 11;
printf("%d", 23);//return 23;
} else{
 if((((((a21==1)&&((input==1)&&((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))))&&(a17==8))&&!(a11==1))&&(a19==1))){
if((a11==1)){
a19 = 0;
a25 = 0;
a28 = 9;
}else{
a25 = 1;
a28 = 9;
}
printf("%d", 23);//return 23;
} else{
 if(((a21==1)&&((((a19==1)&&((a25==1)&&((a28==11)&&(input==6))))&&!(a11==1))&&(a17==8)))){
a28 = 10;
printf("%d",-1);//return -1;
} else{
 if((!(a11==1)&&((a19==1)&&((a28==10)&&(((((a25==1)||!(a25==1))&&(input==5))&&(a17==8))&&(a21==1)))))){
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if((((((a17==9)&&((((a25==1)||!(a25==1))&&(input==6))&&(a11==1)))&&(a19==1))&&(a21==1))&&(a28==9))){
a17 = 8;
a28 = 8;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if((((a17==8)&&(((((input==6)&&(a25==1))&&!(a19==1))&&!(a11==1))&&(a28==10)))&&(a21==1))){
printf("%d", 26);//return 26;
} else{
 if(((!(a19==1)&&((a17==8)&&(!(a11==1)&&((input==1)&&((((a28==10)&&!(a25==1))||((a25==1)&&(a28==11)))||(!(a25==1)&&(a28==11)))))))&&(a21==1))){
a28 = 7;
a25 = 1;
a19 = 1;
a17 = 7;
a11 = 1;
printf("%d", 22);//return 22;
} else{
 if((((((((input==1)&&(a21==1))&&(a28==9))&&!(a19==1))&&!(a25==1))&&(a17==8))&&!(a11==1))){
printf("%d", 23);//return 23;
} else{
 if(((a17==8)&&(((!(a11==1)&&((!(a25==1)&&(input==4))&&(a19==1)))&&(a28==7))&&(a21==1)))){
a28 = 9;
printf("%d", 23);//return 23;
} else{
 if((!(a11==1)&&(((a17==8)&&((((!(a25==1)&&(a28==11))||((!(a25==1)&&(a28==10))||((a28==11)&&(a25==1))))&&(input==3))&&(a21==1)))&&!(a19==1)))){
if((a25==1)){
a19 = 1;
a28 = 7;
a25 = 1;
a11 = 1;
}else{
a28 = 7;
a25 = 1;
}
printf("%d",-1);//return -1;
} else{
 if(((((!(a11==1)&&(((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))&&(input==5)))&&(a21==1))&&!(a19==1))&&(a17==8))){
a25 = 1;
a19 = 1;
a28 = 7;
printf("%d",-1);//return -1;
} else{
 if((((a17==9)&&(((((input==1)&&((a25==1)||!(a25==1)))&&(a11==1))&&(a21==1))&&(a19==1)))&&(a28==9))){
a28 = 7;
a17 = 8;
a25 = 0;
a11 = 0;
printf("%d",-1);//return -1;
} else{
 if((!(a11==1)&&((a19==1)&&(((((a28==9)&&(input==6))&&(a21==1))&&(a17==8))&&!(a25==1))))){
printf("%d", 23);//return 23;
} else{
 if(((a17==9)&&((a21==1)&&((a11==1)&&(((input==3)&&(((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||(!(a25==1)&&(a28==7)))))&&(a19==1)))))){
if((a19==1)){
a25 = 0;
a19 = 0;
a17 = 7;
a28 = 9;
a11 = 0;
}else{
a19 = 0;
a11 = 0;
a28 = 10;
a25 = 1;
a17 = 7;
}
printf("%d", 23);//return 23;
} else{
 if(((a28==7)&&((a17==8)&&(!(a25==1)&&((a21==1)&&((a19==1)&&((input==5)&&!(a11==1)))))))){
a25 = 1;
a28 = 8;
printf("%d", 21);//return 21;
} else{
 if(((a28==8)&&((a21==1)&&((!(a11==1)&&(((input==1)&&(a17==8))&&(a19==1)))&&(a25==1))))){
a28 = 10;
printf("%d", 26);//return 26;
} else{
 if((((((a17==8)&&(((input==6)&&((a25==1)||!(a25==1)))&&(a21==1)))&&(a28==10))&&!(a11==1))&&(a19==1))){
a25 = 0;
printf("%d", 22);//return 22;
} else{
 if(((!(a11==1)&&((!(a19==1)&&(((!(a25==1)&&(a28==11))||(((a28==10)&&!(a25==1))||((a25==1)&&(a28==11))))&&(input==5)))&&(a17==8)))&&(a21==1))){
a25 = 0;
a19 = 1;
a28 = 9;
printf("%d",-1);//return -1;
} else{
 if(((a17==8)&&(((a21==1)&&(!(a11==1)&&((a25==1)&&((a28==8)&&(input==6)))))&&(a19==1)))){
printf("%d", 26);//return 26;
} else{
 if((((a19==1)&&((a17==8)&&(((!(a25==1)&&(input==5))&&(a21==1))&&!(a11==1))))&&(a28==11))){
a28 = 7;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if(((a11==1)&&(((a17==9)&&((a28==9)&&((a19==1)&&(((a25==1)||!(a25==1))&&(input==5)))))&&(a21==1)))){
if((a11==1)){
a25 = 0;
a17 = 8;
}else{
a28 = 7;
a25 = 0;
a11 = 0;
a19 = 0;
a17 = 8;
}
printf("%d", 25);//return 25;
} else{
 if((((((((input==3)&&(a19==1))&&(a21==1))&&(a17==8))&&!(a25==1))&&(a28==11))&&!(a11==1))){
a25 = 1;
a11 = 1;
a28 = 10;
printf("%d",-1);//return -1;
} else{
 if(((a19==1)&&((a21==1)&&((((input==5)&&(((a25==1)&&(a28==8))||(((a28==7)&&(a25==1))||(!(a25==1)&&(a28==7)))))&&(a11==1))&&(a17==9))))){
if((a25==1)){
a11 = 0;
a19 = 0;
a25 = 1;
a28 = 10;
a17 = 8;
}else{
a17 = 8;
a25 = 1;
a11 = 0;
a28 = 8;
}
printf("%d", 22);//return 22;
} else{
 if((((a19==1)&&(((!(a11==1)&&(((a25==1)||!(a25==1))&&(input==3)))&&(a28==10))&&(a21==1)))&&(a17==8))){
a25 = 0;
printf("%d",-1);//return -1;
} else{
 if(((!(a11==1)&&(((((input==4)&&(a17==8))&&!(a25==1))&&(a21==1))&&(a28==11)))&&(a19==1))){
if((a11==1)){
a28 = 8;
a19 = 0;
}
printf("%d", 22);//return 22;
} else{
 if((((!(a19==1)&&(((input==4)&&(((!(a25==1)&&(a28==10))||((a28==11)&&(a25==1)))||(!(a25==1)&&(a28==11))))&&(a21==1)))&&(a17==8))&&!(a11==1))){
if((a17==7)){
a25 = 0;
a28 = 9;
}else{
a11 = 1;
a17 = 7;
a28 = 10;
a25 = 0;
a19 = 1;
}
printf("%d",-1);//return -1;
} else{
 if((!(a11==1)&&(((a17==8)&&((((a25==1)&&(input==4))&&(a19==1))&&(a28==11)))&&(a21==1)))){
a28 = 9;
a11 = 1;
a25 = 0;
printf("%d",-1);//return -1;
} else{
 if((((((a21==1)&&((((a28==8)&&!(a25==1))||((a28==9)&&(a25==1)))&&(input==6)))&&!(a11==1))&&!(a19==1))&&(a17==8))){
a19 = 1;
a11 = 1;
a17 = 7;
a28 = 7;
a25 = 1;
printf("%d",-1);//return -1;
} else{
 if(((a19==1)&&((((a21==1)&&((!(a25==1)&&(input==3))&&(a17==9)))&&(a28==8))&&(a11==1)))){
a25 = 1;
a11 = 0;
a17 = 8;
a28 = 7;
a19 = 0;
printf("%d",-1);//return -1;
} else{
 if(((a17==8)&&(((a21==1)&&(((input==5)&&((!(a25==1)&&(a28==8))||((a28==9)&&(a25==1))))&&(a19==1)))&&!(a11==1)))){
a11 = 1;
a19 = 0;
a25 = 1;
a17 = 7;
a28 = 9;
printf("%d",-1);//return -1;
} else{
 if(((a19==1)&&(((((a17==8)&&((input==5)&&!(a11==1)))&&(a21==1))&&(a25==1))&&(a28==8)))){
a28 = 11;
printf("%d", 23);//return 23;
} else{
 if((((!(a11==1)&&((((a21==1)&&(input==4))&&(a28==10))&&(a17==8)))&&!(a19==1))&&(a25==1))){
printf("%d", 22);//return 22;
} else{
 if(((a28==8)&&(((a19==1)&&((a11==1)&&(!(a25==1)&&((a17==9)&&(input==6)))))&&(a21==1)))){
if((a25==1)){
a17 = 8;
a11 = 0;
}else{
a28 = 11;
a17 = 7;
}
printf("%d", 21);//return 21;
} else{
 if((!(a11==1)&&((((a21==1)&&((input==6)&&((((a28==10)&&!(a25==1))||((a25==1)&&(a28==11)))||(!(a25==1)&&(a28==11)))))&&(a17==8))&&!(a19==1)))){
a28 = 11;
a19 = 1;
a25 = 1;
printf("%d", 22);//return 22;
} else{
 if((((((!(a25==1)&&((a19==1)&&(input==3)))&&(a28==9))&&(a21==1))&&(a17==8))&&!(a11==1))){
a19 = 0;
a28 = 7;
printf("%d", 25);//return 25;
} else{
 if((((a17==8)&&((((input==4)&&(((a28==8)&&!(a25==1))||((a25==1)&&(a28==9))))&&(a21==1))&&!(a19==1)))&&!(a11==1))){
a28 = 8;
a25 = 0;
printf("%d", 22);//return 22;
} else{
 if((((!(a11==1)&&((((a19==1)&&(input==5))&&(a17==8))&&(a21==1)))&&(a28==9))&&!(a25==1))){
printf("%d", 21);//return 21;
} else{
 if((((a11==1)&&((a19==1)&&((a21==1)&&(((a17==9)&&(input==5))&&!(a25==1)))))&&(a28==8))){
a17 = 7;
printf("%d",-1);//return -1;
} else{
 if((!(a11==1)&&((a21==1)&&(((a19==1)&&((a17==8)&&((a25==1)&&(input==5))))&&(a28==11))))){
printf("%d",-1);//return -1;
} else{
 if(((a19==1)&&((a17==8)&&(((((!(a25==1)&&(a28==8))||((a25==1)&&(a28==9)))&&(input==3))&&!(a11==1))&&(a21==1))))){
a25 = 0;
a28 = 10;
printf("%d", 22);//return 22;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if((((((!(a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==8))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==7))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==8))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==11))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==10))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==9))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==7))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&!(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==8))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&(a11==1))&&(a28==11))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if((((((!(a25==1)&&(a11==1))&&(a28==10))&&(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
if(((((((a25==1)&&!(a11==1))&&(a28==9))&&!(a19==1))&&(a21==1))&&(a17==7))){
printf("%d",-1);//return -1;
}
printf("%d",-2);//return -2;
}

int input, output;

int main()
{
kappa = 0;
// default output
int output = -1;

// main i/o-loop

for (int FLAG=0;FLAG<BOUND;FLAG++) {
int symb; scanf("%d",&symb);

// operate eca engine
output = calculate_output(symb);

}
return 0;

}
