package main

import (
	"fmt"
)

/*
linear search adalah pendekatan paling sederhana dalam mencari elemen, di mana algoritma secara berurutan mengunjungi dan mengecek setiap elemen dalam kumpulan data hingga menemukan elemen yang dicari atau mencapai akhir kumpulan data.
*/

func linearSearch(data []int, key int) (int, bool) {
	for i, item := range data {
		if item == key {
			return i, true
		}
	}
	return -1, false
}

func main() {
	data := []int{10, 11, 9, 3, 2, 1, 5, 7, 8}
	val, isTrue := linearSearch(data, 8)
	if isTrue {
		fmt.Println(val)
	} else {
		fmt.Println("Data Not Found")
	}

}
