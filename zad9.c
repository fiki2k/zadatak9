// Zadatak je pronaci palindrome u zadanom intevalu.

#include<stdio.h>
int main(){
   int br, rem, reverse_br, temp, pocetak, kraj;

	//Korisnik unosi gornju i donju granicu.
   printf("Unesi donju granicu: ");
   scanf("%d",&pocetak);

   printf("Unesi gornju granicu: ");
   scanf("%d",&kraj);

   printf("Palindromi izmedu %d i %d su: ",pocetak,kraj);
   for(br=pocetak;br<=kraj;br++){
      temp=br;
      reverse_br=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_br=reverse_br*10+rem;
      }
      if(br==reverse_br)
         printf("%d ",br);
   }
   return 0;
}
