# Graph（圖）

## 1. Definition（定義）

Graph（圖）是一種 **非線性資料結構（Non-linear Data Structure）**，  
由 **頂點（Vertex / Node）** 和 **邊（Edge）** 組成，用於表示元素之間的關聯。  

- **Directed Graph（有向圖）**：邊有方向，(u → v)  
- **Undirected Graph（無向圖）**：邊無方向，(u — v)  
- **Weighted Graph（帶權圖）**：邊有權重（Cost / Distance / Capacity）  
- **Unweighted Graph（無權圖）**：邊沒有權重  
- **Cyclic / Acyclic**：是否存在迴圈  
- **Connected / Disconnected**：是否所有節點可互相到達  

Graph 常用於社交網路、路徑搜尋、網路建模、資源依賴圖等。

---

## 2. Characteristics（特性）

| 特性 | 說明 |
|----|----|
| 非線性結構 | 節點之間可能有多條邊，非層級結構 |
| 類型多樣 | Directed / Undirected, Weighted / Unweighted, Cyclic / Acyclic |
| 表示方式 | Adjacency Matrix / Adjacency List / Edge List |
| 適合表達關係 | 用於網路、路徑、依賴關係等 |

---

## 3. Time & Space Complexity（時間與空間複雜度）

### 時間複雜度（Time Complexity）

| 操作 | Big-O | 說明 |
|----|----|----|
| Add Vertex | O(1) | 對 List 表示，矩陣則 O(V^2) |
| Add Edge | O(1) 平均 / O(V) 矩陣 | List 表示，矩陣可能需更新 row/col |
| Remove Vertex | O(V+E) | List 表示需移除相關邊 |
| Remove Edge | O(E) | List 表示需搜尋邊 |
| BFS / DFS | O(V+E) | V: 節點數, E: 邊數 |
| Shortest Path（Dijkstra） | O((V+E) log V) | 使用優先隊列實作 |

---

### 空間複雜度（Space Complexity）

| 表示方式 | 複雜度 | 說明 |
|----|----|----|
| Adjacency Matrix | O(V^2) | 適合稠密圖 |
| Adjacency List | O(V + E) | 適合稀疏圖 |
| Edge List | O(E) | 儲存邊清單 |

---

## 4. Advantages & Disadvantages（優缺點）

### 優點
- 可表示任意元素間關係
- 支援路徑搜尋、最短路徑、圖演算法
- 表示多種圖型：有向 / 無向、帶權 / 無權

### 缺點
- 空間消耗大（矩陣表示 O(V^2)）
- 圖演算法較複雜
- 操作 (添加/刪除節點/邊) 較線性結構慢

---

## 5. Use Cases（使用情境）

- 社交網路分析（Friend / Follow Graph）  
- 網路路徑規劃（Shortest Path, Routing）  
- 依賴關係分析（Task Scheduling / Build Systems）  
- 網頁爬蟲 / 網頁排名（PageRank）  
- 遊戲 AI / 地圖導航  

---

## 6. Common Problems for Beginners（初次學習可能遇到的問題）

### 1. 表示方式混淆
- Adjacency Matrix 適合稠密圖，佔用 O(V^2) 空間  
- Adjacency List 適合稀疏圖，但操作邊需遍歷 list  
- 初學者常混用，造成效率低下

### 2. Directed vs Undirected 辨識錯誤
- 對有向圖操作 BFS / DFS 時方向性要注意  
- 初學者可能漏掉反向邊，導致遍歷不完全

### 3. 循環與連通性判斷困難
- Detect Cycle / Connected Component 的邏輯容易錯  
- DFS / BFS 未正確標記 visited，會無限迴圈

### 4. 加權邊處理錯誤
- Weighted Graph 的 Dijkstra / Bellman-Ford 等算法需要正確使用邊權重  
- 初學者容易忽略負權邊或使用錯誤資料結構

### 5. BFS / DFS 遞迴或隊列管理問題
- DFS 遞迴深度過大可能 Stack Overflow  
- BFS 需正確使用 Queue，避免重複加入節點

### 6. 特殊圖型陷阱
- Sparse / Dense 圖對時間複雜度差異大  
- DAG（有向無環圖）拓撲排序需注意入度 / 拓撲順序  
- 初學者常忽略邊界條件，導致算法錯誤
