/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDiscreteFeedback.h>

@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback {

	unsigned _systemSoundID;
	unsigned long long _eventType;

}

@property (nonatomic,readonly) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned systemSoundID;                    //@synthesize systemSoundID=_systemSoundID - In the implementation block
+(id)type;
+(id)customDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)_effectiveEventType;
-(unsigned)_effectiveSystemSoundID;
-(unsigned long long)eventType;
-(unsigned)systemSoundID;
@end

