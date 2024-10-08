Python 3.11.3 (tags/v3.11.3:f3909b8, Apr  4 2023, 23:49:59) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import pandas as pd
>>> df=pd.DataFrame({'Yes':['David',21],'No':['Ashok',21]})
>>> df
     Yes     No
0  David  Ashok
1     21     21

>>> pd.Series([1,2,3,4])
0    1
1    2
2    3
3    4
dtype: int64

>>> pd.Series([1,2,3,4],dtype='float32')
0    1.0
1    2.0
2    3.0
3    4.0
dtype: float32

