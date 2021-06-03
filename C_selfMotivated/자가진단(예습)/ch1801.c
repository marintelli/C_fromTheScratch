# include <stdio.h>

int main()
{
    
    int sum, kor, eng;
    double avg;
    char name[100];
    
    FILE *in, *out;
    // 파일 포인터를 선언, 여기서 선언된 포인터 변수의 이름은 곧 스트림의 이름
    
    in = fopen("input.txt", "r");
    // input.txt 파일을 "읽기" 전용으로 오픈하고 in 이라는 스트림을 이용하여 연결
    out = fopen("output.txt", "w");
    // ouput.txt 파일을 "쓰기전용모드(기존 파일에 있던 자료는 삭제, 없으면 생성)
    
    
    fscanf(in, "%s %d %d", name, &kor, &eng);
    // 스트림 in과 연결된 파일(input.txt)로부터 자료를 입력받는다.
    // fscanf에서 stdin 위치에 사용자가 정의한 입력스트림을 넣어주면 그 선언된 곳으로부터
    
    sum = kor + eng;
    avg = (kor+eng) / 2.0;
    
    printf("%s %d %.1f\n", name, sum, avg);
    
    fprintf(out, "%s %d %.1f \n", name, sum, avg);
    // 스트림 out과 연결된 파일(output.txt)에 출력자료를 기록한다. fscanf와 같다.
    
    fclose(in);
    fclose(out);
    
    return 0;
    
}
*/

# include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    
    fscanf(stdin, "%d %d", &num1, &num2);
    
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }
    fprintf(stdout, "%d\n", sum);
    
    return 0;
}
