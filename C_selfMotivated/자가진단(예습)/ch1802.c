/*
# include <stdio.h>

int main()
{
    
    int su[10], i;
    
    FILE *fin, *fout;
    
    fin = fopen("./temp/input.txt","r");
    fout = fopen("./temp/output.txt", "w");
    
    
    for (int i = 0; i < 10 ; i++) {
        fscanf(fin, "%d", &su[i]);
    }
    
    for (int i = 1; i < 10 ; i += 2) {
        fprintf(fout, "%d ", su[i]);
    }
    
    
    fprintf(fout, "\n");
    
    fclose(fin);
    fclose(fout);
}

*/


# include <stdio.h>

int main()
{
    
    double su[10];
    int i;
    
    FILE *fin, *fout;
    
    fin = fopen("./temp/input.txt","r");
    fout = fopen("./temp/output.txt", "w");
    
    
    for (int i = 0; i < 10 ; i++) {
        fscanf(fin, "%lf", &su[i]);
    }
    
  
    fprintf(fout, "%.1f", (su[0]+su[9])/2);
    
    
    fprintf(fout, "\n");
    
    fclose(fin);
    fclose(fout);
}


