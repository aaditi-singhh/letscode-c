#include <stdio.h>

int main()
{
    int n,k;
    int safe_position;
    printf("Enter the number of persons :");
    scanf("%d",&n);
    printf("Enter the position where the person is sitting is killed : ");
    scanf("%d",&k);
    for(int i=2;i<=n;i++){
        safe_position =(safe_position+k)%i;
    }
    printf("the safe safe position in the table:%d\n",safe_position);
    return 0;

}






