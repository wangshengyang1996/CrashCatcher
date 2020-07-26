# CrashCatcher

https://juejin.im/post/5f1adc98e51d4534732069d1

#### 运行截图
![截图](https://github.com/wangshengyang1996/CrashCatcher/blob/master/screenshot.png)

#### 示例输出
```
*** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***
Build fingerprint: 'OnePlus/OnePlus7T_CH/OnePlus7T:10/QKQ1.190716.003/2001030004:user/release-keys'
Revision: '0'
ABI: 'arm64'
Timestamp: 2020-07-24 19:49:58+0800
pid: 11626, uid: 10675, process: >>> com.wsy.crashcatcher <<<
signal 6 (SIGABRT), code -6 (SI_TKILL), fault addr --------
     x0 0000000000000000 x1 0000000000002d6a x2 0000000000000006 x3 0000007ffa592720
     x4 0000007ffa590a00 x5 0000007ffa590a00 x6 0000007ffa590a00 x7 aa5402445aac8798
     x8 0000000000000083 x9 aa5402445aac8798 x10 0000000000430000 x11 0000007d48f19000
     x12 000000000000018c x13 0000000000489900 x14 0000000000000006 x15 ffffffffffffffff
     x16 0000007dcc1b1cd0 x17 0000007dcc1907a0 x18 0000007dcf59a000 x19 0000007d49a10800
     x20 0000000000000000 x21 0000007d49a10800 x22 0000007ffa5909a0 x23 0000007d3d7dc63b
     x24 0000000000000004 x25 0000007dceff6020 x26 0000007d49a108b0 x27 0000000000000001
     x28 0000007ffa590730 x29 0000007ffa5906e0
     sp 0000007ffa5906d0 lr 0000007d2cd726a4 pc 0000007dcc1907a8
backtrace:
     #00 pc 00000000000533d0  /data/app/com.wsy.crashcatcher-Sv1ILhrXAIcPR4jA9OCt3Q==/lib/arm64/libcrash_dumper.so (_Z14storeCallStackPNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE+68) (BuildId: 74b7663be098740b4561517c9cf17c2f057c089c)
     #01 pc 0000000000049934  /data/app/com.wsy.crashcatcher-Sv1ILhrXAIcPR4jA9OCt3Q==/lib/arm64/libcrash_dumper.so (_Z10sigHandleriP7siginfoPv+872) (BuildId: 74b7663be098740b4561517c9cf17c2f057c089c)
     #02 pc 000000000000063c  [vdso] (__kernel_rt_sigreturn+0)
     #03 pc 00000000000c27a8  /apex/com.android.runtime/lib64/bionic/libc.so (tgkill+8) (BuildId: a2584ee8458a61d422edf24b4cd23b78)
     #04 pc 00000000000006a4  /data/app/com.wsy.crashcatcher-Sv1ILhrXAIcPR4jA9OCt3Q==/lib/arm64/libtest_crash.so (_Z10raiseErrori+24) (BuildId: b2cd4b1a020680de4f99e469e5544e21c4e49b5d)
     #05 pc 00000000000006d0  /data/app/com.wsy.crashcatcher-Sv1ILhrXAIcPR4jA9OCt3Q==/lib/arm64/libtest_crash.so (Java_com_wsy_crashcatcher_MainActivity_nativeCrash+32) (BuildId: b2cd4b1a020680de4f99e469e5544e21c4e49b5d)
     #06 pc 0000000000140354  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #07 pc 0000000000137338  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #08 pc 0000000000145ff0  /apex/com.android.runtime/lib64/libart.so (_ZN3art9ArtMethod6InvokeEPNS_6ThreadEPjjPNS_6JValueEPKc+248) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #09 pc 00000000002e394c  /apex/com.android.runtime/lib64/libart.so (_ZN3art11interpreter34ArtInterpreterToCompiledCodeBridgeEPNS_6ThreadEPNS_9ArtMethodEPNS_11ShadowFrameEtPNS_6JValueE+388) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #10 pc 00000000002debac  /apex/com.android.runtime/lib64/libart.so (_ZN3art11interpreter6DoCallILb0ELb0EEEbPNS_9ArtMethodEPNS_6ThreadERNS_11ShadowFrameEPKNS_11InstructionEtPNS_6JValueE+896) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #11 pc 00000000005a1138  /apex/com.android.runtime/lib64/libart.so (MterpInvokeVirtual+652) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #12 pc 0000000000131818  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #13 pc 00000000002b4c60  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #14 pc 00000000005926a0  /apex/com.android.runtime/lib64/libart.so (artQuickToInterpreterBridge+1036) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #15 pc 000000000014046c  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #16 pc 0000000000137338  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #17 pc 0000000000145ff0  /apex/com.android.runtime/lib64/libart.so (_ZN3art9ArtMethod6InvokeEPNS_6ThreadEPjjPNS_6JValueEPKc+248) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #18 pc 00000000004b1040  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #19 pc 00000000004b2be4  /apex/com.android.runtime/lib64/libart.so (_ZN3art12InvokeMethodERKNS_33ScopedObjectAccessAlreadyRunnableEP8_jobjectS4_S4_m+1484) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #20 pc 000000000043df18  /apex/com.android.runtime/lib64/libart.so (unknown) (BuildId: ced0e918261ca872f5cff4cdba80b1a9)
     #21 pc 00000000000c2c38  /system/framework/arm64/boot.oat (unknown) (BuildId: e30afaca6cda76e4ae36a16405b32e73a1434e56)

```
