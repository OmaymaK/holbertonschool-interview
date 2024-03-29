## 0x10-rain

*Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.*

* Prototype: def rain(walls)
* walls is a list of non-negative integers.
* Return: Integer indicating total amount of rainwater retained.
* Assume that the ends of the list (before index 0 and after index walls[-1]) are not walls, meaning they will not retain water.
* If the list is empty return 0.

```
jesse@ubuntu:~/0x10$ cat 0_main.py
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))

jesse@ubuntu:~/0x10$ 
jesse@ubuntu:~/0x10$ ./0_main.py
6
6
jesse@ubuntu:~/0x10$ 
```

Visual representation of the walls [0, 1, 0, 2, 0, 3, 0, 4]

![Alt text](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/4/85ef782020ac6efdc7004b62ea86724a552285b4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230619%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230619T103532Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=357eb27c8acf04cbfafd39e45f7d695d4f24f4f4e3748aa369cdda1b6ce45fd0)
