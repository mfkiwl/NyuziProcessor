#include <stdio.h>

int main()
{
    printf("<%d>\n", 12345678); // CHECK: <12345678>
    printf("<%d>\n", -2);   // CHECK: <-2>
    printf("<%u>\n", 452345), // CHECK: <452345>
    printf("<%u>\n", -2);  // CHECK: <4294967294>
    printf("<%Ld>\n", 37036629630LL); // CHECK: <37036629630>
    printf("<%Ld>\n", -37036629630LL); // CHECK: <-37036629630>
    printf("<%Lu>\n", 37036629630LL); // CHECK: <37036629630>
    printf("<%Lu>\n", -37036629630LL); // CHECK: <18446744036672921986>
    printf("<%x>\n", 0x762); // CHECK: <762>
    printf("<%08d>\n", 1234); // CHECK: <00001234>
    printf("<%09x>\n", 0x847); // CHECK: <000000847>
    printf("<%8d>\n", 1234); // CHECK: <    1234>
    printf("<%9x>\n", 0x789); // CHECK: <      789>
    printf("<%s>\n", "foo");  // CHECK: <foo>
    printf("<%.4s>\n", "poiuytre"); // CHECK: <poiu>
    // XXX padding not supported

    printf("<%g>\n", 1.5); // CHECK: <1.5>
    printf("<%f>\n", 2.25); // CHECK: <2.25>
    printf("<%f>\n", 0.5); // CHECK: <0.5>
    printf("<%f>\n", 4.0); // CHECK: <4.0>
    printf("<%c%c%c%c>\n", 'a', 'b', 'c', 'd'); // CHECK: <abcd>
}
