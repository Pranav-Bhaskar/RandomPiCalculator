from random import randint

def point():
	x = abs(randint(0,10000000))
	y = abs(randint(0,10000000))
	return (x,y)
	
def ploter():
	tot = 0
	cir = 0
	while(True):
		if tot % 1000000 == 0 and tot != 0:
			print((cir*4)/float(tot))
		x , y = point()
		if((x**2 + y**2)**(1/2) <= 10000000):
			cir += 1
		tot += 1
ploter()
