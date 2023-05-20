#include <stdio.h>
#include <ctype.h>
#define MAX 500
void expand (char *s1, char *s2);
int main(){
    
  for(i = 0; i < 10; i++) {
	scanf("%s", &z);
	s1[i] = z;
  }
  char s1[MAX];
  char s2[MAX];
  s1[MAX]=gets();
  expand(s1,s2);
  printf("%s\n", s2);
  return 0;
}
void expand (char *s1, char *s2)
{
  int i,j;
  int k=0;
  for (i=j=0; s1[i] != '\0'; i++){
      if(s1[i] == ' '){
          s2[k++] = ' ';
            }
      else if(s1[i] == '-'){
          s2[k++] = '-';
        }
      else{
          for(j=s1[i]; j<=s1[i+2]; j++){
                  s2[k++]=j;
            }
 
          i+=2;
          if(s1[i+1]=='-' && isalnum(s1[i+2])){
              for(j=s1[i]; s1[i]!= ' '; i++){
                  if(s1[i]=='-'){
                      i++;
                    }
                  else{
                      for(--k; s1[i+1]!=' '; i++){
                          ;
                        }
                      while(j<=s1[i]){
                          s2[k++]=j++;
                        }
                      s2[k++]=' ';
                    }
                }
            }
        }
    }
} 
