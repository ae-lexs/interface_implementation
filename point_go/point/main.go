package point

type Point struct {
	x float64
	y float64
	name string
}

func MakePoint(x, y float64, name string) Point {
	return Point{
		x: x,
		y: y,
		name: name,
	}
}

func (point *Point) SetName(newName string) {
	point.name = newName;
}

func (point *Point) GetName() string {
	return point.name;
}
