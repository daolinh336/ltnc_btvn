#include <stdio.h>
#include<bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function
    int k = *a;
    *a = ( *a + *b);
    *b = abs( k - *b );

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

