/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@interface WKImagePreviewViewController : UIViewController {

	RetainPtr<NSArray>* _imageActions;
	RetainPtr<_WKActivatedElementInfo>* _activatedElementInfo;
	RetainPtr<CGImage *>* _image;
	RetainPtr<UIImageView>* _imageView;

}
-(id)initWithCGImage:(RetainPtr<CGImage *>*)arg1 defaultActions:(RetainPtr<NSArray>*)arg2 elementInfo:(RetainPtr<_WKActivatedElementInfo>*)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)previewActions;
@end

