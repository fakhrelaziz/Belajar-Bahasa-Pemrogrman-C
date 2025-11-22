#include <stdio.h>
//#include <string.h>
enum Level {
     EASY,
     MEDIUM,
     HARD
};
  
int main() {
  enum Level myVar;
/*INI KALAU PAKAI STRING  
  char input[20];
  printf("=====Pilih Mode====\n 0. EASY\n 1. MEDIUM\n 2. HARD\n===================\n");
  scanf("%s", &input);
  if (strcmp(input, "MEDIUM") == 0){
     myVar = MEDIUM;
     printf("Kamu Memilih Mode: Level %d (Medium)",myVar);
  }else if (strcmp(input, "HARD") == 0){
     myVar = HARD;
     printf("Kamu Memilih Mode: Level %d (Hard)",myVar);
  }else if (strcmp(input, "EASY") == 0){
     myVar = EASY;
     printf("Kamu Memilih Mode: Level %d (Easy)",myVar);
  }
*/

/*INI KALAU TIDAK PAKAI FUNGSI STRING*/
     int input;
     printf("=====Pilih Mode====\n 0. EASY\n 1. MEDIUM\n 2. HARD\n===================\n");
     scanf("%d", &input);
     if (input >= 0 && input <= 2){
          myVar = input;
          if (myVar == 0)printf("Kamu Memilih Mode: Level %d (EASY)",myVar);
          if (myVar == 1)printf("Kamu Memilih Mode: Level %d (MEDIUM)",myVar);
          if (myVar == 2)printf("Kamu Memilih Mode: Level %d (HARD)",myVar);
     }else {
          printf("Tidak Valid input 0 sampai 2");
     }

  return 0;
}