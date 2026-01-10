# Hashing / Hash Function（雜湊 / 雜湊函數）

## 1. Definition（定義）

Hashing 是一種將任意大小的資料映射到固定大小值（索引）的技術，  
透過 **Hash Function（雜湊函數）** 計算出 **Key → Index**，存放於 Hash Table（雜湊表）中。  

Hashing 目的是 **快速存取資料**，理想情況下可以達到 O(1) 的查找效率。

---

## 2. Characteristics（特性）

| 特性 | 說明 |
|----|----|
| 快速存取 | 理想情況下 O(1) |
| Key → Index 映射 | 透過雜湊函數計算索引 |
| 固定大小表 | Hash Table 大小固定（Array） |
| 碰撞可能 | 不同 Key 可能映射到相同 Index，需要 Collision Handling |

---

## 3. Time & Space Complexity（時間與空間複雜度）

### 時間複雜度（Time Complexity）

| 操作 | Big-O | 說明 |
|----|----|----|
| Insert | O(1) 平均 / O(n) 最壞 | 平均 O(1)，碰撞處理影響最壞情況 |
| Search | O(1) 平均 / O(n) 最壞 | 同上 |
| Delete | O(1) 平均 / O(n) 最壞 | 同上 |

---

### 空間複雜度（Space Complexity）

| 項目 | 複雜度 |
|----|----|
| Hash Table | O(n) |
| Collision Handling（鏈結串列） | O(n) |

---

## 4. Advantages & Disadvantages（優缺點）

### 優點
- 查找 / 插入 / 刪除平均效率高
- 適合大量資料存取
- 易於實現 Key → Value 對應（如字典、Map）

### 缺點
- 需要良好的 Hash Function
- 碰撞需要額外處理（如 Chaining 或 Open Addressing）
- 最壞情況效率低（碰撞太多或表過小）
- 不支持順序存取（無法按 Key 排序）

---

## 5. Use Cases（使用情境）

- 資料庫索引（Database Indexing）
- 快速查找 / 字典（Dictionary / Map）
- 密碼學（Cryptographic Hash）
- 唯一性驗證（如 HashSet）
- 快速去重 / 緩存系統（Cache）

---

## 6. Common Problems for Beginners（初次學習可能遇到的問題）

### 1️. 碰撞處理理解困難
- 初學者容易忽略不同 Key 可能映射到同一 Index  
- Chaining / Open Addressing 的邏輯容易搞混

### 2️. 選擇 Hash Function 不當
- 選擇簡單的 Hash 函數可能導致大量碰撞  
- 導致性能下降，查找退化成 O(n)

### 3. Hash Table 大小選擇
- Table 太小 → 碰撞頻繁  
- Table 太大 → 記憶體浪費  
- 初學者常忽略選擇質數大小或動態擴張策略

### 4. 不支持順序存取
- Hash Table 無法按 Key 排序  
- 初學者若想遍歷有序資料，常誤用 Hash Table 而遇到問題

### 5. 實務效能問題
- 高碰撞率會導致平均 O(n) 查找  
- 鏈結串列過長導致 Cache miss  
- 初學者常忽略負載因子（Load Factor）調整
