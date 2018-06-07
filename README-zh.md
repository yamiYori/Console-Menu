# ConsoleMenu

简单的控制台菜单框架

继承`menuBase`，重载`StatusMove`，做一点准备工作就完事了

## 编码参考

[定制菜单](UICustom.h) (Literally meaning)

[如何操作菜单](demo/Controller.cpp) (菜单切换、选择选项、执行选项)

[加载菜单](UILayer.cpp) (在TODO所在位置照做就好)

[Main](main.cpp) (程序启动的准备工作)

### 颜色控制

`titleTextTheme` 标题色

`highLightedTextTheme` 高亮色

`normalTextTheme` 非高亮色、帮助信息色

### UI全局控制

`void UISystemInit()` 初始化UI.

`void SetDefaultUI(string)` 设定一个界面，当UI出错时跳转到此界面(默认行为)

`void UITransform(string)` 跳转到指定界面

`UI_ADD` 宏，将自定义菜单载入控制系统，在[[加载菜单](UILayer.cpp)]处调用
