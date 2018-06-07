# ConsoleMenu

There's no any other word but simple can describe this console ui frame.

Inherite `menuBase` class to custom manu, override `StatusMove` function to define option behaviors.

## Code Reference

No secret before source.

[Custom Menu](UICustom.h) (Literally meaning)

[Menu Operate](demo/Controller.cpp) (Menu switch , select&run option)


[Init menu](UILayer.cpp) (Just see "TODO")

[Main](main.cpp) (Ready work)

### Color Control

`titleTextTheme` title color

`highLightedTextTheme` selected item color

`normalTextTheme` other item & help info color

### UI system

`void UISystemInit()` Init UI control system.

`void SetDefaultUI(string)` When error occured , jump to this menu by default.

`void UITransform(string)` Jump to a menu.

`UI_ADD` A Macro. Add your menu to ui system , call this in `UISystemInit()`
