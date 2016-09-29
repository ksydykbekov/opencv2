#include <iostream>
#include <vector>

/*
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
*/


#include <opencv2/opencv.hpp>
#include <cstdio>

using namespace cv;

//asdasdasasd asdasd asdasd

int main(int argc, char** argv )
{
    Mat src, src_gray;
    Mat grad;
    char* window_name = "Sobel Demo - Simple Edge Detector";
    int scale = 1;
    int delta = 0;
    int ddepth = CV_16S;

    int c;

    /// Loеad an image
    src = imread( argv[1] );

    if( !src.data )
    { return -1; }

    //GaussianBlur( src, src, Size(3,3), 0, 0, BORDER_DEFAULT );

    /// Convert it to gray

    cvtColor( src, src_gray, CV_BGR2GRAY );

    src_gray = src_gray > 128;

    //addsd
    //TODO::
//
//aasasdasdasd

    bitwise_not(src_gray, src_gray);

   // int ef = src_gray.at(Point(21,12));

//    fprintf( stderr, "Error %i\n", ef);

   /* Scalar intensity = src_gray.at<uchar>(Point(100, 100));

    printf(  "Intensity  %d", (unsigned)intensity.val[0]);

    Size s = src_gray.size();

    for(int x = 0; x < s.width ; x++)
        for(int y = 0; y < s.height ; y++)   {
            intensity = src_gray.at<uchar>(Point(x, y));
             (intensity.val[0] == 255 )? src_gray.at<uchar>(Point(x, y)) = 0 : src_gray.at<uchar>(Point(x, y)) = 255;
        }

    try {
        imwrite("/home/kama/inverted.jpg", src_gray);
    }
    catch(Exception exception)
    {
        fprintf(stderr, "Error %s\n", exception.what() );
    }
   */ /// Create windown
    namedWindow( window_name, CV_WINDOW_AUTOSIZE );


    imshow( window_name, src_gray );
    /// Generate grad_x and grad_y

    /*
     Mat grad_x, grad_y;
     Mat abs_grad_x, abs_grad_y;

     /// Gradient X
     //Scharr( src_gray, grad_x, ddepth, 1, 0, scale, delta, BORDER_DEFAULT );
     Sobel( src_gray, grad_x, ddepth, 1, 0, 3, scale, delta, BORDER_DEFAULT );
     convertScaleAbs( grad_x, abs_grad_x );

     /// Gradient Y
     //Scharr( src_gray, grad_y, ddepth, 0, 1, scale, delta, BORDER_DEFAULT );
     Sobel( src_gray, grad_y, ddepth, 0, 1, 3, scale, delta, BORDER_DEFAULT );
     convertScaleAbs( grad_y, abs_grad_y );

     /// Total Gradient (approximate)
     addWeighted( abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad );

  //   imshow( window_name, grad );*/

    waitKey(0);




    /* cvNamedWindow( "My Window", 1 );
     IplImage *img = cvCreateImage( cvSize( 640, 480 ), IPL_DEPTH_8U, 1 );
     CvFont font;
     double hScale = 1.0;
     double vScale = 1.0;
     int lineWidth = 1;
     cvInitFont( &font, CV_FONT_HERSHEY_SIMPLEX | CV_FONT_ITALIC,
                 hScale, vScale, 0, lineWidth );
     cvPutText( img, "Hello World!", cvPoint( 200, 400 ), &font,
                cvScalar( 255, 255, 0 ) );
     cvShowImage( "My Window", img );
     cvWaitKey();
     return 0;*/


   /* if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    return 0;*/
}
