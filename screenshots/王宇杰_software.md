内容太多不好截图，所以就以文字的形式复制过来了
wyj@wyj-VMware-Virtual-Platform:~$ sudo apt update
[sudo] wyj 的密码： 
命中:4 http://security.ubuntu.com/ubuntu noble-security InRelease                         
命中:1 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble InRelease
命中:2 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates InRelease
命中:3 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-backports InRelease
正在读取软件包列表... 完成
wyj@wyj-VMware-Virtual-Platform:~$ sudo apt install -y \
> build-essential \
> git \
> libboost-system-dev \
> libboost-filesystem-dev \
> libssl-dev \
> qtbase5-dev \
> qttools5-dev \
> qttools5-dev-tools \
> libqt5charts5-dev \
> pkg-config
正在读取软件包列表... 完成
正在分析软件包的依赖关系树... 完成
正在读取状态信息... 完成                 
build-essential 已经是最新版 (12.10ubuntu1)。
git 已经是最新版 (1:2.43.0-1ubuntu7.3)。
git 已设置为手动安装。
下列软件包是自动安装的并且现在不需要了：
  libllvm19
使用'sudo apt autoremove'来卸载它(它们)。
将会同时安装下列软件：
  libboost-atomic1.83-dev libboost-atomic1.83.0 libboost-filesystem1.83-dev
  libboost-filesystem1.83.0 libboost-system1.83-dev libboost-system1.83.0
  libboost1.83-dev libclang1-15t64 libegl-dev libgl-dev libglu1-mesa-dev libglx-dev
  libllvm15t64 libopengl-dev libpkgconf3 libpthread-stubs0-dev libqt5concurrent5t64
  libqt5designer5 libqt5designercomponents5 libqt5help5 libqt5opengl5-dev
  libqt5opengl5t64 libqt5sensors5 libqt5sql5-sqlite libqt5sql5t64 libqt5test5t64
  libqt5webkit5 libqt5xml5t64 libvulkan-dev libx11-dev libxau-dev libxcb1-dev
  libxdmcp-dev libxext-dev pkgconf pkgconf-bin qdoc-qt5 qhelpgenerator-qt5 qt5-assistant
  qt5-qmake qt5-qmake-bin qtattributionsscanner-qt5 qtbase5-dev-tools qtchooser
  x11proto-dev xorg-sgml-doctools xtrans-dev
建议安装：
  libboost1.83-doc libboost-chrono1.83-dev libboost-container1.83-dev
  libboost-context1.83-dev libboost-contract1.83-dev libboost-coroutine1.83-dev
  libboost-date-time1.83-dev libboost-exception1.83-dev libboost-fiber1.83-dev
  libboost-graph-parallel1.83-dev libboost-graph1.83-dev libboost-iostreams1.83-dev
  libboost-json1.83-dev libboost-locale1.83-dev libboost-log1.83-dev
  libboost-math1.83-dev libboost-mpi-python1.83-dev libboost-mpi1.83-dev
  libboost-nowide1.83-dev libboost-numpy1.83-dev libboost-program-options1.83-dev
  libboost-python1.83-dev libboost-random1.83-dev libboost-regex1.83-dev
  libboost-serialization1.83-dev libboost-stacktrace1.83-dev libboost-test1.83-dev
  libboost-thread1.83-dev libboost-timer1.83-dev libboost-type-erasure1.83-dev
  libboost-url1.83-dev libboost-wave1.83-dev libboost1.83-tools-dev libmpfrc++-dev
  libntl-dev libssl-doc libx11-doc libxcb-doc libxext-doc qt5-doc
  default-libmysqlclient-dev firebird-dev libpq-dev libsqlite3-dev unixodbc-dev
下列【新】软件包将被安装：
  libboost-atomic1.83-dev libboost-atomic1.83.0 libboost-filesystem-dev
  libboost-filesystem1.83-dev libboost-filesystem1.83.0 libboost-system-dev
  libboost-system1.83-dev libboost-system1.83.0 libboost1.83-dev libclang1-15t64
  libegl-dev libgl-dev libglu1-mesa-dev libglx-dev libllvm15t64 libopengl-dev libpkgconf3
  libpthread-stubs0-dev libqt5charts5-dev libqt5concurrent5t64 libqt5designer5
  libqt5designercomponents5 libqt5help5 libqt5opengl5-dev libqt5opengl5t64 libqt5sensors5
  libqt5sql5-sqlite libqt5sql5t64 libqt5test5t64 libqt5webkit5 libqt5xml5t64 libssl-dev
  libvulkan-dev libx11-dev libxau-dev libxcb1-dev libxdmcp-dev libxext-dev pkg-config
  pkgconf pkgconf-bin qdoc-qt5 qhelpgenerator-qt5 qt5-assistant qt5-qmake qt5-qmake-bin
  qtattributionsscanner-qt5 qtbase5-dev qtbase5-dev-tools qtchooser qttools5-dev
  qttools5-dev-tools x11proto-dev xorg-sgml-doctools xtrans-dev
升级了 0 个软件包，新安装了 55 个软件包，要卸载 0 个软件包，有 2 个软件包未被升级。
需要下载 73.6 MB 的归档。
解压缩后会消耗 466 MB 的额外空间。
获取:1 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libqt5sensors5 amd64 5.15.13-1 [122 kB]
获取:2 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5webkit5 amd64 5.212.0~alpha4-36 [12.8 MB]
获取:3 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libboost1.83-dev amd64 1.83.0-2.1ubuntu3.1 [10.7 MB]
获取:4 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libboost-atomic1.83.0 amd64 1.83.0-2.1ubuntu3.1 [240 kB]
获取:5 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libboost-atomic1.83-dev amd64 1.83.0-2.1ubuntu3.1 [235 kB]
获取:6 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libboost-filesystem1.83.0 amd64 1.83.0-2.1ubuntu3.1 [283 kB]
获取:7 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libboost-system1.83.0 amd64 1.83.0-2.1ubuntu3.1 [236 kB]
获取:8 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libboost-system1.83-dev amd64 1.83.0-2.1ubuntu3.1 [231 kB]
获取:9 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/universe amd64 libboost-filesystem1.83-dev amd64 1.83.0-2.1ubuntu3.1 [301 kB]
获取:10 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libboost-filesystem-dev amd64 1.83.0.1ubuntu2 [4,096 B]
获取:11 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libboost-system-dev amd64 1.83.0.1ubuntu2 [4,206 B]
获取:12 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libllvm15t64 amd64 1:15.0.7-14build3 [25.5 MB]
获取:13 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libclang1-15t64 amd64 1:15.0.7-14build3 [6,958 kB]
获取:14 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 xorg-sgml-doctools all 1:1.11-1.1 [10.9 kB]
获取:15 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 x11proto-dev all 2023.2-1 [602 kB]
获取:16 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libxau-dev amd64 1:1.0.9-1build6 [9,570 B]
获取:17 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libxdmcp-dev amd64 1:1.1.3-0ubuntu6 [26.5 kB]
获取:18 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 xtrans-dev all 1.4.0-1 [68.9 kB]
获取:19 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libpthread-stubs0-dev amd64 0.4-1build3 [4,746 B]
获取:20 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libxcb1-dev amd64 1.15-1ubuntu2 [85.8 kB]
获取:21 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libx11-dev amd64 2:1.8.7-1build1 [732 kB]
获取:22 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libglx-dev amd64 1.7.0-1build1 [14.2 kB]
获取:23 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libgl-dev amd64 1.7.0-1build1 [102 kB]
获取:24 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libegl-dev amd64 1.7.0-1build1 [18.2 kB]
获取:25 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libopengl-dev amd64 1.7.0-1build1 [3,454 B]
获取:26 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libglu1-mesa-dev amd64 9.0.2-1.1build1 [237 kB]
获取:27 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libpkgconf3 amd64 1.8.1-2build1 [30.7 kB]
获取:28 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5concurrent5t64 amd64 5.15.13+dfsg-1ubuntu1 [35.7 kB]
获取:29 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5sql5t64 amd64 5.15.13+dfsg-1ubuntu1 [122 kB]
获取:30 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5test5t64 amd64 5.15.13+dfsg-1ubuntu1 [148 kB]
获取:31 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5xml5t64 amd64 5.15.13+dfsg-1ubuntu1 [124 kB]
获取:32 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libvulkan-dev amd64 1.3.275.0-1build1 [1,239 kB]
获取:33 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 libxext-dev amd64 2:1.3.4-1build2 [83.5 kB]
获取:34 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 qt5-qmake-bin amd64 5.15.13+dfsg-1ubuntu1 [1,140 kB]
获取:35 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qtchooser amd64 66-2build2 [25.9 kB]
获取:36 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 qt5-qmake amd64 5.15.13+dfsg-1ubuntu1 [209 kB]
获取:37 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 qtbase5-dev-tools amd64 5.15.13+dfsg-1ubuntu1 [823 kB]
获取:38 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 qtbase5-dev amd64 5.15.13+dfsg-1ubuntu1 [1,125 kB]
获取:39 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libqt5charts5-dev amd64 5.15.13-1 [23.4 kB]
获取:40 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libqt5designer5 amd64 5.15.13-1 [2,824 kB]
获取:41 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libqt5designercomponents5 amd64 5.15.13-1 [785 kB]
获取:42 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libqt5help5 amd64 5.15.13-1 [161 kB]
获取:43 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5opengl5t64 amd64 5.15.13+dfsg-1ubuntu1 [150 kB]
获取:44 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5opengl5-dev amd64 5.15.13+dfsg-1ubuntu1 [42.4 kB]
获取:45 http://cn.archive.ubuntu.com/ubuntu noble/universe amd64 libqt5sql5-sqlite amd64 5.15.13+dfsg-1ubuntu1 [51.5 kB]
获取:46 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble-updates/main amd64 libssl-dev amd64 3.0.13-0ubuntu3.6 [2,408 kB]
获取:47 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 pkgconf-bin amd64 1.8.1-2build1 [20.7 kB]
获取:48 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 pkgconf amd64 1.8.1-2build1 [16.8 kB]
获取:49 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/main amd64 pkg-config amd64 1.8.1-2build1 [7,264 B]
获取:50 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qdoc-qt5 amd64 5.15.13-1 [634 kB]
获取:51 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qhelpgenerator-qt5 amd64 5.15.13-1 [59.7 kB]
获取:52 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qt5-assistant amd64 5.15.13-1 [362 kB]
获取:53 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qtattributionsscanner-qt5 amd64 5.15.13-1 [34.3 kB]
获取:54 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qttools5-dev-tools amd64 5.15.13-1 [1,115 kB]
获取:55 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 qttools5-dev amd64 5.15.13-1 [204 kB]
已下载 73.6 MB，耗时 33秒 (2,228 kB/s)                                                    
正在从软件包中解出模板：100%
正在选中未选择的软件包 libqt5sensors5:amd64。
(正在读取数据库 ... 系统当前共安装有 225378 个文件和目录。)
准备解压 .../00-libqt5sensors5_5.15.13-1_amd64.deb  ...
正在解压 libqt5sensors5:amd64 (5.15.13-1) ...
正在选中未选择的软件包 libqt5webkit5:amd64。
准备解压 .../01-libqt5webkit5_5.212.0~alpha4-36_amd64.deb  ...
正在解压 libqt5webkit5:amd64 (5.212.0~alpha4-36) ...
正在选中未选择的软件包 libboost1.83-dev:amd64。
准备解压 .../02-libboost1.83-dev_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-atomic1.83.0:amd64。
准备解压 .../03-libboost-atomic1.83.0_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost-atomic1.83.0:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-atomic1.83-dev:amd64。
准备解压 .../04-libboost-atomic1.83-dev_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost-atomic1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-filesystem1.83.0:amd64。
准备解压 .../05-libboost-filesystem1.83.0_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost-filesystem1.83.0:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-system1.83.0:amd64。
准备解压 .../06-libboost-system1.83.0_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost-system1.83.0:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-system1.83-dev:amd64。
准备解压 .../07-libboost-system1.83-dev_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost-system1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-filesystem1.83-dev:amd64。
准备解压 .../08-libboost-filesystem1.83-dev_1.83.0-2.1ubuntu3.1_amd64.deb  ...
正在解压 libboost-filesystem1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在选中未选择的软件包 libboost-filesystem-dev:amd64。
准备解压 .../09-libboost-filesystem-dev_1.83.0.1ubuntu2_amd64.deb  ...
正在解压 libboost-filesystem-dev:amd64 (1.83.0.1ubuntu2) ...
正在选中未选择的软件包 libboost-system-dev:amd64。
准备解压 .../10-libboost-system-dev_1.83.0.1ubuntu2_amd64.deb  ...
正在解压 libboost-system-dev:amd64 (1.83.0.1ubuntu2) ...
正在选中未选择的软件包 libllvm15t64:amd64。
准备解压 .../11-libllvm15t64_1%3a15.0.7-14build3_amd64.deb  ...
正在解压 libllvm15t64:amd64 (1:15.0.7-14build3) ...
正在选中未选择的软件包 libclang1-15t64。
准备解压 .../12-libclang1-15t64_1%3a15.0.7-14build3_amd64.deb  ...
正在解压 libclang1-15t64 (1:15.0.7-14build3) ...
正在选中未选择的软件包 xorg-sgml-doctools。
准备解压 .../13-xorg-sgml-doctools_1%3a1.11-1.1_all.deb  ...
正在解压 xorg-sgml-doctools (1:1.11-1.1) ...
正在选中未选择的软件包 x11proto-dev。
准备解压 .../14-x11proto-dev_2023.2-1_all.deb  ...
正在解压 x11proto-dev (2023.2-1) ...
正在选中未选择的软件包 libxau-dev:amd64。
准备解压 .../15-libxau-dev_1%3a1.0.9-1build6_amd64.deb  ...
正在解压 libxau-dev:amd64 (1:1.0.9-1build6) ...
正在选中未选择的软件包 libxdmcp-dev:amd64。
准备解压 .../16-libxdmcp-dev_1%3a1.1.3-0ubuntu6_amd64.deb  ...
正在解压 libxdmcp-dev:amd64 (1:1.1.3-0ubuntu6) ...
正在选中未选择的软件包 xtrans-dev。
准备解压 .../17-xtrans-dev_1.4.0-1_all.deb  ...
正在解压 xtrans-dev (1.4.0-1) ...
正在选中未选择的软件包 libpthread-stubs0-dev:amd64。
准备解压 .../18-libpthread-stubs0-dev_0.4-1build3_amd64.deb  ...
正在解压 libpthread-stubs0-dev:amd64 (0.4-1build3) ...
正在选中未选择的软件包 libxcb1-dev:amd64。
准备解压 .../19-libxcb1-dev_1.15-1ubuntu2_amd64.deb  ...
正在解压 libxcb1-dev:amd64 (1.15-1ubuntu2) ...
正在选中未选择的软件包 libx11-dev:amd64。
准备解压 .../20-libx11-dev_2%3a1.8.7-1build1_amd64.deb  ...
正在解压 libx11-dev:amd64 (2:1.8.7-1build1) ...
正在选中未选择的软件包 libglx-dev:amd64。
准备解压 .../21-libglx-dev_1.7.0-1build1_amd64.deb  ...
正在解压 libglx-dev:amd64 (1.7.0-1build1) ...
正在选中未选择的软件包 libgl-dev:amd64。
准备解压 .../22-libgl-dev_1.7.0-1build1_amd64.deb  ...
正在解压 libgl-dev:amd64 (1.7.0-1build1) ...
正在选中未选择的软件包 libegl-dev:amd64。
准备解压 .../23-libegl-dev_1.7.0-1build1_amd64.deb  ...
正在解压 libegl-dev:amd64 (1.7.0-1build1) ...
正在选中未选择的软件包 libopengl-dev:amd64。
准备解压 .../24-libopengl-dev_1.7.0-1build1_amd64.deb  ...
正在解压 libopengl-dev:amd64 (1.7.0-1build1) ...
正在选中未选择的软件包 libglu1-mesa-dev:amd64。
准备解压 .../25-libglu1-mesa-dev_9.0.2-1.1build1_amd64.deb  ...
正在解压 libglu1-mesa-dev:amd64 (9.0.2-1.1build1) ...
正在选中未选择的软件包 libpkgconf3:amd64。
准备解压 .../26-libpkgconf3_1.8.1-2build1_amd64.deb  ...
正在解压 libpkgconf3:amd64 (1.8.1-2build1) ...
正在选中未选择的软件包 libqt5concurrent5t64:amd64。
准备解压 .../27-libqt5concurrent5t64_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5concurrent5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libqt5sql5t64:amd64。
准备解压 .../28-libqt5sql5t64_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5sql5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libqt5test5t64:amd64。
准备解压 .../29-libqt5test5t64_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5test5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libqt5xml5t64:amd64。
准备解压 .../30-libqt5xml5t64_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5xml5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libvulkan-dev:amd64。
准备解压 .../31-libvulkan-dev_1.3.275.0-1build1_amd64.deb  ...
正在解压 libvulkan-dev:amd64 (1.3.275.0-1build1) ...
正在选中未选择的软件包 libxext-dev:amd64。
准备解压 .../32-libxext-dev_2%3a1.3.4-1build2_amd64.deb  ...
正在解压 libxext-dev:amd64 (2:1.3.4-1build2) ...
正在选中未选择的软件包 qt5-qmake-bin。
准备解压 .../33-qt5-qmake-bin_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 qt5-qmake-bin (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 qtchooser。
准备解压 .../34-qtchooser_66-2build2_amd64.deb  ...
正在解压 qtchooser (66-2build2) ...
正在选中未选择的软件包 qt5-qmake:amd64。
准备解压 .../35-qt5-qmake_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 qt5-qmake:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 qtbase5-dev-tools。
准备解压 .../36-qtbase5-dev-tools_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 qtbase5-dev-tools (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 qtbase5-dev:amd64。
准备解压 .../37-qtbase5-dev_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 qtbase5-dev:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libqt5charts5-dev:amd64。
准备解压 .../38-libqt5charts5-dev_5.15.13-1_amd64.deb  ...
正在解压 libqt5charts5-dev:amd64 (5.15.13-1) ...
正在选中未选择的软件包 libqt5designer5:amd64。
准备解压 .../39-libqt5designer5_5.15.13-1_amd64.deb  ...
正在解压 libqt5designer5:amd64 (5.15.13-1) ...
正在选中未选择的软件包 libqt5designercomponents5:amd64。
准备解压 .../40-libqt5designercomponents5_5.15.13-1_amd64.deb  ...
正在解压 libqt5designercomponents5:amd64 (5.15.13-1) ...
正在选中未选择的软件包 libqt5help5:amd64。
准备解压 .../41-libqt5help5_5.15.13-1_amd64.deb  ...
正在解压 libqt5help5:amd64 (5.15.13-1) ...
正在选中未选择的软件包 libqt5opengl5t64:amd64。
准备解压 .../42-libqt5opengl5t64_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5opengl5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libqt5opengl5-dev:amd64。
准备解压 .../43-libqt5opengl5-dev_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5opengl5-dev:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libqt5sql5-sqlite:amd64。
准备解压 .../44-libqt5sql5-sqlite_5.15.13+dfsg-1ubuntu1_amd64.deb  ...
正在解压 libqt5sql5-sqlite:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在选中未选择的软件包 libssl-dev:amd64。
准备解压 .../45-libssl-dev_3.0.13-0ubuntu3.6_amd64.deb  ...
正在解压 libssl-dev:amd64 (3.0.13-0ubuntu3.6) ...
正在选中未选择的软件包 pkgconf-bin。
准备解压 .../46-pkgconf-bin_1.8.1-2build1_amd64.deb  ...
正在解压 pkgconf-bin (1.8.1-2build1) ...
正在选中未选择的软件包 pkgconf:amd64。
准备解压 .../47-pkgconf_1.8.1-2build1_amd64.deb  ...
正在解压 pkgconf:amd64 (1.8.1-2build1) ...
正在选中未选择的软件包 pkg-config:amd64。
准备解压 .../48-pkg-config_1.8.1-2build1_amd64.deb  ...
正在解压 pkg-config:amd64 (1.8.1-2build1) ...
正在选中未选择的软件包 qdoc-qt5。
准备解压 .../49-qdoc-qt5_5.15.13-1_amd64.deb  ...
正在解压 qdoc-qt5 (5.15.13-1) ...
正在选中未选择的软件包 qhelpgenerator-qt5。
准备解压 .../50-qhelpgenerator-qt5_5.15.13-1_amd64.deb  ...
正在解压 qhelpgenerator-qt5 (5.15.13-1) ...
正在选中未选择的软件包 qt5-assistant。
准备解压 .../51-qt5-assistant_5.15.13-1_amd64.deb  ...
正在解压 qt5-assistant (5.15.13-1) ...
正在选中未选择的软件包 qtattributionsscanner-qt5。
准备解压 .../52-qtattributionsscanner-qt5_5.15.13-1_amd64.deb  ...
正在解压 qtattributionsscanner-qt5 (5.15.13-1) ...
正在选中未选择的软件包 qttools5-dev-tools。
准备解压 .../53-qttools5-dev-tools_5.15.13-1_amd64.deb  ...
正在解压 qttools5-dev-tools (5.15.13-1) ...
正在选中未选择的软件包 qttools5-dev:amd64。
准备解压 .../54-qttools5-dev_5.15.13-1_amd64.deb  ...
正在解压 qttools5-dev:amd64 (5.15.13-1) ...
正在设置 libboost1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 libvulkan-dev:amd64 (1.3.275.0-1build1) ...
正在设置 libllvm15t64:amd64 (1:15.0.7-14build3) ...
正在设置 libqt5concurrent5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libboost-system1.83.0:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 libqt5xml5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libqt5test5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libboost-filesystem1.83.0:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 libpthread-stubs0-dev:amd64 (0.4-1build3) ...
正在设置 libboost-atomic1.83.0:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 xtrans-dev (1.4.0-1) ...
正在设置 libpkgconf3:amd64 (1.8.1-2build1) ...
正在设置 qt5-qmake-bin (5.15.13+dfsg-1ubuntu1) ...
正在设置 libssl-dev:amd64 (3.0.13-0ubuntu3.6) ...
正在设置 pkgconf-bin (1.8.1-2build1) ...
正在设置 libclang1-15t64 (1:15.0.7-14build3) ...
正在设置 libboost-atomic1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 libqt5sql5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 xorg-sgml-doctools (1:1.11-1.1) ...
正在设置 libqt5opengl5t64:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libboost-system1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 libopengl-dev:amd64 (1.7.0-1build1) ...
正在设置 libqt5sensors5:amd64 (5.15.13-1) ...
正在设置 qtchooser (66-2build2) ...
正在设置 libqt5sql5-sqlite:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 qt5-qmake:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libqt5designer5:amd64 (5.15.13-1) ...
正在设置 qdoc-qt5 (5.15.13-1) ...
正在设置 libboost-system-dev:amd64 (1.83.0.1ubuntu2) ...
正在设置 libboost-filesystem1.83-dev:amd64 (1.83.0-2.1ubuntu3.1) ...
正在设置 libqt5webkit5:amd64 (5.212.0~alpha4-36) ...
正在设置 libqt5designercomponents5:amd64 (5.15.13-1) ...
正在设置 libqt5help5:amd64 (5.15.13-1) ...
正在设置 pkgconf:amd64 (1.8.1-2build1) ...
正在设置 qtbase5-dev-tools (5.15.13+dfsg-1ubuntu1) ...
正在设置 qtattributionsscanner-qt5 (5.15.13-1) ...
正在设置 pkg-config:amd64 (1.8.1-2build1) ...
正在设置 qt5-assistant (5.15.13-1) ...
正在设置 libboost-filesystem-dev:amd64 (1.83.0.1ubuntu2) ...
正在设置 qhelpgenerator-qt5 (5.15.13-1) ...
正在设置 qttools5-dev-tools (5.15.13-1) ...
正在处理用于 sgml-base (1.31) 的触发器 ...
正在设置 x11proto-dev (2023.2-1) ...
正在处理用于 desktop-file-utils (0.27-2build1) 的触发器 ...
正在设置 libxau-dev:amd64 (1:1.0.9-1build6) ...
正在处理用于 hicolor-icon-theme (0.17-2) 的触发器 ...
正在处理用于 gnome-menus (3.36.0-1.1ubuntu3) 的触发器 ...
正在处理用于 libc-bin (2.39-0ubuntu8.6) 的触发器 ...
正在处理用于 man-db (2.12.0-4build2) 的触发器 ...
正在设置 libxdmcp-dev:amd64 (1:1.1.3-0ubuntu6) ...
正在设置 libxcb1-dev:amd64 (1.15-1ubuntu2) ...
正在设置 libx11-dev:amd64 (2:1.8.7-1build1) ...
正在设置 libxext-dev:amd64 (2:1.3.4-1build2) ...
正在设置 libglx-dev:amd64 (1.7.0-1build1) ...
正在设置 libgl-dev:amd64 (1.7.0-1build1) ...
正在设置 libegl-dev:amd64 (1.7.0-1build1) ...
正在设置 libglu1-mesa-dev:amd64 (9.0.2-1.1build1) ...
正在设置 qtbase5-dev:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libqt5opengl5-dev:amd64 (5.15.13+dfsg-1ubuntu1) ...
正在设置 libqt5charts5-dev:amd64 (5.15.13-1) ...
正在设置 qttools5-dev:amd64 (5.15.13-1) ...
wyj@wyj-VMware-Virtual-Platform:~$ git clone https://github.com/oguzhaninan/Stacer.git
正克隆到 'Stacer'...
cremote: Enumerating objects: 5236, done.
remote: Counting objects: 100% (70/70), done.
remote: Compressing objects: 100% (35/35), done.
remote: Total 5236 (delta 59), reused 35 (delta 35), pack-reused 5166 (from 2)
接收对象中: 100% (5236/5236), 7.34 MiB | 3.34 MiB/s, 完成.
处理 delta 中: 100% (3243/3243), 完成.
wyj@wyj-VMware-Virtual-Platform:~$ cd Stacer
wyj@wyj-VMware-Virtual-Platform:~/Stacer$ mkdir build
wyj@wyj-VMware-Virtual-Platform:~/Stacer$ cd build
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ cmake ..
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- The C compiler identification is GNU 13.3.0
-- The CXX compiler identification is GNU 13.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Deprecation Warning at cmake/cxxbasics/CXXBasics.cmake:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/InitCXXBasics.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:6 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/helpers/MacroCustomMessages.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/InitCXXBasics.cmake:10 (include)
  cmake/cxxbasics/CXXBasics.cmake:6 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/helpers/MacroOpt.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/InitCXXBasics.cmake:13 (include)
  cmake/cxxbasics/CXXBasics.cmake:6 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/DefaultSettings.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:9 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:6 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/compiler_detection/GetTargetArch.cmake:11 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:35 (include)
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:99 (__cxxbasics_set_linker)
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/helpers/FnMktemp.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/compiler_detection/GetTargetArch.cmake:22 (include)
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:35 (include)
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:99 (__cxxbasics_set_linker)
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


-- [cxxbasics] `CXXBASICS_C_COMPILER_TARGET_ARCH` set to "x86_64"
-- [cxxbasics] `CXXBASICS_CXX_COMPILER_TARGET_ARCH` set to "x86_64"
-- [cxxbasics][✓] CMAKE_C_COMPILER(/usr/bin/cc)'s linker is set to: GNU gold linker
CMake Deprecation Warning at cmake/cxxbasics/compiler_detection/GetTargetArch.cmake:11 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:35 (include)
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:102 (__cxxbasics_set_linker)
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


-- [cxxbasics][✓] CMAKE_CXX_COMPILER(/usr/bin/c++)'s linker is set to: GNU gold linker
CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseCompilerCacheTool.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:15 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseCCache.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseCompilerCacheTool.cmake:8 (include)
  cmake/cxxbasics/CXXBasics.cmake:15 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseSCCache.cmake:5 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseCompilerCacheTool.cmake:12 (include)
  cmake/cxxbasics/CXXBasics.cmake:15 (include)
  CMakeLists.txt:5 (include)


-- [cxxbasics][✗] Could not set a compiler cache tool for the C compiler
-- [cxxbasics][✗] Could not set a compiler cache tool for the CXX compiler
CMake Error at /usr/lib/x86_64-linux-gnu/cmake/Qt5/Qt5Config.cmake:28 (find_package):
  Could not find a package configuration file provided by "Qt5Svg" with any
  of the following names:

    Qt5SvgConfig.cmake
    qt5svg-config.cmake

  Add the installation prefix of "Qt5Svg" to CMAKE_PREFIX_PATH or set
  "Qt5Svg_DIR" to a directory containing one of the above files.  If "Qt5Svg"
  provides a separate development package or SDK, be sure it has been
  installed.
Call Stack (most recent call first):
  CMakeLists.txt:16 (find_package)


-- Configuring incomplete, errors occurred!
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ sudo apt install -y libqt5svg5-dev
正在读取软件包列表... 完成
正在分析软件包的依赖关系树... 完成
正在读取状态信息... 完成                 
下列软件包是自动安装的并且现在不需要了：
  libllvm19
使用'sudo apt autoremove'来卸载它(它们)。
下列【新】软件包将被安装：
  libqt5svg5-dev
升级了 0 个软件包，新安装了 1 个软件包，要卸载 0 个软件包，有 2 个软件包未被升级。
需要下载 11.1 kB 的归档。
解压缩后会消耗 76.8 kB 的额外空间。
获取:1 http://mirrors.tuna.tsinghua.edu.cn/ubuntu noble/universe amd64 libqt5svg5-dev amd64 5.15.13-1 [11.1 kB]
已下载 11.1 kB，耗时 21秒 (527 B/s)        
正在选中未选择的软件包 libqt5svg5-dev:amd64。
(正在读取数据库 ... 系统当前共安装有 246311 个文件和目录。)
准备解压 .../libqt5svg5-dev_5.15.13-1_amd64.deb  ...
正在解压 libqt5svg5-dev:amd64 (5.15.13-1) ...
正在设置 libqt5svg5-dev:amd64 (5.15.13-1) ...
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ cmake ..
CMake Deprecation Warning at CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at cmake/cxxbasics/CXXBasics.cmake:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/InitCXXBasics.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:6 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/helpers/MacroCustomMessages.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/InitCXXBasics.cmake:10 (include)
  cmake/cxxbasics/CXXBasics.cmake:6 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/helpers/MacroOpt.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/InitCXXBasics.cmake:13 (include)
  cmake/cxxbasics/CXXBasics.cmake:6 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/DefaultSettings.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:9 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:6 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/compiler_detection/GetTargetArch.cmake:11 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:35 (include)
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:99 (__cxxbasics_set_linker)
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


-- [cxxbasics][✓] CMAKE_C_COMPILER(/usr/bin/cc)'s linker is set to: GNU gold linker
CMake Deprecation Warning at cmake/cxxbasics/compiler_detection/GetTargetArch.cmake:11 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:35 (include)
  cmake/cxxbasics/accelerators/UseFasterLinkers.cmake:102 (__cxxbasics_set_linker)
  cmake/cxxbasics/CXXBasics.cmake:12 (include)
  CMakeLists.txt:5 (include)


-- [cxxbasics][✓] CMAKE_CXX_COMPILER(/usr/bin/c++)'s linker is set to: GNU gold linker
CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseCompilerCacheTool.cmake:3 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/CXXBasics.cmake:15 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseCCache.cmake:4 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseCompilerCacheTool.cmake:8 (include)
  cmake/cxxbasics/CXXBasics.cmake:15 (include)
  CMakeLists.txt:5 (include)


CMake Deprecation Warning at cmake/cxxbasics/accelerators/UseSCCache.cmake:5 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.
Call Stack (most recent call first):
  cmake/cxxbasics/accelerators/UseCompilerCacheTool.cmake:12 (include)
  cmake/cxxbasics/CXXBasics.cmake:15 (include)
  CMakeLists.txt:5 (include)


-- [cxxbasics][✗] Could not set a compiler cache tool for the C compiler
-- [cxxbasics][✗] Could not set a compiler cache tool for the CXX compiler
CMake Deprecation Warning at stacer-core/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


CMake Deprecation Warning at stacer/CMakeLists.txt:2 (cmake_minimum_required):
  Compatibility with CMake < 3.5 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done (0.1s)
-- Generating done (0.0s)
-- Build files have been written to: /home/wyj/Stacer/build
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ make -j$(nproc)
[  0%] Built target stacer-core_autogen_timestamp_deps
[  1%] Automatic MOC for target stacer-core
[  1%] Built target stacer-core_autogen
[  5%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/cpu_info.cpp.o
[  5%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/stacer-core_autogen/mocs_compilation.cpp.o
[  6%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/disk_info.cpp.o
[  8%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/memory_info.cpp.o
/home/wyj/Stacer/stacer-core/Info/disk_info.cpp: In member function ‘QList<QString> DiskInfo::devices()’:
/home/wyj/Stacer/stacer-core/Info/disk_info.cpp:38:22: warning: ‘QList<T> QSet<T>::toList() const [with T = QString]’ is deprecated: Use values() instead. [-Wdeprecated-declarations]
   38 |     return set.toList();
      |            ~~~~~~~~~~^~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/QSet:1,
                 from /home/wyj/Stacer/stacer-core/Info/disk_info.h:7,
                 from /home/wyj/Stacer/stacer-core/Info/disk_info.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qset.h:265:14: note: declared here
  265 |     QList<T> toList() const { return values(); }
      |              ^~~~~~
/home/wyj/Stacer/stacer-core/Info/disk_info.cpp: In member function ‘QList<QString> DiskInfo::fileSystemTypes()’:
/home/wyj/Stacer/stacer-core/Info/disk_info.cpp:53:22: warning: ‘QList<T> QSet<T>::toList() const [with T = QString]’ is deprecated: Use values() instead. [-Wdeprecated-declarations]
   53 |     return set.toList();
      |            ~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qset.h:265:14: note: declared here
  265 |     QList<T> toList() const { return values(); }
      |              ^~~~~~
[ 10%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/network_info.cpp.o
[ 12%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/process.cpp.o
[ 13%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/process_info.cpp.o
[ 15%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Info/system_info.cpp.o
[ 17%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Tools/apt_source_tool.cpp.o
[ 18%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Tools/gnome_settings_tool.cpp.o
[ 20%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Tools/package_tool.cpp.o
[ 22%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Tools/service_tool.cpp.o
[ 24%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Utils/command_util.cpp.o
[ 25%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Utils/file_util.cpp.o
[ 27%] Building CXX object stacer-core/CMakeFiles/stacer-core.dir/Utils/format_util.cpp.o
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp: In static member function ‘static QString FormatUtil::formatBytes(const quint64&)’:
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:7:46: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
    7 | #define formatUnit(v, u, t) QString().sprintf("%.1f %s", \
      |                             ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
    8 |     ((double) v / (double) u), t)
      |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~             
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:15:14: note: in expansion of macro ‘formatUnit’
   15 |       return formatUnit(bytes, KIBI, "KiB");
      |              ^~~~~~~~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/QString:1,
                 from /home/wyj/Stacer/stacer-core/Utils/format_util.cpp:3:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:7:46: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
    7 | #define formatUnit(v, u, t) QString().sprintf("%.1f %s", \
      |                             ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
    8 |     ((double) v / (double) u), t)
      |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~             
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:17:14: note: in expansion of macro ‘formatUnit’
   17 |       return formatUnit(bytes, MEBI, "MiB");
      |              ^~~~~~~~~~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:7:46: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
    7 | #define formatUnit(v, u, t) QString().sprintf("%.1f %s", \
      |                             ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
    8 |     ((double) v / (double) u), t)
      |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~             
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:19:14: note: in expansion of macro ‘formatUnit’
   19 |       return formatUnit(bytes, GIBI, "GiB");
      |              ^~~~~~~~~~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:7:46: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
    7 | #define formatUnit(v, u, t) QString().sprintf("%.1f %s", \
      |                             ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
    8 |     ((double) v / (double) u), t)
      |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~             
/home/wyj/Stacer/stacer-core/Utils/format_util.cpp:21:14: note: in expansion of macro ‘formatUnit’
   21 |       return formatUnit(bytes, TEBI, "TiB");
      |              ^~~~~~~~~~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
/home/wyj/Stacer/stacer-core/Utils/file_util.cpp: In static member function ‘static bool FileUtil::writeFile(const QString&, const QString&, const QIODevice::OpenMode&)’:
/home/wyj/Stacer/stacer-core/Utils/file_util.cpp:38:39: warning: ‘QTextStream& QTextStreamFunctions::endl(QTextStream&)’ is deprecated: Use Qt::endl [-Wdeprecated-declarations]
   38 |         stream << content.toUtf8() << endl;
      |                                       ^~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/QTextStream:1,
                 from /home/wyj/Stacer/stacer-core/Utils/file_util.h:6,
                 from /home/wyj/Stacer/stacer-core/Utils/file_util.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qtextstream.h:293:75: note: declared here
  293 | ORE_EXPORT QT_DEPRECATED_VERSION_X(5, 15, "Use Qt::endl") QTextStream &endl(QTextStream &s);
      |                                                                        ^~~~

[ 29%] Linking CXX static library ../output/lib/libstacer-core.a
[ 31%] Built target stacer-core
[ 31%] Built target stacer_autogen_timestamp_deps
[ 32%] Automatic MOC and UIC for target stacer
AutoUic: /home/wyj/Stacer/stacer/app.ui: Warning: Z-order assignment: 'verticalSpacer_2' is not a valid widget.
[ 32%] Built target stacer_autogen
[ 34%] Automatic RCC for static.qrc
[ 37%] Building CXX object stacer/CMakeFiles/stacer.dir/Managers/setting_manager.cpp.o
[ 37%] Building CXX object stacer/CMakeFiles/stacer.dir/Managers/info_manager.cpp.o
[ 41%] Building CXX object stacer/CMakeFiles/stacer.dir/stacer_autogen/mocs_compilation.cpp.o
[ 39%] Building CXX object stacer/CMakeFiles/stacer.dir/Managers/app_manager.cpp.o
[ 43%] Building CXX object stacer/CMakeFiles/stacer.dir/Managers/tool_manager.cpp.o
[ 44%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/AptSourceManager/apt_source_edit.cpp.o
[ 46%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/AptSourceManager/apt_source_manager_page.cpp.o
[ 48%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/AptSourceManager/apt_source_repository_item.cpp.o
[ 50%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Dashboard/circlebar.cpp.o
/home/wyj/Stacer/stacer/Pages/AptSourceManager/apt_source_manager_page.cpp: In member function ‘void APTSourceManagerPage::on_txtSearchAptSource_textChanged(const QString&)’:
/home/wyj/Stacer/stacer/Pages/AptSourceManager/apt_source_manager_page.cpp:132:52: warning: ‘void QListWidget::setItemHidden(const QListWidgetItem*, bool)’ is deprecated: Use QListWidgetItem::setHidden() instead [-Wdeprecated-declarations]
  132 |             ui->listWidgetAptSources->setItemHidden(item, ! isContain);
      |             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QListWidgetItem:1,
                 from /home/wyj/Stacer/stacer/Pages/AptSourceManager/apt_source_manager_page.h:5,
                 from /home/wyj/Stacer/stacer/Pages/AptSourceManager/apt_source_manager_page.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qlistwidget.h:272:10: note: declared here
  272 |     void setItemHidden(const QListWidgetItem *item, bool hide);
      |          ^~~~~~~~~~~~~
[ 51%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Dashboard/dashboard_page.cpp.o
[ 53%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Dashboard/linebar.cpp.o
[ 55%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/GnomeSettings/appearance_settings.cpp.o
[ 56%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/GnomeSettings/gnome_settings_page.cpp.o
[ 58%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/GnomeSettings/unity_settings.cpp.o
[ 60%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/GnomeSettings/window_manager_settings.cpp.o
[ 62%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Helpers/helpers_page.cpp.o
[ 63%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Helpers/host_manage.cpp.o
[ 65%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Processes/processes_page.cpp.o
[ 67%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Resources/history_chart.cpp.o
[ 68%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Resources/resources_page.cpp.o
[ 70%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Search/search_page.cpp.o
[ 72%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Services/service_item.cpp.o
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp: In constructor ‘HistoryChart::HistoryChart(const QString&, const int&, QtCharts::QCategoryAxis*, QWidget*)’:
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:25:29: warning: ‘void QtCharts::QChart::setAxisY(QtCharts::QAbstractAxis*, QtCharts::QAbstractSeries*)’ is deprecated [-Wdeprecated-declarations]
   25 |             mChart->setAxisY(mAxisY, mSeriesList.at(i));
      |             ~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCharts/QtCharts:25,
                 from /home/wyj/Stacer/stacer/Pages/Resources/history_chart.h:6,
                 from /home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:108:28: note: declared here
  108 |     Q_DECL_DEPRECATED void setAxisY(QAbstractAxis *axis, QAbstractSeries *series = nullptr);
      |                            ^~~~~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp: In member function ‘void HistoryChart::init()’:
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:56:18: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisX(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   56 |     mChart->axisX()->setRange(0, 60);
      |     ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:109:38: note: declared here
  109 |     Q_DECL_DEPRECATED QAbstractAxis *axisX(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:57:18: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisX(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   57 |     mChart->axisX()->setReverse(true);
      |     ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:109:38: note: declared here
  109 |     Q_DECL_DEPRECATED QAbstractAxis *axisX(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp: In lambda function:
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:69:22: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisX(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   69 |         mChart->axisX()->setLabelsColor(chartLabelColor);
      |         ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:109:38: note: declared here
  109 |     Q_DECL_DEPRECATED QAbstractAxis *axisX(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:70:22: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisX(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   70 |         mChart->axisX()->setGridLineColor(chartGridColor);
      |         ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:109:38: note: declared here
  109 |     Q_DECL_DEPRECATED QAbstractAxis *axisX(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:72:22: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisY(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   72 |         mChart->axisY()->setLabelsColor(chartLabelColor);
      |         ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:110:38: note: declared here
  110 |     Q_DECL_DEPRECATED QAbstractAxis *axisY(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:73:22: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisY(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   73 |         mChart->axisY()->setGridLineColor(chartGridColor);
      |         ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:110:38: note: declared here
  110 |     Q_DECL_DEPRECATED QAbstractAxis *axisY(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp: In member function ‘void HistoryChart::setYMax(const int&)’:
/home/wyj/Stacer/stacer/Pages/Resources/history_chart.cpp:82:18: warning: ‘QtCharts::QAbstractAxis* QtCharts::QChart::axisY(QtCharts::QAbstractSeries*) const’ is deprecated [-Wdeprecated-declarations]
   82 |     mChart->axisY()->setRange(0, value);
      |     ~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCharts/qchart.h:110:38: note: declared here
  110 |     Q_DECL_DEPRECATED QAbstractAxis *axisY(QAbstractSeries *series = nullptr) const;
      |                                      ^~~~~
[ 74%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Services/services_page.cpp.o
/home/wyj/Stacer/stacer/Pages/Search/search_page.cpp: In member function ‘QList<QStandardItem*> SearchPage::createRow(const QString&)’:
/home/wyj/Stacer/stacer/Pages/Search/search_page.cpp:326:72: warning: ‘QDateTime QFileInfo::created() const’ is deprecated: Use either birthTime() or metadataChangeTime() [-Wdeprecated-declarations]
  326 |     QStandardItem *i_creationTime = new QStandardItem(fileInfo->created().toString(mSearchResultDateFormat));
      |                                                       ~~~~~~~~~~~~~~~~~^~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qdir.h:44,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/qfiledialog.h:44,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QFileDialog:1,
                 from /home/wyj/Stacer/stacer/Pages/Search/search_page.h:5,
                 from /home/wyj/Stacer/stacer/Pages/Search/search_page.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qfileinfo.h:139:15: note: declared here
  139 |     QDateTime created() const;
      |               ^~~~~~~
/home/wyj/Stacer/stacer/Pages/Search/search_page.cpp:327:46: warning: ‘QDateTime QFileInfo::created() const’ is deprecated: Use either birthTime() or metadataChangeTime() [-Wdeprecated-declarations]
  327 |     i_creationTime->setData(fileInfo->created().toString(mSearchResultDateFormat), rowRole);
      |                             ~~~~~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qfileinfo.h:139:15: note: declared here
  139 |     QDateTime created() const;
      |               ^~~~~~~
/home/wyj/Stacer/stacer/Pages/Search/search_page.cpp:328:46: warning: ‘QDateTime QFileInfo::created() const’ is deprecated: Use either birthTime() or metadataChangeTime() [-Wdeprecated-declarations]
  328 |     i_creationTime->setData(fileInfo->created().toString(mSearchResultDateFormat), Qt::ToolTipRole);
      |                             ~~~~~~~~~~~~~~~~~^~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qfileinfo.h:139:15: note: declared here
  139 |     QDateTime created() const;
      |               ^~~~~~~
/home/wyj/Stacer/stacer/Pages/Resources/resources_page.cpp: In lambda function:
/home/wyj/Stacer/stacer/Pages/Resources/resources_page.cpp:69:59: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
   69 |                                     .arg(QString().sprintf("%1.2f%%", slice->percentage() * 100)));
      |                                          ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qobject.h:47,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/qwidget.h:45,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QWidget:1,
                 from /home/wyj/Stacer/stacer/Pages/Resources/resources_page.h:4,
                 from /home/wyj/Stacer/stacer/Pages/Resources/resources_page.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
/home/wyj/Stacer/stacer/Pages/Resources/resources_page.cpp: In member function ‘void ResourcesPage::updateMemoryChart()’:
/home/wyj/Stacer/stacer/Pages/Resources/resources_page.cpp:354:53: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
  354 |                               .arg(QString().sprintf("%.1f",percent))
      |                                    ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
/home/wyj/Stacer/stacer/Pages/Resources/resources_page.cpp:363:53: warning: ‘QString& QString::sprintf(const char*, ...)’ is deprecated: Use asprintf(), arg() or QTextStream instead [-Wdeprecated-declarations]
  363 |                               .arg(QString().sprintf("%.1f",percent2))
      |                                    ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:390:14: note: declared here
  390 |     QString &sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3);
      |              ^~~~~~~
[ 75%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Settings/settings_page.cpp.o
[ 77%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/StartupApps/startup_app.cpp.o
[ 79%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/StartupApps/startup_app_edit.cpp.o
[ 81%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/StartupApps/startup_apps_page.cpp.o
[ 82%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/SystemCleaner/byte_tree_widget.cpp.o
/home/wyj/Stacer/stacer/Pages/StartupApps/startup_app_edit.cpp: In member function ‘void StartupAppEdit::init()’:
/home/wyj/Stacer/stacer/Pages/StartupApps/startup_app_edit.cpp:34:55: warning: ‘const QRect QDesktopWidget::availableGeometry(int) const’ is deprecated: Use QGuiApplication::screens() [-Wdeprecated-declarations]
   34 |             size(), qApp->desktop()->availableGeometry())
      |                                                       ^
In file included from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QDesktopWidget:1,
                 from /home/wyj/Stacer/stacer/Pages/StartupApps/startup_app_edit.h:5,
                 from /home/wyj/Stacer/stacer/Pages/StartupApps/startup_app_edit.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qdesktopwidget.h:88:67: note: declared here
   88 |     QT_DEPRECATED_X("Use QGuiApplication::screens()") const QRect availableGeometry(int screen = -1) const;
      |                                                                   ^~~~~~~~~~~~~~~~~
[ 84%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/SystemCleaner/system_cleaner_page.cpp.o
[ 86%] Building CXX object stacer/CMakeFiles/stacer.dir/Pages/Uninstaller/uninstaller_page.cpp.o
/home/wyj/Stacer/stacer/Pages/SystemCleaner/byte_tree_widget.cpp: In member function ‘virtual bool ByteTreeWidget::operator<(const QTreeWidgetItem&) const’:
/home/wyj/Stacer/stacer/Pages/SystemCleaner/byte_tree_widget.cpp:16:60: warning: ‘bool QVariant::operator<(const QVariant&) const’ is deprecated [-Wdeprecated-declarations]
   16 |         return this->data(1, 0x0100) < other.data(1, 0x0100);
      |                                                            ^
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qabstractitemmodel.h:43,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/qabstractitemview.h:45,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/qtreeview.h:44,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/qtreewidget.h:44,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QTreeWidgetItem:1,
                 from /home/wyj/Stacer/stacer/Pages/SystemCleaner/byte_tree_widget.h:4,
                 from /home/wyj/Stacer/stacer/Pages/SystemCleaner/byte_tree_widget.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qvariant.h:467:31: note: declared here
  467 |     QT_DEPRECATED inline bool operator<(const QVariant &v) const
      |                               ^~~~~~~~
/home/wyj/Stacer/stacer/Pages/StartupApps/startup_apps_page.cpp: In member function ‘bool StartupAppsPage::checkIfDisabled(const QString&)’:
/home/wyj/Stacer/stacer/Pages/StartupApps/startup_apps_page.cpp:27:44: warning: ‘int QByteArray::indexOf(const QString&, int) const’ is deprecated: Use QString's toUtf8(), toLatin1() or toLocal8Bit() [-Wdeprecated-declarations]
   27 |     return autostart_file.readAll().indexOf(disabled_str, 0) != -1;
      |            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qobject.h:47,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/qwidget.h:45,
                 from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QWidget:1,
                 from /home/wyj/Stacer/stacer/Pages/StartupApps/startup_apps_page.h:4,
                 from /home/wyj/Stacer/stacer/Pages/StartupApps/startup_apps_page.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qstring.h:1520:12: note: declared here
 1520 | inline int QByteArray::indexOf(const QString &s, int from) const
      |            ^~~~~~~~~~
[ 87%] Building CXX object stacer/CMakeFiles/stacer.dir/app.cpp.o
[ 89%] Building CXX object stacer/CMakeFiles/stacer.dir/feedback.cpp.o
[ 91%] Building CXX object stacer/CMakeFiles/stacer.dir/main.cpp.o
[ 93%] Building CXX object stacer/CMakeFiles/stacer.dir/signal_mapper.cpp.o
[ 94%] Building CXX object stacer/CMakeFiles/stacer.dir/sliding_stacked_widget.cpp.o
[ 96%] Building CXX object stacer/CMakeFiles/stacer.dir/stacer_autogen/EWIEGA46WW/qrc_static.cpp.o
/home/wyj/Stacer/stacer/app.cpp: In member function ‘void App::init()’:
/home/wyj/Stacer/stacer/app.cpp:28:55: warning: ‘const QRect QDesktopWidget::availableGeometry(int) const’ is deprecated: Use QGuiApplication::screens() [-Wdeprecated-declarations]
   28 |             size(), qApp->desktop()->availableGeometry())
      |                                                       ^
In file included from /usr/include/x86_64-linux-gnu/qt5/QtWidgets/QtWidgets:58,
                 from /usr/include/x86_64-linux-gnu/qt5/QtCharts/QtChartsDepends:5,
                 from /usr/include/x86_64-linux-gnu/qt5/QtCharts/QtCharts:3,
                 from /home/wyj/Stacer/stacer/Pages/Dashboard/circlebar.h:5,
                 from /home/wyj/Stacer/stacer/Pages/Dashboard/dashboard_page.h:13,
                 from /home/wyj/Stacer/stacer/app.h:11,
                 from /home/wyj/Stacer/stacer/app.cpp:1:
/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qdesktopwidget.h:88:67: note: declared here
   88 |     QT_DEPRECATED_X("Use QGuiApplication::screens()") const QRect availableGeometry(int screen = -1) const;
      |                                                                   ^~~~~~~~~~~~~~~~~
/home/wyj/Stacer/stacer/main.cpp: In function ‘void messageHandler(QtMsgType, const QMessageLogContext&, const QString&)’:
/home/wyj/Stacer/stacer/main.cpp:45:31: warning: ‘QTextStream& QTextStreamFunctions::endl(QTextStream&)’ is deprecated: Use Qt::endl [-Wdeprecated-declarations]
   45 |             stream << text << endl;
      |                               ^~~~
In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qdebug.h:49,
                 from /usr/include/x86_64-linux-gnu/qt5/QtCore/QDebug:1,
                 from /home/wyj/Stacer/stacer/main.cpp:4:
/usr/include/x86_64-linux-gnu/qt5/QtCore/qtextstream.h:293:75: note: declared here
  293 | ORE_EXPORT QT_DEPRECATED_VERSION_X(5, 15, "Use Qt::endl") QTextStream &endl(QTextStream &s);
      |                                                                        ^~~~

[ 98%] Linking CXX executable ../output/stacer
[100%] Built target stacer
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ ls -la stacer
总计 80
drwxrwxr-x  5 wyj wyj  4096 12月 21 16:27 .
drwxrwxr-x  6 wyj wyj  4096 12月 21 16:25 ..
drwxrwxr-x  5 wyj wyj  4096 12月 21 16:25 CMakeFiles
-rw-rw-r--  1 wyj wyj  3032 12月 21 16:25 cmake_install.cmake
drwxrwxr-x  2 wyj wyj  4096 12月 21 16:25 .lupdate
-rw-rw-r--  1 wyj wyj 54804 12月 21 16:25 Makefile
drwxrwxr-x 16 wyj wyj  4096 12月 21 16:27 stacer_autogen
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ file stacer
stacer: directory
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ sudo make install
[  0%] Built target stacer-core_autogen_timestamp_deps
[  1%] Built target stacer-core_autogen
[ 31%] Built target stacer-core
[ 31%] Built target stacer_autogen_timestamp_deps
[ 32%] Built target stacer_autogen
[100%] Built target stacer
Install the project...
-- Install configuration: "Debug"
wyj@wyj-VMware-Virtual-Platform:~/Stacer/build$ which stacer
/usr/bin/stacer
  
