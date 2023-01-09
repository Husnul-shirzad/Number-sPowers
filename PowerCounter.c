//Coded by MUROAS, Follow us on social networks:
//Telegram: @HusShirzad https://t.me/HusShirzad

#include <stdio.h>
int po(int a, int b){
    int p=1;
    int i;
    for(i=0; i<b; i++){
        p*=a;
	}
    return p;
}
int main(){
    int a, b, c;
    printf("By this simple application you can find power of any numbers which are supported by your system. This simple app is easy to use.\n");
    printf("First you Enter The number you want to find thats power, then you enter power of that number and press enter, you will see the result.\n");
    printf("For example, if you want to find 2^3, you type 2 then take a space or press enter key and next enter 3, after that by pressing entere the result will prin.\n");
    printf("Take Attention: It has limitation.\n");
    printf("1: press 1 for calculation\n");
    printf("2: press any key to exit\n");
    scanf("%d", &c);
    if(c==1){
        printf("Enter your number: ");
        scanf("%d", &a);
        printf("Enter the power: ");
        scanf("%d", &b);
        printf("%d", po(a, b));
    }
    else{
        return 0;
    }
    return 0;
}

/*Main Sources:
Using while
------------------------------------------------------------------------------------------------------------
int po(int a, int b){
    int i=0, p=1;
    while (i< b){
        p*=a;
        i++;
    }
    return p;
}




Using do while
------------------------------------------------------------------------------------------------------------
int po(int a, int b){
    int i=0, p=1;
    do{
        p*=a;
        i++;
    }while (i < b);
    return p;
}




Using for
------------------------------------------------------------------------------------------------------------
#include <stdio.h>
int po(int a, int b){
    int p = 1;
    int i;
    for(i=0; i<b; i++){
        p*=a;
    }
    return 0;
}

int Main(){
    int a, b;
    printf("Enter The Number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    printf("%d", po(a, b));
    return 0;
}

*/
