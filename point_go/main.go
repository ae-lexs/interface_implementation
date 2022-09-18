package main

import "fmt"
import "github.com/ae-lexs/point_go/point"

func main() {
	point := point.MakePoint(0.0, 0.0, "original")

	point.SetName("New Name")

	fmt.Println(point.GetName())
}