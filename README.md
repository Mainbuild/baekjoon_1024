# baekjoon_1024
문제경로 : https://www.acmicpc.net/problem/1024

해당 문제에서는 합이 N을 무조건 만족시켜야 하고 길이가 최소 L이 되어야 한다
N = x+1+x+2...+x+L 이다.
여기서 이를 요약하면 N=Lx+L*(L+1)/2이 된다. L로 %==0일 경우 x+1~x+L까지 출력하면 됨.
