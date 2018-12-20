# magic-code.c
a code generator
		Magic ALgorithm
What will the algorithm do -
it will take a 6 digit number from the user and code it into a different number according to the user's choice which can help in 
secure communication between two parties.

algorithm-
step 1 get a 6 digit number from the user.
step 2 seperate each bit from the number and store it in a different 
variable.
{
let original number given by the user be onum
let onum=123456;
{
p=onum%10  (p=6)
onum=onum/10 (12345)
q=onum%10 (qq=5)
onum/=10 (1234)
r=onum%10 (r=4)
onum=onum/10 (123)
s=onum%10 (s=3)
onum/=10 (12)
t=onum%10 (t=2)
onum/=10 (1)
u=onum%10 (u=1)
}
}

step 3 increase each seperated number by 6 variables a,b,c,d,e,f
{
g=u+a if(g>9){g=g%10}
h=t+b if(h>9){h=h%10}
i=s+c if(i>9){i=i%10}
j=r+d if(j>9){j=j%10}
k=q+e if(k>9){k=k%10}
l=p+f if(l>9){l=l%10}
}

step 4 now create the coded number by using the variables g,h,i,j,k,l.
{
cnum=g*100000+h*10000+i*1000+j*100+k*10+l
}
step 5  print the coded number





