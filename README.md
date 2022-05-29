# float_to_int
Type punning in c/c++


There are a lot of situations, especially in the embedded system field, you need to transfer a float value. For doing this, Using gain and offset to make the float value to an integer at the sender and reform it at the receiver is a typical method. This method works well with the cost of taking a lot of unnecessary resources.
Assume that you need to send a float value of '3.14'. Rather than the mentioned method, There are two other methods that you can use as follows. 
# Method1. Type punning using pointers:
On the sender side:
float f_send = 3.14;
int i_send = *(int*)&f_send ;
On the receiver side:
int i_receive = i_send; 
float f_receive = *(float*)&i_receive ;

# Method2. Type punning using unions:
