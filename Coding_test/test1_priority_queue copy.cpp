// 🟢 priority_queue 활용 문제
// 문제 1: 로봇 작업 스케줄링 시스템
// 배경: 산업용 로봇이 여러 작업을 우선순위에 따라 처리해야 합니다.
// cpp문제: N개의 작업이 주어지고, 각 작업은 (우선순위, 처리시간, 작업ID)를 가집니다.
// 우선순위가 높은 작업부터 처리하되, 우선순위가 같으면 처리시간이 짧은 것부터 처리합니다.
// 모든 작업이 완료되는 순서를 출력하시오.

// 입력:
// 5
// 3 10 A    // 우선순위 3, 처리시간 10, 작업ID A
// 1 5 B     // 우선순위 1, 처리시간 5, 작업ID B  
// 3 8 C     // 우선순위 3, 처리시간 8, 작업ID C
// 2 12 D    // 우선순위 2, 처리시간 12, 작업ID D
// 1 3 E     // 우선순위 1, 처리시간 3, 작업ID E

// 출력: E B D C A //비교 연산자 오버로딩

// #include <bits/stdc++.h>

// using namespace std;

// struct Task
// {
//     int prior;
//     int time;
//     char id;

//     bool operator<(const Task& other) const
//     {
//         if(prior != other.prior)
//         {
//             // 우선순위 숫자가 작을수록 높은 우선순위 (1 > 2 > 3)
//             // priority_queue는 최대힙이므로 작은 숫자가 높은 우선순위가 되려면 반대로 비교
//             return prior > other.prior;  // 숫자가 작은 우선순위가 먼저 처리됨
//         }
//         // 같은 우선순위면 처리시간이 짧은 것이 높은 우선순위
//         return time > other.time;        // 시간이 짧은 것이 먼저 처리됨
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;
    
//     priority_queue<Task> pq;  // Task를 저장하는 우선순위 큐
    
//     // n개의 작업 입력받기
//     for(int i = 0; i < n; i++)
//     {
//         int priority, time;
//         char id;
//         cin >> priority >> time >> id;
        
//         pq.push({priority, time, id});  // 구조체 초기화하여 큐에 추가
//     }
    
//     // 우선순위 순서대로 작업 처리
//     while(!pq.empty())
//     {
//         Task currentTask = pq.top();  // 가장 높은 우선순위 작업 가져오기
//         pq.pop();                     // 큐에서 제거
        
//         cout << currentTask.id;       // 작업 ID 출력
        
//         if(!pq.empty())              // 마지막 작업이 아니면 공백 추가
//         {
//             cout << " ";
//         }
//     }
//     cout << "\n";  // 마지막에 개행
    
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

struct Task
{
    int prior;
    int time;
    char id;

    bool operator<(const Task& other) const
    {
        if(prior != other.prior)
        {
            return prior > other.prior;
        }
        return time > other.time;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Task> pq;

    for(int i=0 ; i<n ; i++)
    {
        int prior, time;
        char id;

        cin >> prior >> time >> id;
        pq.push({prior, time, id});
    }


    while(!pq.empty())
    {
        Task currentTask = pq.top();
        pq.pop();

        cout << currentTask.id;

        if(!pq.empty())
        {
            cout << ' ';
        }
    }
    cout << '\n';

    return 0;
}