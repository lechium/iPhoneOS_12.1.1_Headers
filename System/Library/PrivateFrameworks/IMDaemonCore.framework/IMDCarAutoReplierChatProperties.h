/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMDCarAutoReplierChatProperties : NSObject {

	NSMutableArray* _suppressedMessageIDs;
	BOOL _autoReplySent;
	BOOL _urgent;

}

@property (assign,nonatomic) BOOL autoReplySent;                       //@synthesize autoReplySent=_autoReplySent - In the implementation block
@property (assign,getter=isUrgent,nonatomic) BOOL urgent;              //@synthesize urgent=_urgent - In the implementation block
-(void)addSuppressedMessage:(id)arg1 ;
-(id)popSuppressedMessages;
-(BOOL)autoReplySent;
-(void)setAutoReplySent:(BOOL)arg1 ;
-(BOOL)isUrgent;
-(void)setUrgent:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

