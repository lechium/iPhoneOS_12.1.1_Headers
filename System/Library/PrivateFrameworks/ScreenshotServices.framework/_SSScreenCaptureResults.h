/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface _SSScreenCaptureResults : NSObject {

	UIImage* _image;
	NSString* _failureReasonIfImageIsNil;

}

@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * failureReasonIfImageIsNil;              //@synthesize failureReasonIfImageIsNil=_failureReasonIfImageIsNil - In the implementation block
-(void)setFailureReasonIfImageIsNil:(NSString *)arg1 ;
-(NSString *)failureReasonIfImageIsNil;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end

