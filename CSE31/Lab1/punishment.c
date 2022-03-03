#include <stdio.h>

int main(){

int punishrep,typorep;

printf("Enter the number of repetitions for the punishment phrase: ");
scanf("%d", &punishrep);
if(punishrep < 0){
     printf("\nYou entered an invalid value for the number of repetitions!\n");
      return -1;
}
char *ar[punishrep];

printf("Enter the repetition count when you wish to introduce a typo: ");
scanf("%d\n", &typorep);
if(typorep<0){
     printf("\nYou entered an invalid value for the number of typo placement!\n");
      return -1;
}

for(int i=1;i<=punishrep;i++){
    if (i==typorep){
        ar[i]= ("C programming lnguage is the bet!");
    }else{
    ar[i]=("C programming language is the best! ");
    }
    printf("%s ",ar[i]);
    }
    printf("\n");
   
    
return 0;

}