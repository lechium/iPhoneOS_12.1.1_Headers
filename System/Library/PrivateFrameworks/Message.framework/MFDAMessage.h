/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMessage, MFMailboxUid, NSString;

@interface MFDAMessage : MFMailMessage {

	DAMailMessage* _DAMailMessage;
	MFMessage* _rfc822CreatedMessage;
	MFMailboxUid* _mailbox;
	NSString* _externalConversationID;

}

@property (nonatomic,readonly) DAMailMessage * DAMailMessage;              //@synthesize DAMailMessage=_DAMailMessage - In the implementation block
-(id)messageBody;
-(unsigned long long)messageSize;
-(id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2 ;
-(id)externalConversationID;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)remoteMailboxURL;
-(DAMailMessage *)DAMailMessage;
-(id)mailbox;
-(id)headersIfAvailable;
-(unsigned long long)messageFlags;
-(id)headers;
-(id)remoteID;
-(void)dealloc;
@end

