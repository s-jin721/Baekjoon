# 입력 받기
N, M = map(int, input().split())
heard = set(input().strip() for _ in range(N))
seen = set(input().strip() for _ in range(M))

# 듣도 보도 못한 사람 = 교집합
result = sorted(heard & seen)

# 결과 출력
print(len(result))
for name in result:
    print(name)
