/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface UMTask : NSObject {

	BOOL _isFinished;
	int _pid;
	NSString* _name;
	NSString* _reason;
	NSString* _bundleID;
	NSUUID* _uuid;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) int pid;                        //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                    //@synthesize uuid=_uuid - In the implementation block
+(id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3 ;
+(id)taskWithName:(id)arg1 reason:(id)arg2 ;
-(void)setPid:(int)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(int)pid;
-(void)setIsFinished:(BOOL)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(NSString *)reason;
-(void)begin;
-(BOOL)isFinished;
-(void)end;
-(NSString *)bundleID;
@end

