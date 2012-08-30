#include"a.h"

// pre-declaration
int add(int x, int y);

int main()
{
    printf("hello world! I'm tjuer!\n");
    printf("Welcome to github! %s\n", username());

    printf("This is a new feature added on 'featureA' branch!\n");

    printf("result is %d\n", add(1,6));

    return 0;
}

const char* username()
{
    return "supermonkey";
}

int add(int x, int y)
{
    return x+y;
}
