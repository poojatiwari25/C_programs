console.log("Hello");

console.log('"Hello"');

var a = parseInt(prompt('Enter the first number'));
var b = parseInt(prompt('Enter the second number'));
var c= a+b;
console.log(c);


var p = parseInt(prompt('Enter principal '));
var r = parseInt(prompt('Enter rate '));
var t = parseInt(prompt('Enter time '));
//t=t/12; //if time is in months
var si= (p*r*t)/100;
console.log(si);


var p = parseInt(prompt('Enter phy marks '));
var c = parseInt(prompt('Enter chem marks '));
var m = parseInt(prompt('Enter math marks '));
var e = parseInt(prompt('Enter eng marks '));
var h = parseInt(prompt('Enter hin marks '));
var tob =  (p+c+m+e+h)
var avg= parseFloat(tob/5)
console.log(avg);


var a = parseFloat(prompt("enter temperature:"));
var f;
var c = parseFloat((f-32) * 5 / 9 );
console.log(c);


var l = parseInt(prompt("enter length:"));
var b = parseInt(prompt("enter breadth:"));
var aor= l*b;
console.log(aor);
var r = parseInt(prompt("enter radius:"));
var aoc=3.14*r*r;
console.log(aoc);


var a = parseInt(prompt("enter 1st no:"));
var b = parseInt(prompt("enter 2nd no:"));
console.log("Before swapping a and b is :",a,b);
c=a;
a=b;
b=c;
console.log("After swapping a and b is: ", a,b);




var x = (prompt("enter four digit no:"));
var a,b,c,d;
a=parseInt(x/1000)%10;
b=parseInt(x/100)%10;
c=parseInt(x/10)%10;
d=parseInt(x%10);
console.log("The sum of first and last digit is: ",(a+d));



var x = (prompt("enter four digit no:"));
var a,b,c,d;
a=parseInt(x/1000)%10;
b=parseInt(x/100)%10;
c=parseInt(x/10)%10;
d=parseInt(x%10);
console.log("The sum of first and last digit is: ",(b+c));


var x = (prompt("enter four digit no:"));
var a,b,c,d;
a=parseInt(x/1000)%10;
b=parseInt(x/100)%10;
c=parseInt(x/10)%10;
d=parseInt(x%10);
console.log("The sum of first and last digit is: ",(a+b+c+d));




var r;
var n = parseInt(prompt("enter four digit no:"));
while(n>0)
{
  r=parseInt(n%10);
  console.log(r);
  n=parseInt(n/10);
}
 


var a,b,c,d,e;
var n = parseInt(prompt("enter five digit no:"));
a=parseInt(n/10000)%10;
b=parseInt(n/1000)%10;
c=parseInt(n/100)%10;
d=parseInt(n/10)%10;
e=parseInt(n%10);
r =parseInt((a+1)%10)*10000+((b+1)%10)*1000+((c+1)%10)*100+((d+1)%10)*10+(e+1)*1;
console.log(r);
 
 

 var n = parseInt(prompt("enter a no:"));
if(n<0)
   console.log("the number is negative");
else if(n>0)
   console.log("the number is positive");
else if(n==0)
   console.log("You entered zero");
else
   console.log("Not a valid no");



var n = parseInt(prompt("enter a no:"));
if(n%2==0)
   console.log("the number is even");
else
   console.log("the number is odd");

 