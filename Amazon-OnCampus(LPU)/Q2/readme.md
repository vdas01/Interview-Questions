As an intern at Amazon, you have been assigned a task to implement the sign-in pages in the Amazon Dummy Website.

There are three sign-in pages, each with its own API:
![amzon](https://user-images.githubusercontent.com/72196604/182232076-e6b68008-bf5c-4148-91d5-b979d843e053.jpg)

Notes:

Initially, there are no users registered.
If a user is already logged in and makes a login request, the new request is unsuccessful.  The original login remains active.
Each log is an API request and is in one of the three allowed formats.
The order of execution of each request is the same as the order of input.
The usernames and passwords are case-sensitive.

Example:- 
The website receives the following API requests in order:
![amzon0](https://user-images.githubusercontent.com/72196604/182232504-c5c84028-489c-41e7-ab39-c600b35145af.jpg)
Function Description

Complete the function implementAPI in the editor below.

implementAPI has the following parameter:

    string logs[n]: each of the API requests

Returns

    string[n]: an array of strings where ith string is the return value of the ith API request

Constraints
![amzon2](https://user-images.githubusercontent.com/72196604/182232625-263bc10d-577e-4867-a512-42524ffca216.jpg)
![amazon3](https://user-images.githubusercontent.com/72196604/182232655-bacafc33-3871-4ccb-b5c8-adcc17effc3a.jpg)
![amazon4](https://user-images.githubusercontent.com/72196604/182232678-fd8581e5-98f1-4f89-8c10-c013800069a6.jpg)







