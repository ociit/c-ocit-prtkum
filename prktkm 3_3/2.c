#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int valid_operator = 1;
        //valid_operator diinisialisasi dengan logika 1
    char operator;
    float number1, number2, result;
    printf("Masukkan 2 buah bilangan & sebuah operator\n");

    printf("dengan format : number1 operator number2\n\n");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {
            case '*' : result = number1 * number2;
                printf("\n%g %c %g is %g\n", number1, operator,
                number2, result );
        break;
            case '/' : result = number1 / number2;
                printf("\n%g %c %g is %g\n", number1, operator,
                number2, result );
        break;
            case '+' : result = number1 + number2;
                printf("\n%g %c %g is %g\n", number1, operator,
                number2, result );
        break;
            case '-' : result = number1 - number2;
                printf("\n%g %c %g is %g\n", number1, operator,
                number2, result );
        break;
            default : printf("Invalid operator!\n");
    }

    return 0;
}


    // if(operator == '*')
    //     result = number1 * number2;
    // else if(operator == '/')
    //     result = number1 / number2;
    // else if(operator == '+')
    //     result = number1 + number2;
    // else if(operator == '-')
    //     result = number1 - number2;
    // else
    //     valid_operator = 0;
    // if(valid_operator)
    //     printf("\n%g %c %g is %g\n", number1, operator,
    //     number2, result );
    // else
    //     printf("Invalid operator!\n");


    // if(valid_operator)
    //     printf("\n%g %c %g is %g\n", number1, operator,
    //     number2, result );
    // else
    //     printf("Invalid operator!\n");