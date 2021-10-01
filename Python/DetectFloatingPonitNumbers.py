'''
Title     : Detect Floating Point Numbers
Subdomain : Regex and Parsing
Domain    : Python
Author    : SARTHAK DHARGALKAR
Created   : 3 April 2021
Problem   : https://www.hackerrank.com/challenges/introduction-to-regex/problem
'''

from re import match, compile

pattern = compile('^[-+]?\d*\.\d+$')
for i in range(int(input())):
    print(bool(pattern.match(input())))
