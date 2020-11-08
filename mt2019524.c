#include "stm32f4xx.h"
#include <string.h>
#include<stdio.h>
void printand(const int a)
{
         
	  char *pr;
	  char msg[100];
	 sprintf(msg,"\nAND FUNcTION");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", a);
	 pr = msg ;
   }

	 void printOr(const int a)
{
	 char msg[100];
	 char *pr;
	 sprintf(msg,"\nOR FUNCTION");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", a);
	 pr = msg ;
   }

void printNot(const int a)
{
	 char msg[100];
	 char *pr;
	 sprintf(msg,"\nNOT FUNCTION");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", a);
	 pr = msg ;
   }	

void printNand(const int a)
{
	 char msg[100];
	 char *pr;
	 sprintf(msg,"\nNAND FUNCTION");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", a);
	 pr = msg ;
   }	 

void printNor(const int a)
{
	 char msg[100];
	 char *pr;
	 sprintf(msg,"\nNOR FUNCTION");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", a);
	 pr = msg ;
   }	 

void printmsg4p(const int a, const int b, const int c, const int d)
{
	 char msg[100];
	 char *pr;
	sprintf(msg,"\n ");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", a);
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg,"\t ");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", b);
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg,"\t ");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", c);
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg,"\t ");
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
   }
	 sprintf(msg, "%x", d);
	 pr = msg ;
   while(*pr != '\0')
	 {
      ITM_Sendchar(*pr);
      ++pr;
	 }
	
}
