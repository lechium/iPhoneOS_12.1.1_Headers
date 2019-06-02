/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID;

@interface __NSCFTaskPerformanceTiming : NSObject <NSSecureCoding> {

	BOOL __isBackground;
	NSDate* __resumeTime;
	NSUUID* __activityUUID;
	NSDate* __didCompleteWithError;
	long long __numberOfRetries;

}

@property (retain) NSDate * _resumeTime;                        //@synthesize _resumeTime=__resumeTime - In the implementation block
@property (retain) NSUUID * _activityUUID;                      //@synthesize _activityUUID=__activityUUID - In the implementation block
@property (retain) NSDate * _didCompleteWithError;              //@synthesize _didCompleteWithError=__didCompleteWithError - In the implementation block
@property (assign) long long _numberOfRetries;                  //@synthesize _numberOfRetries=__numberOfRetries - In the implementation block
@property (assign) BOOL _isBackground;                          //@synthesize _isBackground=__isBackground - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)set_isBackground:(BOOL)arg1 ;
-(void)set_didCompleteWithError:(NSDate *)arg1 ;
-(NSDate *)_resumeTime;
-(NSDate *)_didCompleteWithError;
-(long long)_numberOfRetries;
-(NSUUID *)_activityUUID;
-(void)set_activityUUID:(NSUUID *)arg1 ;
-(void)set_resumeTime:(NSDate *)arg1 ;
-(void)set_numberOfRetries:(long long)arg1 ;
-(BOOL)_isBackground;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
