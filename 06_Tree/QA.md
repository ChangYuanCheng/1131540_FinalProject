## 06_Tree（樹 / BST）


- **Q1:** Balanced Tree（如 AVL、Red-Black）解決了什麼問題？  
  **AI提示回答:**  
  透過旋轉操作維持樹高為 O(log n)，確保搜尋、插入、刪除穩定效率。

- **Q2:** Inorder Traversal 為什麼能輸出排序結果？  
  **AI提示回答:**  
  因為 BST 的性質是 Left < Root < Right，中序遍歷會依大小順序訪問節點。

- **Q3:** Tree 與 Graph 在結構上的本質差異？  
  **AI提示回答:**  
  Tree 是「無環、連通、n-1 條邊」的特殊 Graph；Graph 可有環、可不連通。

- **Q4:** Tree 常見的實務應用？  
  **AI提示回答:**  
  - 檔案系統  
  - 資料庫索引（B-Tree）  
  - 編譯器語法樹（AST）

## AI自我延伸問題

  - **Q5:** BST 為什麼在最壞情況下會退化成 O(n)？  
  **AI提示回答:**  
  若插入順序已排序（例如遞增），BST 會變成單邊鏈表，高度變成 n。
