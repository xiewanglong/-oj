import turtle
x = int(input())
turtle.penup()
turtle.left(90)
turtle.fd(3 * 25 * x)
turtle.right(15)
turtle.pendown()
for i in range(5):
    turtle.right(150)
    turtle.fd(2 * 25 * x)
    turtle.left(78)
    turtle.fd(2 * 25 * x)