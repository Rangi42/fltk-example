This project demonstrates a warning from Visual Studio 2019 when extending `Fl_Window`.

Build output:

```
1>------ Build started: Project: FLTK Example, Configuration: Debug Win32 ------
1>fltk-example.cpp
1>E:\fltk-example\src\fltk-example.cpp(13,16): warning C4458: declaration of 'i' hides class member
1>E:\fltk-example\include\FL\Fl_Window.H(97,9): message : see declaration of 'Fl_Window::i'
1>fltk-example.vcxproj -> E:\fltk-example\ide\..\bin\Debug\fltk-example-debug.exe
1>Done building project "fltk-example.vcxproj".
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```
