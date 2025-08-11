// 🟢 다익스트라 기반 로봇 경로 탐색
// 배경: 창고에서 로봇이 최단 경로로 목적지까지 이동해야 합니다.
// cpp문제: 가중치가 있는 그래프에서 시작점 S에서 목적지 G까지의 최단 거리를 구하시오.

// 입력:
// 6 8 0 5        // 6개 노드, 8개 간선, 시작점 0, 목적지 5
// 0 1 4          // 노드 0에서 1로 가는 비용 4
// 0 2 2          // 노드 0에서 2로 가는 비용 2
// 1 2 1
// 1 3 5
// 2 3 8
// 2 4 10
// 3 4 2
// 3 5 6

// 출력: 14       // 최단 거리

// ================================
// 문제 2: 다익스트라 기반 로봇 경로 탐색 (priority_queue)
// ================================

#include <bits/stdc++.h>

using namespace std;

void dijkstra()
{
    int n, m, start, end;
    cin >> n >> m >> start >> end;
    
    // 그래프 전체를 인접 리스트로 구성하는 핵심 구조
    vector<vector<pair<int, int>>> graph(n); // 노드 개수 n

    // m개의 간선을 입력받아 그래프 구성
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w}); // u → v 간선
        graph[v].push_back({u, w}); // v → u 간선 (양방향)
    }
    
    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty())
    {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (d > dist[u]) continue;
        
        for (auto& edge : graph[u])
        {
            int v = edge.first;
            int w = edge.second;
            
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    cout << dist[end] << "\n";
}

int main(){
    dijkstra();
    return 0;
}