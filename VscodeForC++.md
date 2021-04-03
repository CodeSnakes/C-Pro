---

---

# 配置 C/C++环境

前面已经介绍过，VSCode 只是一款文本编辑器，不仅需要安装对应编程语言的扩展，还需要安装相应的编译器或者解释器。笔者这里首先需要的是 C/C++的环境，所以先介绍如何配置 C/C++的开发环境。如果后续笔者需要其他语言开发环境的时候，笔者再进行相应的记录并分享出来。 首先先创建一个文件夹，用来存放代码。此处建议不同的编程语言采用不同的文件夹，因为 VSCode 打开文件夹（称作工作目录）之后，如果进行一定的配置之后，会在该文件夹下产生一个叫".vscode"的文件夹，该文件夹中存放的是一些.json 的配置文件，这些配置文件是对工作目录中的代码文件产生作用的。所以以后需要相同开发环境的时候，不用每次都去创建配置文件并进行相关配置，直接拷贝.vscode 文件夹即可，但是第一次还是需要手动配置出自己所需的环境。

## 1.安装 MinGW 编译器

C/C++的编译器有很多种，大家可自行选择，笔者这里选择开源的 MinGW 编译器。大家可以从 sourceforge 的 mingw 项目上下载 64 位的编译器，直接打开进行安装，下图的笔者所选的选项。其中版本选最新版本，对语言的新特性有较好的支持；构架是 32 位和 64 位的选择，32 位请选择 x86；线程部分选择 win32，如果是 Linux 请选择 posix；异常模型部分选择默认的 seh 就好；最后一项只能选 0。选好之后点击下一步。

 ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103222.png)

这里要求修改路径名称，确保路径中不包含空格和中文字符，尤其是空格，因为默认位置上有空格的，一定要修改相应安装的路径。因为官方文档中要求安装路径中不能含有空格，实际上也是如此，笔者之前有过编译器的路径存在空格字符，然后配置 VSCode 会无法识别出路径而导致失败（就是因为路径中包含空格字符）。

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103250.png)

这是笔者设置的安装路径。

设置好安装路径之后，点击下一步就开始安装了。因为这是在线安装的，根据网速的大小时间会有所不同。安装好之后，就是熟悉的配置环境变量步骤，如下图：

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103313.png)

最后，打开 cmd，输入 gcc -v 验证是否成功即可。

 ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103452.png)

## 2.安装 C/C++扩展

> 用 VSCode 打开之前建立好的文件夹，可直接通过欢迎界面的 Open folder 打开，也可通过菜单栏的 File-->Open Folder 打开。笔者这里的文件夹目录是 `E:\Cpp`。 在该文件夹下新建一个 hello.cpp 文件，马上右下角会出现安装 C/C++的提示，可直接点击 install 按钮进行安装。
>
> 当然也可自行搜索 C/C++扩展进行安装。
>
> 下图是正在安装 C/C++扩展的过程，需要一段时间，请静心等待。等右下角的提示消失了，说明安装成功，此时最好重启 VSCode 让扩展生效。
>
> ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103633.png)
>
> 重启之后编写好 `hello.cpp` 文件后，如下图：



## 3.配置 C/C++环境

### (1).配置编译器

接下来配置编译器路径，按快捷键 Ctrl+Shift+P 调出命令面板，输入 C/C++，选择“Edit Configurations(UI)”进入配置。这里配置两个选项：

- 编译器路径：`D:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin/g++.exe`

```
这里的路径根据大家自己安装的 Mingw 编译器位置和配置的环境变量位置所决定。
```

- IntelliSense 模式：`gcc-x64`
- <img src="https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103700.png" style="zoom:50%;" />
- <img src="https://pic2.zhimg.com/v2-dd25492f14ef601faff48615533f8f39_r.jpg" alt="preview" style="zoom:50%;" />
- ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103845.png)

配置完成后，此时在侧边栏可以发现多了一个.`vscode` 文件夹，并且里面有一个 `c_cpp_properties.json` 文件，内容如下，说明上述配置成功。现在可以通过 Ctrl+<`快捷键打开内置终端并进行编译运行了。

```json
{
"configurations": [
{
"name": "Win32",
"includePath": [
"${workspaceFolder}/**"
],
"defines": [
"_DEBUG",
"UNICODE",
"_UNICODE"
],
//此处是编译器路径，以后可直接在此修改
"compilerPath": "D:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin/g++.exe",
"cStandard": "c11",
"cppStandard": "c++17",
"intelliSenseMode": "gcc-x64"
}
],
"version": 4
}
```

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103913.png)

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403103936.png)

### (2).配置构建任务

接下来，创建一个 `tasks.json` 文件来告诉 VS Code 如何构建（编译）程序。

该任务将调用 g++编译器基于源代码创建可执行文件。

 按快捷键 `Ctrl+Shift+P` 调出命令面板，

- 输入 tasks，选择`“Tasks:Configure Default Build Task”`：
- ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403105020.png)

- 再选择`“C/C++: g++.exe build active file”`：
- ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403104950.png)



此时会出现一个名为 `tasks.json` 的配置文件，内容如下：

```json
{
// See https://go.microsoft.com/fwlink/?LinkId=733558
// for the documentation about the tasks.json format
"version": "2.0.0",
"tasks": [
{
"type": "shell",
"label": "g++.exe build active file",//任务的名字，就是刚才在命令面板中选择的时候所看到的，可以自己设置
"command": "D:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin/g++.exe",
"args": [//编译时候的参数
"-g",//添加 gdb 调试选项
"${file}",
"-o",//指定生成可执行文件的名称
"${fileDirname}\\${fileBasenameNoExtension}.exe"
],
"options": {
"cwd": "D:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin"
},
"problemMatcher": [
"$gcc"
],
"group": {
"kind": "build",
"isDefault": true//表示快捷键 Ctrl+Shift+B 可以运行该任务
}
}
]
}
```

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403105046.png)

### (3).配置调试设置

这里主要是为了在.`vscode` 文件夹中产生一个 `launch.json` 文件，用来配置调试的相关信息。

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403105103.png)

点击菜单栏的 Debug-->Start Debugging：

选择 `C++(GDB/LLDB)`：

![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403105205.png)

紧接着会产生一个 launch.json 的文件：

 ![](https://gitee.com/yichangkong/FigureBed/raw/master/img/20210403105951.png)

这里笔者遇到一个问题，如果是在编写好的 c++代码文件页面进行上述过程，会一直报"Unable to create 'launch.json' file inside the '.vscode' folder (Cannot read property 'name' of undefined)."的错误，网上也没有找到相关的解决办法，就自己琢磨了半天，最后发现如果在之前已经创建好的 json 文件页面进行创建 launch.json 文件的过程，是可以正常进行的。笔者也没有弄懂这到底是什么原因。 

【注】如果大家在进行 tasks.json 和 launch.json 的配置时遇到问题，比如上述笔者所遇到的无法构建的问题，还请不要气馁，可以对所遇到的错误进行搜索查找，看看是否有解决方案，如果实在没有的话，大家可以直接在.vscode 文件夹下手动创建这两个文件，并将相应内容复制进去，也可完成环境配置。

接下来读者可以点击 Add Configuration 按钮自己添加配置，也可以直接将笔者配置好的 json 文件内容复制过去，因为些配置对新手不是特别友好，相关具体细节还是需要参考官方文档。下面是笔者的 launch.json 文件的内容：

```
{
// Use IntelliSense to learn about possible attributes.
// Hover to view descriptions of existing attributes.
// For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
"version": "0.2.0",
"configurations": [
{
        "name": "(gdb) Launch",
        "preLaunchTask": "g++.exe build active file",//调试前执行的任务，就是之前配置的tasks.json中的label字段
        "type": "cppdbg",//配置类型，只能为cppdbg
        "request": "launch",//请求配置类型，可以为launch（启动）或attach（附加）
        "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",//调试程序的路径名称
        "args": [],//调试传递参数
        "stopAtEntry": false,
        "cwd": "${workspaceFolder}",
        "environment": [],
        "externalConsole": true,//true显示外置的控制台窗口，false显示内置终端
        "MIMode": "gdb",
        "miDebuggerPath": "D:\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",
        "setupCommands": [
            {
                "description": "Enable pretty-printing for gdb",
                "text": "-enable-pretty-printing",
                "ignoreFailures": true
            }
        ]
    }
]}
```


现编写一个 debug.cpp 文件测试调试，设置断点后，按下 F5 进入调试，如图成功调试， 左侧为变量内容：

## 4.结语

至此，VSCode 的 C/C++开发环境已经配置完成，建议大家配置成功后，将.vscode 文件夹备份一份，以后需要的时候直接复制即可，不用再花时间进行配置了。 相信有了配置 C/C++环境的基础，大家以后配置其他语言环境的时候就不会那么发怵了，赶快去体验 VSCode 这款好用的编辑器吧！