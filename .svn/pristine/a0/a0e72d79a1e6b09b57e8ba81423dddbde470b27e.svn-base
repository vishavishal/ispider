#!/usr/bin/python
import csv;
import sys;
# --- http://www.careercup.com/question?id=22419662---- #
#Globals
fname = "pathforpage.csv";
MAXPATH = 3;

#Core Function
def checkpagepath():
    fopen = open(fname, "r");
    creader = csv.reader(fopen);
    pagehash = {};
    keylist = [];

    for line in fopen:
        arr = line.split(",");
        firstkey = "";
        secondkey = "";
        thirdkey = "";
        for item in range(1, len(arr)-1):
            if (not firstkey):
                firstkey = arr[item];
                continue;
            elif (not secondkey):
                secondkey = arr[item];
                continue;
            thirdkey = arr[item];
            key = firstkey + secondkey + thirdkey;
            keylist.append(key);

            if (pagehash.has_key(key)):
                pagehash[key] += 1;
            else:
                pagehash[key] = 1;

    maxoccurence = 0;
    for skey in keylist:
        if (pagehash[skey] > maxoccurence):
            maxvisitedpage = skey;
            maxoccurence = pagehash[skey];
            
    print "Page : %s : %d" % (maxvisitedpage, maxoccurence);
#Main
if __name__ == '__main__':
    checkpagepath();
