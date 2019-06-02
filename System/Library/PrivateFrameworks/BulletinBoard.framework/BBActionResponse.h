/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface BBActionResponse : NSObject <NSSecureCoding> {

	long long _actionType;
	unsigned long long _actionActivationMode;
	long long _actionBehavior;
	NSString* _actionID;
	NSString* _bulletinRecordID;
	NSString* _bulletinPublisherID;
	NSDictionary* _bulletinContext;
	NSString* _bulletinButtonID;
	NSDictionary* _context;
	NSString* _originID;

}

@property (assign,nonatomic) long long actionType;                                 //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) unsigned long long actionActivationMode;              //@synthesize actionActivationMode=_actionActivationMode - In the implementation block
@property (assign,nonatomic) long long actionBehavior;                             //@synthesize actionBehavior=_actionBehavior - In the implementation block
@property (nonatomic,copy) NSString * actionID;                                    //@synthesize actionID=_actionID - In the implementation block
@property (nonatomic,copy) NSString * bulletinButtonID;                            //@synthesize bulletinButtonID=_bulletinButtonID - In the implementation block
@property (nonatomic,copy) NSString * bulletinRecordID;                            //@synthesize bulletinRecordID=_bulletinRecordID - In the implementation block
@property (nonatomic,copy) NSString * bulletinPublisherID;                         //@synthesize bulletinPublisherID=_bulletinPublisherID - In the implementation block
@property (nonatomic,copy) NSDictionary * bulletinContext;                         //@synthesize bulletinContext=_bulletinContext - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * originID;                                    //@synthesize originID=_originID - In the implementation block
+(id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setActionActivationMode:(unsigned long long)arg1 ;
-(void)setActionBehavior:(long long)arg1 ;
-(void)setActionID:(NSString *)arg1 ;
-(void)setBulletinContext:(NSDictionary *)arg1 ;
-(void)setBulletinButtonID:(NSString *)arg1 ;
-(void)setBulletinRecordID:(NSString *)arg1 ;
-(void)setBulletinPublisherID:(NSString *)arg1 ;
-(NSString *)bulletinButtonID;
-(NSString *)bulletinRecordID;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(NSString *)originID;
-(NSDictionary *)bulletinContext;
-(NSString *)bulletinPublisherID;
-(NSString *)actionID;
-(unsigned long long)actionActivationMode;
-(long long)actionBehavior;
-(void)setOriginID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSDictionary *)context;
@end
