/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class NSString;

@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate> {

	SystemPreviewController* _previewController;
	IntRect _linkRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSystemPreviewController:(SystemPreviewController*)arg1 fromRect:(IntRect)arg2 ;
-(id)presentingViewController;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
@end

