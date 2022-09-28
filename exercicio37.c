//
//I=1 J=7
//I=1 J=6
//I=1 J=5
//I=3 J=9
//I=3 J=8
//I=3 J=7
//I=5 J=11
//I=5 J=10
//I=5 J=9
//...
//I=9 J=15
//I=9 J=14
//I=9 J=13
//

# include <stdio.h>

int main(){
    int acum;
    acum = 1;

    for(int i = 1; i<=9; i++){
        for (int j = 0; j < 3; ++j) {
            printf("I = %d ", i);
            printf("J = %d\n", acum++);
        }
    }

    return 0;
}