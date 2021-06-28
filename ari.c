#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
string ari(string a){
  string s;
  int c_sen=0;
  int c_wor=0;
  int c_char=0;
  int length=strlen(a);
  for(int i=0;i<length;i++){
        if(isalnum(a[i])==8){
          c_char++;
         }
        if(a[i]== ' '){
          c_wor+=1;
         }
        if(a[i]=='.'||a[i]=='!'||a[i]=='?'){
          c_sen+=1;
         }
      }
   for(int i=0;i<length;i++){
        if(a[i]=='e'&&a[i+1]=='.'&&a[i+2]=='g'&&a[i+3]=='.'){
          c_sen-=1;
         }
      }
   for(int i=0;i<length;i++){
        if(a[i]=='-'){
          c_wor+=1;
       }
     }
   c_wor+=1;/* the last word will not be counted since it doesnot have a space after*/   
   float e1= (float)c_char/c_wor;
   float e2=(float)c_wor/c_sen;
   float n=4.71*e1+0.5*e2-21.43;
   int ari= (int) (n+1.00);/* truncating  the value*/
   switch(ari){
     case 1:
        s="Kindergarten";
        break;
     case 2:
        s="First/Second Grade";
        break;
     case 3: 
        s="Third Grade";
        break; 
     case 4:
        s="Fourth Grade";
        break;   
     case 5:
        s="Fifth Grade";
        break;  
     case 6:
        s="Sixth Grade";
        break;
     case 7:
        s="Seventh Grade";
        break;
     case 8:
        s="Eigth Grade";
        break;
     case 9:
        s="Ninth Grade";
        break;
     case 10:
        s="Tenth Grade";
        break;
     case 11:
        s="Eleventh Grade";
        break;
     case 12:
        s="Twelfth Grade";
        break;
     case 13:
        s="College student";
        break;
     case 14:
        s="Professor";
        break;
   }
  return s;
 }
