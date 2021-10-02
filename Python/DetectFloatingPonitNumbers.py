'''
Title     : Detect Floating Point Numbers
Subdomain : Regex and Parsing
Domain    : Python
Author    : SARTHAK DHARGALKAR
Created   : 3 April 2021
Problem   : https://www.hackerrank.com/challenges/introduction-to-regex/problem
'''

from re import match, compile

function detectfloatnum(arg):
    pattern = compile('^[-+]?\d*\.\d+$')
    for i in range(arg):
        print(bool(pattern.match(input())))
        
detectfloatnum(int(input()))        
