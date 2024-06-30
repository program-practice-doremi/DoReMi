import pandas as pd
import numpy as np
datas = pd.read_csv("songs.csv")
# print(datas)

if __name__ == "__main__":
    while True:
        print("1:添加新歌曲，0:退出并保存")
        a = int(input())
        if a == 0:
            datas.to_csv("songs.csv", index=False)
            exit()
        elif a == 1:
            currentDict = dict()
            print("曲名：")
            currentDict["曲名"] = input()
            print("调性：")
            currentDict["调性"] = input()
            print("输入乐谱，1-7，共16*4=64个数字，0代表空拍，用空格相隔开")
            Finalstring = "[["
            for i in range(1, 5):
                print("第{0}小节".format(i))
                currentStr = input().split(" ")
                while len(currentStr) != 16:
                    print("请输入16个数字！再输入一遍，第{0}小节".format(i))
                    currentStr = input()
                count = 0
                for char in currentStr:
                    Finalstring += char
                    count += 1
                    if (count % 16 == 0):
                        if (i == 4):
                            break
                        Finalstring += "],["
                    else:
                        Finalstring += ","
            Finalstring += "]]"
            print(Finalstring)
            currentDict["乐谱"] = Finalstring
            datas.loc[len(datas)] = currentDict
            print(datas)
