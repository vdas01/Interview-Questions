There were a large number of orders placed on Amazon Prime Day. The orders are packed and are at the warehouse ready to be delivered. The delivery agent needs to deliver them in as few trips as possible.

In a single trip, the delivery agent can choose packages following either of two rules:
# Choose two packages with the same weight
# Choose three packages with the same weight
Determine the minimum number of trips required to deliver the packages. If it is not possible to deliver all of them, return -1.

Example:-
weights = [2, 4, 6, 6, 4, 2, 4]
The agent needs a minimum of 3 trips as shown below. Return 3 as the answer.
![q1](https://user-images.githubusercontent.com/72196604/182235968-8f26967c-3b30-44f1-b21d-8817c0ec1ae3.jpg)
Complete the function getMinimumTrips in the editor below.

getMinimumTrips has the following parameter:
    int weights[n]:  the weights of each package

Returns

    int: the minimum number of trips required or -1 if it is not possible to deliver them all

Constraints

1 ≤ n ≤ 105
1 ≤ weights[i] ≤ 109
Input Format For Custom Testing

The first line contains an integer n, the number of elements in weights[].

Each line i of the n subsequent lines (where 0 ≤ i < n) contains an integer, weights[i].Sample Case 0

Sample Input For Custom Testing
![q1 2](https://user-images.githubusercontent.com/72196604/182236346-dde3fdc9-d6aa-4ce7-a467-0318594a186c.jpg)
![q1 3](https://user-images.githubusercontent.com/72196604/182236448-21029a9f-547f-4309-9963-4acdb30a5813.jpg)
![q1 4](https://user-images.githubusercontent.com/72196604/182236481-5bcff688-5059-46f2-a988-61f1261a11db.jpg)





