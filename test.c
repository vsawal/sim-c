#include <stdio.h>

int a(int b) {

	return 1;
}

int main() {
	int a_var = 10;
	int a = a_var << 1;
	a = 1 >> a;
	if(a < 4) {
	a++;
	}
	while(a(1)) {
	a_var = a_var - 1;
	printf("yolo");
	}
	for(int i = 1; i < 10; i+=1) {
	printf("%d", i);
	}

	return 0;
}