#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(void const *pa, void const *pb){
	char *a = *(char **) pa;
	char *b = *(char **) pb;
	return strcmp(a, b);
}

int main(){
	int n, i;
	scanf("%d", &n);

	char **s, t[123]; 
	s = (char **) malloc(n * sizeof(char *));
	
	for(i = 0; i < n; i++){
		scanf("%s", t);
		s[i] = strdup(t);
	}

	qsort(s, n, sizeof(char *), cmp);

	for(i = 0; i < n; i++){
		printf("%s\n", s[i]);
	}

}
