//
//  main.c
//  lar&sma of matrix
//
//  Created by sai sumanth on 5/26/18.
//  Copyright © 2018 sai sumanth. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[20][20],m,n,i,j,lar,sma;
    printf("enter m value\n");
    scanf("%d",&m);
    printf("enter n value\n");
    scanf("%d",&n);
    for(i=0;i<=m-1;++i)
    {
        for(j=0;j<=n-1;++j)
            scanf("%d",&a[i][j]);
    }
    lar=a[0][0];
    sma=a[0][0];
    for(i=0;i<=m-1;++i)
    {
        for(j=0;j<=n-1;++j)
        if(a[i][j]>lar)
            lar=a[i][j];
        if(a[i][j]<sma)
            sma=a[i][j];
    }
    printf("lar=%d",lar);
    printf("sma=%d",sma);
}
