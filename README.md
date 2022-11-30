# readRAWfile
## 用毒進來的raw檔做SOM

###### 先做voxelizer ######

### 實作概念
先把raw、inf檔讀進來(0為空氣)
再找出接觸空氣的所有面，並定義好它的VAO、VBO，一次畫出來

**注意:千萬不要把每個面定義一個正方形的VAO、VBO然後再while迴圈裡依序跑每個面，這樣跑迴圈會很慢**

![](./image/code0.png)

![](./image/code1.png)

光照是用phing shading及blinn-phong phading，可按B鍵切換
*參考LearnOpenGL*

![](./image/code2.png)

### 執行畫面
** 用網格做訓練，容易產生扭曲 **

- resolution為21x21x21的球體

![](./image/ball21.png)

![](./image/ball21_1.png)

![](./image/ball21_2.png)

![](./image/ball21_3.png)


- resolution為67x67x67的球體

![](./image/ball67.png)

![](./image/ball67_1.png)

![](./image/ball67_2.png)

![](./image/ball67_3.png)


- resolution為257x257x257的球體

![](./image/ball257.png)

- resolution為476x301x238的茶壺

![](./image/tea.png)

# 注意
RAND_MAX最大只有到3萬，但我的點有17萬，所以一直訓練失敗

###### 跟之前的程式比把一些畫圖的東西都定義header和cpp ######