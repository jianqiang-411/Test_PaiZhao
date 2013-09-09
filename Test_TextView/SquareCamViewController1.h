 
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

 
 
 
@class CIDetector;

@interface SquareCamViewController1 : UIViewController <UIGestureRecognizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    
    AVCaptureSession *session;
    CIDetector *faceDetector;
    AVCaptureVideoPreviewLayer *previewLayer;
	AVCaptureVideoDataOutput *videoDataOutput;
    AVCaptureStillImageOutput *stillImageOutput;
    dispatch_queue_t videoDataOutputQueue;
    
    
	IBOutlet UIView *previewView;
	IBOutlet UISegmentedControl *camerasControl;
	
	BOOL detectFaces;
	
	UIView *flashView;
	UIImage *square;
	BOOL isUsingFrontFacingCamera;
	
	CGFloat beginGestureScale;
	CGFloat effectiveScale;
    NSString *urlimage;
 
    IBOutlet UILabel *labInfo;
    
    UIImageView *userResizableView ;
    
    UIImageView *parent;
}

@property(nonatomic,retain) UIImageView *parent;

@property(copy) NSString *urlimage;
@property(nonatomic,retain)IBOutlet UILabel *labInfo;
@property(nonatomic,retain) IBOutlet UIImageView *userResizableView ;
- (IBAction)takePicture:(id)sender;
- (IBAction)switchCameras:(id)sender;

- (IBAction)handlePinchGesture:(UIGestureRecognizer *)sender;
- (void)toggleFaceDetection;
- (IBAction)goBack:(id)sender;
@end
