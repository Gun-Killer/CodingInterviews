## 1、附加事件
```csharp
<StackPanel Button.Click="StackPanel_Click">
    <Button>01</Button>
    <Button>01</Button>
    <Button>01</Button>
    <Button>01</Button>
    <Button>01</Button>
</StackPanel>
```
StackPanel 下的所有button 点击都会触发StackPanel_Click 事件。Click事件定义在ButtonBase类中，如果使用ButtonBase.Click注册附加事件，在StackPanel下所有继承ButtonBase的控件都会触发事件。

## 2、隧道事件
    2.1 隧道事件会在冒泡事件之前触发
    2.2 将隧道事件标记已处理，则冒泡事件将不会被触发【共享RoutedEventArgs实例】

## 3、事件生命周期
    子元素的initialized事件执行完成之后，执行包含它元素的initialized事件
    上层Loaded事件先执行
    每次只能使用一个控件，接受按键是具有焦点的控件
    Vs 执行直接运行无法进行Drop事件