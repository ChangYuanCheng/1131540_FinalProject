# Tree（樹）

## 1. Definition（定義）

Tree（樹）是一種 **非線性資料結構（Non-linear Data Structure）**，  
由 **節點（Node）** 組成，節點之間存在 **父子關係（Parent-Child）**。  

樹的頂端節點稱為 **Root（根節點）**，沒有子節點的節點稱為 **Leaf（葉節點）**。  

常見樹型：

| 樹類型 | 定義 |
|----|----|
| Binary Tree（二元樹） | 每個節點最多有兩個子節點（左子節點、右子節點） |
| Binary Search Tree（BST） | 左子節點 < 根節點 < 右子節點，用於快速查找 |
| Full Binary Tree | 所有節點要么是葉節點，要么有兩個子節點 |
| Complete Binary Tree | 除了最底層外，每層節點都被填滿；最底層從左到右填充 |
| Perfect Binary Tree | 一棵既是 Full Binary Tree 又是 Complete Binary Tree 的樹 |
| AVL Tree（自平衡樹） | 每個節點的左右子樹高度差 ≤ 1，自動旋轉保持平衡 |
| Red-Black Tree | 一種自平衡 BST，節點有紅黑顏色屬性，維持高度平衡 |
| N-ary Tree | 每個節點最多有 N 個子節點，一般用於泛樹結構，如檔案系統 |
| Heap（堆） | 完全二元樹，滿足父節點 ≥（Max Heap）或 ≤（Min Heap）子節點 |
| Expression Tree（運算式樹） | 葉節點為操作數，內部節點為運算符，用於解析數學表達式 |

---

## 2. Characteristics（特性）

| 特性 | 說明 |
|----|----|
| 非線性結構 | 節點之間有層級與父子關係 |
| 階層關係 | 每個節點最多有一個父節點，多個子節點 |
| Root / Leaf / Internal | Root 節點、葉節點、內部節點 |
| 深度 / 高度 | Depth: Root 到節點的距離<br>Height: 節點到最深 Leaf 的距離 |

---

## 3. Time & Space Complexity（時間與空間複雜度）

### 時間複雜度（Time Complexity）

| 操作 | Big-O | 說明 |
|----|----|----|
| Search（BST 平衡） | O(log n) 平均 / O(n) 最壞 | 平衡 BST 查找效率高，退化成鏈表時 O(n) |
| Insert / Delete（BST 平衡） | O(log n) 平均 / O(n) 最壞 | 同上 |
| Traversal（Pre/In/Post Order） | O(n) | 需訪問所有節點 |

---

### 空間複雜度（Space Complexity）

| 操作 | 複雜度 |
|----|----|
| Binary Tree Array Representation | O(2^h) | h 為樹高度，稀疏樹浪費空間 |
| Linked Node Representation | O(n) | 每個節點額外指標（左右子節點） |

---

## 4. Advantages & Disadvantages（優缺點）

### 優點
- 表示層級與父子關係清晰
- 查找 / 插入效率高（平衡樹）
- 適合排序、搜尋、索引

### 缺點
- 平衡樹需要額外維護（AVL / Red-Black）
- 非線性結構不如線性結構直覺
- 插入/刪除需要更新指標，實作較複雜

---

## 5. Use Cases（使用情境）

- 資料庫索引（B+ Tree / BST）
- 檔案系統目錄結構
- 優先隊列 / Heap
- 運算式解析（Expression Tree）
- 圖形搜尋與遍歷（DFS / BFS）

---

## 6. Common Problems for Beginners（初次學習可能遇到的問題）

### 1. 節點指標混亂
- 忘記正確指向左/右子節點
- 刪除或插入節點時容易斷鏈或遺失子樹

### 2. 空樹 / 單節點特殊處理
- 初學者常忽略 root 為 NULL 或只有一個節點的情況
- 導致 traversal 或 insert 出錯

### 3. 平衡樹維護錯誤（AVL / Red-Black）
- 插入 / 刪除後未正確旋轉（Rotate）導致失衡
- 初學者常忘記更新高度或顏色屬性

### 4. 空間效率與高度問題
- 使用 Array 表示 Binary Tree 時，稀疏樹浪費大量空間
- 初學者常低估樹高度對搜尋/插入效率的影響
