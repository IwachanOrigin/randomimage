
# randomimage
乱数を用いて0~255の間で値を求め、RGB画像を生成、表示します。  
画像表示、GUIにはQtを使用しています。  

## Demo
![random](https://user-images.githubusercontent.com/12496951/189536695-fc9428ae-c565-4638-ac6c-26a9c95c2972.PNG)  

## Dependency
- MSVC 15+  
- Qt 5.13.1

## Build
CMakeLists.txtではQTDIRを環境変数から取得して使用しています。  
また、ここではWSL2とPowerShell、CMakeを使用したビルド方法を記述します。  
CMakeは環境変数のPATHへ追加しています。  

1. このリポジトリをクローンします。  
2. 以下のコマンドでビルドします。  
   ex. VS2017 の場合  
   powershell.exe cmake -S . -B build -G "\\"Visual Studio 15 2017 Win64\\""  
   powershell.exe cmake --build build  

   ex. VS2019以上の場合  
   powershell.exe cmake -S . -B build  
   powershell.exe cmake --build build  

3. 実行時に必要なDLL群はコピーしていません。実行の際には注意してください。


## License
This software is released under the MIT License, see LICENSE.

## References
[C言語で学ぶ実践CG・映像合成](https://www.ohmsha.co.jp/book/9784274500169/)  
[コンピュータ画像処理(改訂2版)](https://www.ohmsha.co.jp/book/9784274228193/)  
