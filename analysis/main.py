import pandas as pd
import sys


def create_dataframe(path):

    data = pd.read_csv(path)
    print(data)

if __name__ == "__main__":

    create_dataframe(sys.argv[1])
    # 
    # dict = {}
    # dict["two"] = 2
    # print(dict)
    # if "one" in dict.keys():
    #     print(dict["one"])
