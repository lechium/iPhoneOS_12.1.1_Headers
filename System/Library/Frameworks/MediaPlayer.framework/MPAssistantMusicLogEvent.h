/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPAssistantLogEvent.h>

@class NSMutableDictionary, NSString;

@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent> {

	unsigned _sessionID;
	NSString* _siriSessionIdentifier;

}

@property (assign,nonatomic) unsigned sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * siriSessionIdentifier;                    //@synthesize siriSessionIdentifier=_siriSessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
-(long long)eventCode;
-(NSMutableDictionary *)eventPayload;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
@end

