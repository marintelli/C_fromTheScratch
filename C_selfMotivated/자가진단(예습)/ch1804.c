/*
#include <stdio.h>
#include <string.h>

int main()
{
    char st[101], dst[50][101];
    int len;
    int cnt1 = 0, cnt2 = 0;
    int i;
    
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    fgets(st, 101, in);
    
    len = strlen(st);
    
    while(st[len-1]== '\n' || st[len-1] =='\r')
    {
        st[--len] = '\0';
    }
    
    for (i = 0; i <= len; i++) {
        if(st[i] == ' ' || st[i] =='\0'){
            dst[cnt1][cnt2] = '\0';
            cnt1++;
            cnt2 = 0;
        } else {
            dst[cnt1][cnt2] = st[i];
            cnt2++;
            
        }
    }
    
    for (i = 0; i < cnt1; i++) {
        fputs(dst[i], out);
        fputc('\n', out);
        
    }
    
    fclose(in);
    fclose(out);
    
}
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char st[101], dst[101];
    int len1, len2;
    
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    fgets(st, 101, in);
    fgets(dst, 101, in);
    
    len1 = strlen(st);
    len2 = strlen(dst);
    
    if(len1>len2){
        fputs(dst, out);
        fputs(st, out);
    } else {
        fputs(st, out);
        fputs(dst, out);
    }

        
    fclose(in);
    fclose(out);
}


