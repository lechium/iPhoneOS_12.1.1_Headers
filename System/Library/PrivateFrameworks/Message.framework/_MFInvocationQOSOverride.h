/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@interface _MFInvocationQOSOverride : NSObject {

	pthread_override_sRef _override;
	BOOL _lowPriority;
	unsigned _desiredQoS;
	opaque_pthread_t* _pthread;

}

@property (getter=isLowPriority,nonatomic,readonly) BOOL lowPriority;              //@synthesize lowPriority=_lowPriority - In the implementation block
@property (nonatomic,readonly) unsigned desiredQoS;                                //@synthesize desiredQoS=_desiredQoS - In the implementation block
@property (nonatomic,readonly) opaque_pthread_t* pthread;                          //@synthesize pthread=_pthread - In the implementation block
-(BOOL)removeOverride;
-(opaque_pthread_t*)pthread;
-(BOOL)isLowPriority;
-(unsigned)desiredQoS;
-(id)initWithPthread:(opaque_pthread_t*)arg1 desiredQoS:(unsigned)arg2 lowPriority:(BOOL)arg3 ;
-(void)applyOverrideWhileForeground:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

