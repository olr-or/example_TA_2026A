1.
아래 Example 참고하여 학생 5명 정보를 저장하는 프로그램을 작성하시오.

[조건]
- 구조체 사용
- 이름, 학번, 각 과목 점수 저장
- 함수 직접 정의 :: 평균 계산, 학점 계산, 최고 평균 학생 찾기
- 포인터를 이용해 구조체 배열 접근
- 전체 평균 출력 

#include <stdio.h>

struct Student {
    int id;
    char grade;
    int score[3];
    double average;
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

int main()
{
    Student s;

    s.id = 1001;

    s.score[0] = 95;
    s.score[1] = 88;
    s.score[2] = 91;

    s.average = calcAverage(s.score, 3);
    s.grade = getGrade(s.average);

    printf("%d %.2f %c\n", s.id, s.average, s.grade);

    return 0;
}


2.
다음 조건을 만족하는 프로그램을 작성하시오.

[조건]
- 사용자로부터 10개의 정수 입력
- 함수 직접 구현 :: 오름차순 정렬, 내림차순 정렬
- 포인터만 이용하여 배열 접근
- 가장 큰 값과 가장 작은 값 출력
- 중복 개수 출력

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    int arr[5] = {5,2,9,1,3};

    sort(arr,5);

    for(int i=0;i<5;i++)
        printf("%d ", arr[i]);

    return 0;
}


3.
외부 문자열 함수를 사용하지 않고 다음 기능을 직접 구현하시오.

- 문자열 길이 계산
- 대문자를 소문자로 변환
- 문자열 뒤집기
- 가장 많이 등장한 문자 출력

#include <stdio.h>

int myLength(char str[])
{
    int cnt = 0;

    while(str[cnt] != '\0')
        cnt++;

    return cnt;
}

int main()
{
    char str[100] = "APPLE";

    printf("%d\n", myLength(str));

    return 0;
}


4. 
다음 내용을 포함한 3X3 배열 행렬 프로그램을 작성하시오.

- 행렬 덧셈, 행렬 곱셈
- 전치행렬
- 대각합 계산
- 포인터를 이용한 2차원 배열 접근

#include <stdio.h>

void printMatrix(int arr[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }
}

int main()
{
    int A[2][2] = {{1,2},{3,4}};
    int B[2][2] = {{5,6},{7,8}};
    int C[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            C[i][j] = A[i][j] + B[i][j];
    }

    printMatrix(C);

    return 0;
}


5.
다음 조건을 따른 은행 계좌 관리 프로그램을 작성하시오.

[조건]
- 구조체 배열 사용
- 계좌벊호, 이름, 잔액 저장
- 함수 직접 구현 :: 입금, 출금, 송금
- 잔액 부족 처리
- 최고 잔액 사용자 출력

#include <stdio.h>

struct Account {
    int number;
    int balance;
};

void deposit(Account *a, int money)
{
    a->balance += money;
}

int main()
{
    Account a;

    a.number = 100;
    a.balance = 5000;

    deposit(&a, 2000);

    printf("%d\n", a.balance);

    return 0;
}


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

#include <stdio.h>

int power(int x, int n)
{
    int result = 1;

    for(int i=0;i<n;i++)
        result *= x;

    return result;
}

int main()
{
    int x = 2;

    int result = 3*power(x,2) + 2*x + 1;

    printf("%d\n", result);

    return 0;
}


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

#include <stdio.h>

double func(double x)
{
    return x*x - 4;
}

int main()
{
    for(double x=-5;x<=5;x+=0.5)
    {
        if(func(x) < 1 && func(x) > -1)
            printf("%.2f\n", x);
    }

    return 0;
}


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

#include <stdio.h>

struct Product {
    int id;
    int price;
};

void print(Product *p)
{
    printf("%d %d\n", p->id, p->price);
}

int main()
{
    Product p;

    p.id = 1;
    p.price = 5000;

    print(&p);

    return 0;
}
