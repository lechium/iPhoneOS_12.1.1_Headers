/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {

	long long _eventType;
	unsigned long long _sessionID;
	NSString* _respondingPOP;

}

@property (assign,nonatomic) long long eventType;                       //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * respondingPOP;                  //@synthesize respondingPOP=_respondingPOP - In the implementation block
-(void)setEventType:(long long)arg1 ;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(NSString *)respondingPOP;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)eventType;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
@end

