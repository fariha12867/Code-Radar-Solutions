#include <stdio.h>
int main() {
   case '*':
        s = a * b;
        printf("%.0f",s);
        break;

        case '/':
        s = a / b;

        if(b == 0)
        {
            printf("error");
            break;
        }
        printf("%.0f",s);
        break;

        default:
        printf("error");
        break;

    }
    return 0;
