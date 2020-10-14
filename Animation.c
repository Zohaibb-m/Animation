#include <stdio.h>
#include <time.h>

void delay(int t){
clock_t start_time=clock();
while (clock() < start_time+t);
}

int main(){
printf("\033[2J");
int x,y;
//--------------------------------------------------------------------------------------------//
// CODE FOR "B"
B:
for (x=14,y=1;y<=125;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m \n",x,y-7);}
for (x=15,y=1;y<=126;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=15,y=1;y<=118;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=16,y=1;y<=126;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=16,y=1;y<=118;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=17,y=1;y<=125;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m \n",x,y-8);}
for (x=18,y=1;y<=126;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=18,y=1;y<=118;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=19,y=1;y<=126;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=19,y=1;y<=118;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x,y-1);}
for (x=20,y=1;y<=125;y++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m \n",x,y-8);}
goto H;
//------------------------------------------------------------------------------------------//
// CODE FOR I
//------------------------------------------------------------------------------------------//
I:
for (x=1,y=107;x<=20;x++){
printf("\033[%d;%dH\033[1;33m########\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m        \n",x-1,y);}
for (x=1,y=110;x<=19;x++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x-1,y);}
for (x=1,y=110;x<=18;x++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m  \n",x-1,y);}
for (x=1,y=110;x<=17;x++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m  \n",x-1,y);}
for (x=1,y=110;x<=16;x++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m  \n",x-1,y);}
for (x=1,y=110;x<=15;x++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m  \n",x-1,y);}
for (x=1,y=107;x<=14;x++){
printf("\033[%d;%dH\033[1;33m########\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m        \n",x-1,y);}
goto Z;
//-------------------------------------------------------------------------------------------//
// CODE FOR A
//-------------------------------------------------------------------------------------------//
A:
for (x=32,y=100;x>=14;x--){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m  \n",x+1,y);}
for (x=32,y=99;x>=15;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=102;x>=15;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=98;x>=16;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=103;x>=16;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=97;x>=17;x--){
printf("\033[%d;%dH\033[1;33m########\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m        \n",x+1,y);}
for (x=32,y=97;x>=18;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=104;x>=18;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=97;x>=19;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=104;x>=19;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=97;x>=20;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=104;x>=20;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
goto E;
//--------------------------------------------------------------------------------------------//
// CODE FOR H
//--------------------------------------------------------------------------------------------//
H:
for (x=14,y=1;y<=92;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=14,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=15,y=1;y<=92;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=15,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=16,y=1;y<=92;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=16,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=17,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m########\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m        \n",x,y-8);}
for (x=18,y=1;y<=92;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=18,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=19,y=1;y<=92;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=19,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
printf("\n\033[0m");
for (x=20,y=1;y<=92;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
for (x=20,y=1;y<=86;y++){
printf("\033[%d;%dH\033[1;33m##\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m  \n",x,y-2);}
goto I;
//---------------------------------------------------------------------------------------------//
// CODE FOR O
O:
for (x=1,y=76;x<=20;x++){
printf("\033[%d;%dH\033[1;33m######\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m      \n",x-1,y);}
for (x=1,y=82;x<=19;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=75;x<=19;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=82;x<=18;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=75;x<=18;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=82;x<=17;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=75;x<=17;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=82;x<=16;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=75;x<=16;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=82;x<=15;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=75;x<=15;x++){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(4000);
printf("\033[%d;%dH\033[1;33m \n",x-1,y);}
for (x=1,y=76;x<=14;x++){
printf("\033[%d;%dH\033[1;33m######\n",x,y);
delay(9000);
printf("\033[%d;%dH\033[1;33m      \n",x-1,y);}
goto A;
//---------------------------------------------------------------------------------------------//
//CODE FOR Z
Z:
for (x=32,y=64;x>=14;x--){
printf("\033[%d;%dH\033[1;33m########\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m        \n",x+1,y);}
for (x=32,y=70;x>=15;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=70;x>=15;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=69;x>=16;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=68;x>=17;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=67;x>=18;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=66;x>=19;x--){
printf("\033[%d;%dH\033[1;33m#\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m \n",x+1,y);}
for (x=32,y=64;x>=20;x--){
printf("\033[%d;%dH\033[1;33m########\n",x,y);
delay(5000);
printf("\033[%d;%dH\033[1;33m        \n",x+1,y);}
goto O;
//---------------------------------------------------------------------------------------------//
E:
printf("\033[36;3\n");
printf("\n\033[0m");
return 0;
}

//ye tou very nice code hay
