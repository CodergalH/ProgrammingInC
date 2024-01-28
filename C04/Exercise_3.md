**Which of the following are invalid constants? Why?**
```
123.456         0x10.5      0X0G1
0001            0xFFFF      123L
0Xab05          0L          -597.25
123.5e2         .0001       +12
98.6F           98.7U       17777s
0996            -12E-12     07777
1234uL          1.2Fe-7     15,000
1.234L          197u        100U
0XABCDEFL       0xabcu      +123
```

**Solutions**
> 0X0G1 - G is not an hexadecimal character
> 17777s - invalid format specifier
> 15,000 - Comma should not included in integer value
