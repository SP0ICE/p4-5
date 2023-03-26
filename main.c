#include <stdio.h>
#include <math.h>
#define vektor1_length 15
#define vektor2_length 20
#define ugol 45
int main() {
double sk_proizvedenie;
sk_proizvedenie=vektor1_length*vektor2_length*cos(ugol);
printf("Skalyarnoe proizvednie vektorov s dlinami %d i %d ,ugol mezhdu kotorymi raven %d,raven %lf",vektor1_length,vektor2_length,ugol,sk_proizvedenie);}
