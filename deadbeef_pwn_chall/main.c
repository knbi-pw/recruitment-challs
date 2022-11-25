#include <stdio.h>
#include <stdint.h>

char *flag = "\xe0\xe5\xe9\xe2\xd0\xc9\xde\xcd\xcd\xce\xd9\xf4\xc4\xdd\xce\xd9\xcd\xc7\xc4\xdc\xf4\xc2\xd1\xf4\xd9\xc7\xd2\xf4\xce\xd1\xd6";

void turbo_decryptor(){
	char decrypted[31];
	for(int i=0; i<31; ++i){
		decrypted[i] = (char)(((uint8_t)flag[i])^((uint8_t)0xab));
	}
	printf("There you go: %s\n", decrypted);
	
}

int main(){
	int val = 1337;
	char buffer[10];

	puts("What's your name?");
	scanf("%s", buffer);

	if(val == 0x41424344){
		puts("That's correct!");
		turbo_decryptor();
	}
	else{
		puts("That's not it... Bye!");
	}
	return 0;
}
