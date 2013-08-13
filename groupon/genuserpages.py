#!/usr/bin/python
import random;

MAXUSERS=1000
MAXPAGES=100
def genran1(fname):
    freader = open(fname, "w");
    prevpageno = 0;
    for user in range(1,MAXUSERS +1):
        n = random.randint(4,MAXPAGES);
        outstr = str(user) + ",";
        for j in range(n):
            pageno = random.randint(1,MAXPAGES);
            while (pageno == prevpageno):
                pageno = random.randint(1,MAXPAGES);
            prevpageno = pageno;
            outstr += "page" + str(pageno) + ",";
        outstr = outstr.rstrip(',');
        print >>freader, outstr;     

if __name__ == '__main__':
    genran1("pathforpage.csv");
