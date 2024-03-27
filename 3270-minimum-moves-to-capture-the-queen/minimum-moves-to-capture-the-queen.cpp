class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if(a == e || b == f)
        {
            if(b == f)
            {
                while(a != e)
                {
                    if(a == c && b == d)
                        break;
                    if(a > e)
                        a--;
                    else
                        a++;
                }
                if(a == e)
                    return 1;
            } else
            {
                while(b != f)
                {
                    if(b == d && a == c)
                        break;
                    if(b > f)
                        b--;
                    else
                        b++;
                }
                if(b == f)
                    return 1;
            }
        }
        int length = abs(c - e);
        int width = abs(d - f);

        double area = length * width;
        int temp = sqrt(area);
        if(temp * temp == area)
        {
            if(e > c)
            {
                while(c != e && d != f)
                {
                    if(c == a && d == b)
                        break;
                    c++;
                    if(d < f)
                        d++;
                    else 
                        d--;
                }
                if(c == e && d == f)
                    return 1;
            }else
            {
                while(c != e && d != f)
                {
                    if(c == a && d == b)
                        break;
                    c--;
                    if(d < f)
                        d++;
                    else 
                        d--;
                }
                if(c == e && d == f)
                    return 1;
            }
        }
        return 2;

    }
};