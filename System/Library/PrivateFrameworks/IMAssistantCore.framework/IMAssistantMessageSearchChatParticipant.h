/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IMAssistantMessageSearchChatParticipant : NSObject {

	BOOL _isMe;
	NSString* _handle;
	NSArray* _contactIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * handle;                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers;              //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL isMe;                                      //@synthesize isMe=_isMe - In the implementation block
-(BOOL)isMe;
-(NSString *)handle;
-(NSArray *)contactIdentifiers;
-(id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(BOOL)arg3 ;
-(BOOL)matchesPerson:(id)arg1 ;
@end

