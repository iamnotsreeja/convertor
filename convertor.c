#include <stdio.h>

int main()
 {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int iF; 
  int iC; 
  int iUSDtoINR; 
  int iUSDtoEuro; \
  int iOunce; 
  int iGram; 
  int FtoC; 
  int CtoF; 
  float USDtoEuro ; 
  float USDtoINR;
  float ounceToPounds; 
  float gramsToPounds;

   printf("\n\nWelcome to Unit Converter!\n \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);

  if(category == 'T')
  {
      printf("\n\nWelcome to Temperature Converter! \n\n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1)
      {
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&iF);
          FtoC =  ((iF-32) * (5.0/9.0));
          printf("Celcius: %d",FtoC);
      }
      else if(tempChoice == 2)
      {
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&iC);
        CtoF = ((9.0/5.0)*iC + 32);
        printf("Fahrenheit: %d",CtoF);
      }
      else
        printf("The choice is wrong \n");
  }

   else if(category == 'C') 
   {
      printf("\n\nWelcome to Currency Converter! \n\n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to INR. \n");
      printf("Enter 2 for USD to Euro. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1)
      {
          printf("Please enter the USD amount: \n");
          scanf("%d",iUSDtoINR);
          USDtoINR = iUSDtoINR * 82.06;
          printf("INR: %.2f",USDtoINR); 
      }
      else if(currencyChoice == 2)
      {
          printf("Please enter the USD amount: \n");
          scanf("%d",&iUSDtoEuro);
          USDtoEuro = iUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEuro);
      }
      else
        printf("The choice is wrong \n");
  }

  else if(category == 'M')
  {
      printf("\n\nWelcome to Mass Converter!\n \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&iOunce);
          ounceToPounds = iOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) 
      {
          printf("Please enter the gram amount: \n");
          scanf("%d",&iGram);
          gramsToPounds = iGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("The choice is wrong \n");
   }
  return 0;
}

