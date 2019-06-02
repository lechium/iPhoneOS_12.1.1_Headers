/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSString;

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation {

	NSString* _zoneName;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) NSString * zoneName;              //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) id creationBlock;                   //@synthesize creationBlock=_creationBlock - In the implementation block
-(NSString *)zoneName;
-(id)initWithZoneName:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(id)mainReturningError;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
@end

