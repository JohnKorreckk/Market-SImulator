import yfinance as yf

import requests as rq

stock = yf.Ticker(input("Input Ticker: "))

print(stock.info)