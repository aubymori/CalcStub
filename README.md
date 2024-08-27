# CalcStub
This is a drop-in replacement for `calc.exe` which lanuches the UWP calculator.
For context, if you install the UWP calculator app on Windows 10 LTSC and launch
`calc.exe`, it will still launch the Win32 one. This bypasses that entirely by
launching the `calculator:` protocol registered by the UWP calculator.