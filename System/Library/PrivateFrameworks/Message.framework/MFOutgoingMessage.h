/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(id)messageBody;
-(void)setMessageBody:(id)arg1 ;
-(unsigned long long)messageSize;
-(id)messageDataHolder;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)setMutableHeaders:(id)arg1 ;
-(id)messageStore;
-(id)headersIfAvailable;
-(id)messageBodyIfAvailable;
-(id)mutableHeaders;
-(id)messageData;
-(id)headers;
-(void)dealloc;
@end

