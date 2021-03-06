/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTSyncOperation.h>

@class NSDate, NSString, MTTrigger;

@interface MTSyncActionOperation : NSObject <MTSyncOperation> {

	BOOL _isFromSync;
	long long _action;
	NSDate* _actionDate;
	NSString* _identifier;
	MTTrigger* _trigger;
	NSString* _uuid;

}

@property (nonatomic,copy) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long action;                      //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSDate * actionDate;                     //@synthesize actionDate=_actionDate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MTTrigger * trigger;                   //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL isFromSync;                       //@synthesize isFromSync=_isFromSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long priority; 
+(id)operationFromMetaData:(id)arg1 ;
+(id)operationWithAction:(long long)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4 ;
+(id)_stringForAction:(long long)arg1 ;
+(id)operationWithAction:(long long)arg1 identifier:(id)arg2 trigger:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(void)setTrigger:(MTTrigger *)arg1 ;
-(BOOL)requiresResponse;
-(NSDate *)actionDate;
-(void)setActionDate:(NSDate *)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isFromSync;
-(BOOL)isEquivalentToOperation:(id)arg1 ;
-(id)responseOperation;
-(id)operationMetaData;
-(void)setIsFromSync:(BOOL)arg1 ;
-(id)initWithAction:(long long)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4 ;
-(id)initWithUUID:(id)arg1 fromSync:(BOOL)arg2 action:(long long)arg3 actionDate:(id)arg4 identifier:(id)arg5 trigger:(id)arg6 ;
-(BOOL)shouldRetry;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)action;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)priority;
-(void)setAction:(long long)arg1 ;
-(MTTrigger *)trigger;
@end

