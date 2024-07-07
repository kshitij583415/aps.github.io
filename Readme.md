# Snapchat

*Course Name*  
Algorithmic Problem Solving

*Course Code*  
23ECSE309

*Name*  
Kshitij Singh

*University*  
KLE Technological University, Hubballi-31

*Course Instructor*  
Prakash Hegade

*USN*  
01FE21BCS314

### This page hosts:

1. [*Introduction*](#introduction)
2. [*Objectives*](#objectives)
3. [*Data Structures and Algorithms applicable*](#data-structures-and-algorithms-applicable)

## Introduction
![image](images/img1.jpg)
Snapchat is an American multimedia instant messaging app and service developed by Snap Inc., originally Snapchat Inc. One of the principal features of Snapchat is that pictures and messages are usually only available for a short time before they become inaccessible to their recipients. The app has evolved from originally focusing on person-to-person photo sharing to presently featuring users' "Stories" of 24 hours of chronological content, along with "Discover", letting brands show ad-supported short-form content. It also allows users to store photos in a password-protected area called "My Eyes Only". It has also reportedly incorporated limited use of end-to-end encryption, with plans to broaden its use in the future.

Snapchat was created by Evan Spiegel, Bobby Murphy, and Reggie Brown, former students at Stanford University. It is known for representing a mobile-first direction for social media, and places significant emphasis on users interacting with virtual stickers and augmented reality objects. In July 2021, Snapchat had 293 million daily active users, a 23% growth over a year. On average more than four billion Snaps are sent each day. Snapchat is popular among the younger generations, particularly those below the age of 16, leading to many privacy concerns for parents.




## Objectives

- Enhance user engagement through real-time messaging and interactive features.
- Optimize user experience by efficiently managing and accessing user-generated content.
- Enable personalized interactions and content discovery through advanced search and recommendation systems.
- Make sure it runs smoothly and quickly, even as more people use it.



## Data Structures and Algorithms applicable


1. **User Profile Management**
   - **Use Case**: Efficient management of user profiles.
   - **Data Structure**: Hash Map.
   - **Description**: Hash Map is used to store user profiles, facilitating quick insertion, deletion, and retrieval operations. It ensures efficient management of user data, supporting seamless user interaction and profile updates in Snapchat.
   - **Time Complexity**: O(1) for average-case operations (insertion, deletion, retrieval).
   - **Space Complexity**: O(n), where n is the number of user profiles stored
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/hash.cpp)

2. **Friend List Management**
   - **Use Case**: Efficiently managing user friend connections.
   - **Algorithm**: Depth-First Search (DFS)
   - **Description**: DFS explores friend connections for efficient management of user friend lists.
   - **Time Complexity**: O(V + E)
   - **Space Complexity**: O(V)
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/dfs.cpp)

3. **Snapchat Memories Storage**
   - **Use Case**: Efficiently storing and retrieving user memories to ensure quick access and management.
   - **Data Structure**: B-Trees
   - **Description**: B-Trees efficiently store and retrieve user memories.
   - **Time Complexity**: 
     - Search: O(log_B n)
     - Insertion: O(log_B n)
     - Deletion: O(log_B n)
     (where n is the number of memories stored and B is the branching factor of the B-Tree)
   - **Space Complexity**: O(n) for storing n memories.
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/btree.cpp)


4. **Real-Time Messaging**
   - **Use Case**: Sending and receiving messages instantly.
   - **Algorithm**: Queue (FIFO).
   - **Description**: A FIFO Queue manages message order, ensuring messages are sent and received in the order they were sent.
   - **Time Complexity**: O(1)
   - **Space Complexity**: O(n).
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/queue.cpp)
   

5. **Snapchat Stories Compilation**
   - **Use Case**: Merging snaps into a story.
   - **Algorithm**: Merge Sort.
   - **Description**: Merge Sort organizes snaps by timestamp, ensuring stories are displayed chronologically for users.
   - **Time Complexity**: O(n log n) 
   - **Space Complexity**: O(n) 
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/merge.cpp)


6. **Snap Map Navigation**
   - **Use Case**: Navigating through Snap Maps.
   - **Algorithm**: Dijkstra's Algorithm.
   - **Description**: Dijkstra's Algorithm finds the shortest path on Snap Maps, optimizing navigation for users based on distance and traffic conditions.
   - **Time Complexity**: O((V + E) log V) 
   - **Space Complexity**: O(V + E)
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/dj.cpp)

7. **Snapchat Analytics**
   - **Use Case**: Analyzing user engagement with snaps and stories.
   - **Algorithm**: Counting Sort.
   - **Description**: Counting Sort organizes viewer data efficiently, facilitating analytics on snap and story engagement.
   - **Time Complexity**: O(n + k) 
   - **Space Complexity**: O(n + k) 
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/count.cpp)

8. **Search Functionality Enhancement**
   - **Use Case**: Improving search speed for user profiles.
   - **Data Structure**: Trie (Prefix Tree).
   - **Description**: Trie is utilized to store user profile names efficiently, enabling fast prefix-based searches and enhancing search functionality for users.
   - **Time Complexity**: O(m), where m is the length of the search query.
   - **Space Complexity**: O(n * L), where n is the number of user profiles and L is the average length of profile names.
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/trie.cpp)

9. **Geolocation-based Snap Stories**
   - **Use Case**: Displaying local snaps on Snap Maps..
   - **Data Structure**: R-Tree..
   - **Description**:R-Tree organizes geolocation data of snaps, optimizing retrieval and display of local stories on Snap Maps.
   - **Time Complexity**: O(m) for search operations, where m is the length of the search query.
   - **Space Complexity**: O(n * L), where n is the number of user profiles and L is the average length of profile names.
   - **Code**: [Click here](https://github.com/nushoin/RTree/blob/master/RTree.h)

10. **Snapchat Streaks Tracking**
   - **Use Case**: Tracking streaks between users.
   - **Data Structure**: Priority Queue.
   - **Description**:Priority Queue manages streaks based on activity, ensuring accurate tracking and notification of streak statuses.
   - **Time Complexity**: O(log n) 
   - **Space Complexity**:O(n) for storing streak data.
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/priority.cpp)


11. **Snapchat Filters Application**
   - **Use Case**: Applying real-time filters to snaps.
   - **Data Structure**: Hash Table.
   - **Description**:Hash Table stores filter parameters and efficiently applies them to snaps, enhancing user experience with real-time filter application.
   - **Time Complexity**: O(1) 
   - **Space Complexity**:O(n)
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/hash.cpp)

12. **Snapchat Notification Management**
   - **Use Case**: Managing notifications for snaps and messages.
   - **Data Structure**: Binary Search Tree (BST).
   - **Description**:BST organizes and manages notifications based on user preferences, ensuring efficient notification delivery and management.
   - **Time Complexity**: O(log n) for insertion, deletion, and retrieval operations in BST.
   - **Space Complexity**:O(n)
   - **Code**: [Click here](https://github.com/kshitij583415/aps.github.io/blob/main/code/bst.cpp)




