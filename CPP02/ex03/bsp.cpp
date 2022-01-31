# include "Fixed.hpp"
# include "Point.hpp"

bool	bsp( const Point a, const Point b, const Point c, const Point point )
{
	int		tri_flag = 0;
	Fixed	slope_ab;
	Fixed	intercept_ab;
	Fixed	slope_bc;
	Fixed	intercept_bc;
	Fixed	slope_ac;
	Fixed	intercept_ac;

	slope_ab = Point::slope(a, b);
	slope_bc = Point::slope(b, c);
	slope_ac = Point::slope(a, c);
	intercept_ab = Point::intercept(slope_ab, a);
	intercept_bc = Point::intercept(slope_bc, b);
	intercept_ac = Point::intercept(slope_ac, c);

	if (c.get_x() * slope_ab + intercept_ab > c.get_y() && point.get_x() * slope_ab + intercept_ab > point.get_y())
		tri_flag++;
	else if (c.get_x() * slope_ab + intercept_ab < c.get_y() && point.get_x() * slope_ab + intercept_ab < point.get_y())
		tri_flag++;
	
	if (a.get_x() * slope_bc + intercept_bc > a.get_y() && point.get_x() * slope_bc + intercept_bc > point.get_y())
		tri_flag++;
	else if (a.get_x() * slope_bc + intercept_bc < a.get_y() && point.get_x() * slope_bc + intercept_bc < point.get_y())
		tri_flag++;
	
	if (b.get_x() * slope_ac + intercept_ac > b.get_y() && point.get_x() * slope_ac + intercept_ac > point.get_y())
		tri_flag++;
	else if (b.get_x() * slope_ac + intercept_ac < b.get_y() && point.get_x() * slope_ac + intercept_ac < point.get_y())
		tri_flag++;

	if (tri_flag == 3)
		return true;
	else
		return false;
}
