#include<stdio.h>
#include<math.h>
void main(){
    int x1, y1, x2, y2, radius;
    float dis;
printf("Enter the center points ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
printf("Enter the points ");
    scanf("%d %d", &x2, &y2);

    dis = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(dis>radius){
        printf("Point (%d,%d) lies outside the circle.", x2, y2);
}else if(dis<radius){
        printf("Point (%d,%d) lies inside the circle.", x2, y2);
} else(dis==radius){
        printf("Point (%d,%d) lies on the boundary of circle.", x2, y2);
}
    
}
