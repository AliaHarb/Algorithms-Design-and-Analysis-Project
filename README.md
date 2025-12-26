
# Algorithms Design and Analysis Project

**Project:** Naive vs Optimized Solutions for Machine Production Problem  
**Course:** Algorithm Analysis and Design – 1st Semester, 2025–2026

---

## Team Members

* **Alia Mahmoud**  
* **Shahd Ayman**  

---

## Problem Description

We have `n` machines, each producing **one product every `k[i]` seconds**.  
All machines operate **simultaneously and independently**.

<span style="color:red"><b>Goal:</b></span> Determine the **minimum time** required to produce at least `t` products.

This project implements **two solutions**:

1. **Naive / Brute Force:** Incrementally simulates time until the required number of products is produced.  
2. **Optimized / Binary Search:** Efficiently finds the minimum time using binary search.

The project also includes **theoretical and empirical analysis** comparing both approaches.

---

## Input

* `n` : Number of machines  
* `t` : Target number of products  
* `k[]` : Array of production times per machine  

**Example:**  
```cpp
int n = 3;
int t = 7;
int k[] = {3, 2, 5};
````

---

## Output

* Minimum time required to produce at least `t` products

**Example Output:**

```cpp
8
```

---

## Implemented Solutions

### 1. Brute Force

* **File:** `algorithm1.cpp`
* **Description:** Simulates time incrementally for all machines
* **Complexity:**

  * Time: O(n × T)
  * Space: O(n)
* <span style="color:blue"><b>Note:</b></span> Suitable only for **small datasets**

### 2. Optimized – Binary Search

* **File:** `algorithm2.cpp`
* **Description:** Uses binary search to efficiently find minimum time
* **Complexity:**

  * Time: O(n × log T)
  * Space: O(n)
* <span style="color:blue"><b>Note:</b></span> Recommended for **large `t` values**

---

## How to Run

```bash
# 1. Clone the repository
git clone [repo-link]

# 2. Navigate to the project folder
cd Algorithms-Design-and-Analysis-Project

# 3. Compile the algorithms
g++ algorithm1.cpp -o algorithm1
g++ algorithm2.cpp -o algorithm2

# 4. Run the programs
./algorithm1
./algorithm2
```

---

## Analysis

* Includes **theoretical analysis** comparing time and space complexity
* Includes **empirical analysis** with runtime measurements
* Diagrams and charts visualize performance differences

---

## Notes

* <span style="color:green"><b>Note:</b></span> Brute force is **educational** and helps understand the problem
* <span style="color:green"><b>Note:</b></span> Binary search is **efficient** and suitable for **large datasets**
* Always test with multiple inputs for accuracy




