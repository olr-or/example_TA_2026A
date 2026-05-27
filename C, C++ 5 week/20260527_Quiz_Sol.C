1.

아래 Example 참고하여 학생 5명 정보를 저장하는 프로그램을 작성하시오.

[조건]
- 구조체 사용
- 이름, 학번, 각 과목 점수 저장
- 함수 직접 정의 :: 평균 계산, 학점 계산, 최고 평균 학생 찾기
- 포인터를 이용해 구조체 배열 접근
- 전체 평균 출력

=================================================================================================
#include <stdio.h>

struct Student {
    char name[20];
    int id;
    int score[3];
    double average;
    char grade;
};

double calcAverage(int arr[], int size)
{
    int sum = 0;

    for(int i=0;i<size;i++)
        sum += arr[i];

    return (double)sum / size;
}

char getGrade(double avg)
{
    if(avg >= 90) return 'A';
    else if(avg >= 80) return 'B';
    else if(avg >= 70) return 'C';
    else return 'F';
}

int findTop(Student *s, int n)
{
    int idx = 0;

    for(int i=1;i<n;i++)
    {
        if((s+i)->average > (s+idx)->average)
            idx = i;
    }

    return idx;
}

int main()
{
    Student s[5];

    for(int i=0;i<5;i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].id);

        for(int j=0;j<3;j++)
            scanf("%d", &s[i].score[j]);

        s[i].average = calcAverage(s[i].score,3);
        s[i].grade = getGrade(s[i].average);
    }

    double total = 0;

    for(int i=0;i<5;i++)
    {
        total += s[i].average;

        printf("%s %d %.2f %c\n",
               s[i].name,
               s[i].id,
               s[i].average,
               s[i].grade);
    }

    int top = findTop(s,5);

    printf("TOP : %s\n", s[top].name);
    printf("TOTAL AVG : %.2f\n", total/5);

    return 0;
}
=================================================================================================

2.

다음 조건을 만족하는 프로그램을 작성하시오.

[조건]
- 사용자로부터 10개의 정수 입력
- 함수 직접 구현 :: 오름차순 정렬, 내림차순 정렬
- 포인터만 이용하여 배열 접근
- 가장 큰 값과 가장 작은 값 출력
- 중복 개수 출력

=================================================================================================
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void ascending(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(arr+i) > *(arr+j))
                swap(arr+i, arr+j);
        }
    }
}

void descending(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(arr+i) < *(arr+j))
                swap(arr+i, arr+j);
        }
    }
}

int main()
{
    int arr[10];

    for(int i=0;i<10;i++)
        scanf("%d", arr+i);

    ascending(arr,10);

    printf("ASC\n");

    for(int i=0;i<10;i++)
        printf("%d ", *(arr+i));

    printf("\n");

    descending(arr,10);

    printf("DESC\n");

    for(int i=0;i<10;i++)
        printf("%d ", *(arr+i));

    printf("\n");

    int dup = 0;

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(*(arr+i) == *(arr+j))
                dup++;
        }
    }

    printf("MAX : %d\n", *arr);
    printf("MIN : %d\n", *(arr+9));
    printf("DUP : %d\n", dup);

    return 0;
}
=================================================================================================

3.

외부 문자열 함수를 사용하지 않고 다음 기능을 직접 구현하시오.

- 문자열 길이 계산
- 대문자를 소문자로 변환
- 문자열 뒤집기
- 가장 많이 등장한 문자 출력

=================================================================================================
#include <stdio.h>

int myLength(char str[])
{
    int cnt = 0;

    while(str[cnt] != '\0')
        cnt++;

    return cnt;
}

void toLower(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        i++;
    }
}

void reverse(char str[])
{
    int len = myLength(str);

    for(int i=0;i<len/2;i++)
    {
        char t = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = t;
    }
}

char mostChar(char str[])
{
    int freq[256] = {0};

    int i = 0;

    while(str[i] != '\0')
    {
        freq[(int)str[i]]++;
        i++;
    }

    int max = 0;
    char c;

    for(i=0;i<256;i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            c = (char)i;
        }
    }

    return c;
}

int main()
{
    char str[100];

    scanf("%s", str);
    printf("%d\n", myLength(str));
    toLower(str);
    printf("%s\n", str);
    reverse(str);
    printf("%s\n", str);
    printf("%c\n", mostChar(str));

    return 0;
}
=================================================================================================

4.

다음 내용을 포함한 3X3 배열 행렬 프로그램을 작성하시오.

- 행렬 덧셈, 행렬 곱셈
- 전치행렬
- 대각합 계산
- 포인터를 이용한 2차원 배열 접근

=================================================================================================
#include <stdio.h>

void print(int (*arr)[3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ", *(*(arr+i)+j));

        printf("\n");
    }
}

int main()
{
    int A[3][3], B[3][3];
    int add[3][3] = {0};
    int mul[3][3] = {0};
    int trans[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d", &A[i][j]);
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d", &B[i][j]);
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            add[i][j] = A[i][j] + B[i][j];

            for(int k=0;k<3;k++)
                mul[i][j] += A[i][k] * B[k][j];

            trans[i][j] = A[j][i];
        }
    }

    int diag = 0;

    for(int i=0;i<3;i++)
        diag += A[i][i];

    print(add);
    print(mul);
    print(trans);

    printf("DIAG : %d\n", diag);

    return 0;
}
=================================================================================================

5.

다음 조건을 따른 은행 계좌 관리 프로그램을 작성하시오.

[조건]
- 구조체 배열 사용
- 계좌벊호, 이름, 잔액 저장
- 함수 직접 구현 :: 입금, 출금, 송금
- 잔액 부족 처리
- 최고 잔액 사용자 출력

=================================================================================================
#include <stdio.h>

struct Account {
    int number;
    char name[20];
    int balance;
};

void deposit(Account *a, int money)
{
    a->balance += money;
}

void withdraw(Account *a, int money)
{
    if(a->balance >= money)
        a->balance -= money;
    else
        printf("LACK\n");
}

void transfer(Account *a, Account *b, int money)
{
    if(a->balance >= money)
    {
        a->balance -= money;
        b->balance += money;
    }
}

int main()
{
    Account a[3] = {
        {100,"KIM",5000},
        {101,"LEE",7000},
        {102,"PARK",3000}
    };

    deposit(&a[0],2000);
    withdraw(&a[1],1000);
    transfer(&a[0],&a[2],1500);

    int max = 0;

    for(int i=1;i<3;i++)
    {
        if(a[i].balance > a[max].balance)
            max = i;
    }

    printf("%s %d\n", a[max].name, a[max].balance);

    return 0;
}
=================================================================================================

6.

아래 Example을 참고하여 5차 방정식 계산 프로그램을 작성하시오.

[조건]
- ax^5+bx^4+cx^3+dx^2+ex+f 형태

[구현]
- 계수 입력
- x 입력
- 함수로 다항식 계산
- 근사해 탐색 (-10 ~ 10 범위)
- 함수 직접 정의를 통한 제곱 계산

=================================================================================================
#include <stdio.h>

double power(double x, int n)
{
    double r = 1;

    for(int i=0;i<n;i++)
        r *= x;

    return r;
}

double poly(double a,double b,double c,
            double d,double e,double f,double x)
{
    return a*power(x,5)
         + b*power(x,4)
         + c*power(x,3)
         + d*power(x,2)
         + e*x + f;
}

double absValue(double x)
{
    if(x < 0)
        return -x;

    return x;
}

int main()
{
    double a,b,c,d,e,f,x;

    scanf("%lf %lf %lf %lf %lf %lf",
          &a,&b,&c,&d,&e,&f);

    scanf("%lf",&x);

    printf("%.2lf\n",
           poly(a,b,c,d,e,f,x));

    for(double i=-10;i<=10;i+=0.01)
    {
        double y = poly(a,b,c,d,e,f,i);

        if(absValue(y) < 0.001)
            printf("ROOT : %.3lf\n", i);
    }

    return 0;
}
=================================================================================================

7.

다음 조건을 만족하는 프로그램을 작성하시오.

[조건]
- 5차 함수 정의
- 함수 포인터 사용 금지
- 근사해 탐색
- 오차범위는 + - 0.001
- 반복문 기반 탐색 구현
- 실근 개수 출력
- 최댓값, 최솟값 위치 추정
- 미분 함수 직접 구현
- 절댓값 함수 직접 구현

=================================================================================================
#include <stdio.h>

double absValue(double x)
{
    if(x < 0)
        return -x;

    return x;
}

double power(double x, int n)
{
    double r = 1;

    for(int i=0;i<n;i++)
        r *= x;

    return r;
}

double func(double x)
{
    return power(x,5)
         - 3*power(x,4)
         + 2*power(x,3)
         - x + 1;
}

double derivative(double x)
{
    return 5*power(x,4)
         - 12*power(x,3)
         + 6*power(x,2)
         - 1;
}

int main()
{
    int rootCount = 0;

    for(double x=-10;x<=10;x+=0.001)
    {
        if(absValue(func(x)) < 0.001)
        {
            printf("ROOT : %.3lf\n", x);
            rootCount++;
        }
    }

    printf("COUNT : %d\n", rootCount);

    double maxX = -10;
    double minX = -10;

    for(double x=-10;x<=10;x+=0.01)
    {
        if(func(x) > func(maxX))
            maxX = x;

        if(func(x) < func(minX))
            minX = x;
    }

    printf("MAX X : %.2lf\n", maxX);
    printf("MIN X : %.2lf\n", minX);

    return 0;
}
=================================================================================================

8.

이레 Example을 참고하여 아래 조건을 만족하는 프로그램을 작성하시오.

[조건]
- 구조체 사용
- 책 제목, 저자, 대출 여부를 확인할 수 있어야 함
- 함수 :: 책 추가. 책 검색, 대출, 반납
- 포인터 기반 구조체 접근
- 가장 많이 대출된 책 출력
- 전체 대출 게산
- 정렬 기능 구현
- 메뉴 기반 반복 시스템 구현

=================================================================================================
#include <stdio.h>

struct Book {
    char title[50];
    char author[30];
    int borrow;
    int count;
};

void addBook(Book *b, int idx)
{
    scanf("%s", b[idx].title);
    scanf("%s", b[idx].author);

    b[idx].borrow = 0;
    b[idx].count = 0;
}

void printBooks(Book *b, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %s %d %d\n",
               b[i].title,
               b[i].author,
               b[i].borrow,
               b[i].count);
    }
}

void borrowBook(Book *b, int n, char name[])
{
    for(int i=0;i<n;i++)
    {
        int j = 0;
        int same = 1;

        while(name[j] != '\0' || b[i].title[j] != '\0')
        {
            if(name[j] != b[i].title[j])
            {
                same = 0;
                break;
            }

            j++;
        }

        if(same == 1)
        {
            if(b[i].borrow == 0)
            {
                b[i].borrow = 1;
                b[i].count++;
            }
        }
    }
}

void returnBook(Book *b, int n, char name[])
{
    for(int i=0;i<n;i++)
    {
        int j = 0;
        int same = 1;

        while(name[j] != '\0' || b[i].title[j] != '\0')
        {
            if(name[j] != b[i].title[j])
            {
                same = 0;
                break;
            }

            j++;
        }

        if(same == 1)
            b[i].borrow = 0;
    }
}

int main()
{
    Book b[100];

    int n = 0;
    int menu;

    while(1)
    {
        scanf("%d",&menu);

        if(menu == 1)
        {
            addBook(b,n);
            n++;
        }

        else if(menu == 2)
        {
            printBooks(b,n);
        }

        else if(menu == 3)
        {
            char name[50];
            scanf("%s",name);

            borrowBook(b,n,name);
        }

        else if(menu == 4)
        {
            char name[50];
            scanf("%s",name);

            returnBook(b,n,name);
        }

        else if(menu == 0)
            break;
    }

    int max = 0;

    for(int i=1;i<n;i++)
    {
        if(b[i].count > b[max].count)
            max = i;
    }

    printf("BEST : %s\n", b[max].title);

    return 0;
}
=================================================================================================
