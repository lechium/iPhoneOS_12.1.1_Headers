/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataCollectionObserverState : NSObject <NSCopying> {

	BOOL _isInBackground;
	BOOL _hasRunningWorkout;

}

@property (nonatomic,readonly) BOOL isInBackground;                 //@synthesize isInBackground=_isInBackground - In the implementation block
@property (nonatomic,readonly) BOOL hasRunningWorkout;              //@synthesize hasRunningWorkout=_hasRunningWorkout - In the implementation block
+(id)dataCollectionObserverStateInBackground:(BOOL)arg1 hasRunningWorkout:(BOOL)arg2 ;
-(BOOL)isInBackground;
-(BOOL)hasRunningWorkout;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

