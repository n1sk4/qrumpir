# Build
## Clone Repo
```
git clone https://github.com/n1sk4/qrumpir.git
cd qrumpir
```
## Install dependencies
### Linux 
```
sudo apt update
sudo apt install -y cmake g++-12 ninja-build
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 60
```
### macOS
```
brew install cmake ninja gcc@12
echo 'export PATH="/usr/local/opt/gcc@12/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```
### Windows
```
choco install cmake ninja --installargs 'ADD_CMAKE_TO_PATH=System' -y
choco install mingw --version=12.2.0 -y
$env:Path += ";C:\Program Files\mingw-w64\bin"
```
## Create a build dir
```
mkdir build
```
## Configure CMake
### Linux & macOS
```
cmake -B build -DCMAKE_BUILD_TYPE=Release -G Ninja
```
### Windows
```
cmake -B build -DCMAKE_BUILD_TYPE=Release -G Ninja
```
## Build
### Linux & macOS
```
cmake --build build --config Release
```
### Windows
```
cmake --build build --config Release
```
## Run
### Linux & macOS
```
cd build
/game/release/Game
ctest -C Release --output-on-failure
```
### Windows
```
cd build
\game\release\Game.exe
ctest -C Release --output-on-failure
```
