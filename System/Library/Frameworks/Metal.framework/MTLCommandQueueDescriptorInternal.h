/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLCommandQueueDescriptor.h>

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {

	unsigned long long _maxCommandBufferCount;
	unsigned long long _qosClass;
	long long _qosRelativePriority;
	BOOL _openGLQueue;

}

@property (assign) BOOL isOpenGLQueue;              //@synthesize openGLQueue=_openGLQueue - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setMaxCommandBufferCount:(unsigned long long)arg1 ;
-(void)setQosRelativePriority:(long long)arg1 ;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)qosClass;
-(long long)qosRelativePriority;
-(BOOL)isOpenGLQueue;
-(void)setIsOpenGLQueue:(BOOL)arg1 ;
-(void)setQosClass:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
@end

