/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSUUID;

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation {

	NSUUID* _uuid;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(id)mainReturningError;
-(long long)maskValue;
-(long long)compareValue;
-(void)setMaskValue:(long long)arg1 ;
-(void)setCompareValue:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
@end

