/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSString, NSObject;

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange {

	NSString* _notification;
	NSObject* _object;

}

@property (nonatomic,copy,readonly) NSString * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                  //@synthesize object=_object - In the implementation block
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
-(NSObject *)object;
-(NSString *)notification;
@end
