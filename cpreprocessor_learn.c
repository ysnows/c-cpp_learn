

#define message_for_ab(a, b) printf(#a " and " #b ": I love you\n")

#define tokenPaster(n) printf("token"#n "= %d\n", token##n)

/* printf("Here is the message %s\n", MESSAGE);*/

#if !defined(MESSAGE)
#define MESSAGE "You wish"
#endif

/*
  int max = max(1100, 2020);
  printf("max = %d\n", max);
*/

#define max(a, b)((a) > (b) ? (a) : (b))


void preprocessorArichmetic() {


}


void printCPreProcessor() {


    printf("__DATE__ is %s\n", __DATE__);
    printf("__TIME__ is %s\n", __TIME__);
    printf("__FILE__ is %s\n", __FILE__);
    printf("__LINE__ is %d\n", __LINE__);
    printf("__STDC__ is %d\n", __STDC__);


#undef FILE_SIZE
#define FILE_SIZE 1024

#ifndef MESSAGE
#define MESSAGE "You wish"
#endif

    printf("%s\n", MESSAGE);

#ifdef DEBUG
    /*gcc main.c -DDEBUG*/
    printf("i'm debugging\n");
    /*Your debugging statements here*/
#endif
}
