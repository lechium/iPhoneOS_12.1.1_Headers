/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CAMPanoramaCaptureRequestDelegate;
@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	id<CAMPanoramaCaptureRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<CAMPanoramaCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CAMPanoramaCaptureRequestDelegate>)delegate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

