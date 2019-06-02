/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSDictionary;

@interface APSMessage : NSObject <NSCoding> {

	NSMutableDictionary* _plist;
	NSMutableDictionary* _properties;
	void* _xpcMessage;
	NSObject*<OS_dispatch_queue> _ivarQueue;

}

@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,retain) NSString * correlationIdentifier; 
-(void)setGuid:(id)arg1 ;
-(id)guid;
-(void)setInstanceObject:(id)arg1 forKey:(id)arg2 ;
-(id)instanceObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2 ;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(id)initWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(NSString *)correlationIdentifier;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)identifier;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
