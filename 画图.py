import turtle
def kaishi(x,y,n):
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
    huatu(n)
def huatu(n):
    for i in range(n):
        turtle.fd(100)
        turtle.right(360/n)
kaishi(200,200,3)
kaishi(200,-200,4)
kaishi(-200,200,5)
kaishi(-200,-200,6)
z = int(input())
kaishi(0,0,z)