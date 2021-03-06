/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue_attr;
@class NSObject;

@interface BSDispatchQueueAttributes : NSObject {

	NSObject*<OS_dispatch_queue_attr> _attrs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue_attr> attributes;              //@synthesize attrs=_attrs - In the implementation block
+(id)_attributesWithAttributes:(id)arg1 ;
+(id)serial;
+(id)concurrent;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(id)inactive;
-(id)serviceClass:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(void)setAttributes:(NSObject*<OS_dispatch_queue_attr>)arg1 ;
@end

