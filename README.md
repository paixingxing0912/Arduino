代码在master branch里面，但我不知道怎么删除main这个branch，代码提交不到main这个branch里面，显示error
# Arduino  
## 一些疑问
### 1  

不知道为什么，监视窗口会一开始就有一个乱码符？  

### 2  

EmbeddedAssign2中第一版代码都是用println输出的，这个时候我向串口输出的数字也会在监视窗口中显示。  
但后来为了美观我把4个println改成了print，程序仍能正常运行，但监视窗口不会显示我向串口输入的用来指示哪个灯亮灭的数字了  

### 3  

在关联远程仓库的时候，我先用了http地址而不是哈希值，但是不知道为什么都是在等待一段时间后显示关联失败  

### 4  
在git中用cd选择文件位置的时候如果目标地址太细，比如cd Users/Lenovo/Documents/PlatformIO/Projects/Arduino_1st_flowing light时会显示bash: cd: too many arguments。  
那这么选中这样的目标文件呢
