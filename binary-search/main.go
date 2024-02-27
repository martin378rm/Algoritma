package main

import "fmt"

func binarySearch(x int, haystack []int) int {
	var low int = 0
	var r int = len(haystack)
	for low <= r {
		mid := low + (r-low)/2
		// check if x is present at mid
		if haystack[mid] == x {
			return mid
		}
		// check if x greater, ignore left half
		if haystack[mid] < x {
			low = mid + 1
		} else {
			r = mid - 1
		}
	}
	return -1
}

func main() {
	data := []int{2, 3, 4, 6, 8, 9, 11, 21, 22, 29, 35}
	val := binarySearch(4, data)
	fmt.Println("===== Algoritma binary search =====")

	if val == -1 {
		fmt.Println("Data not found")
	} else {
		fmt.Println(val)
	}
}
