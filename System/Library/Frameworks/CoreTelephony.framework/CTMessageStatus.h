/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CTMessageStatus : NSObject {

	unsigned _messageId;
	int _messageType;
	int _result;

}

@property (readonly) unsigned messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (readonly) int messageType;                 //@synthesize messageType=_messageType - In the implementation block
@property (readonly) int result;                      //@synthesize result=_result - In the implementation block
-(id)initWithMessageId:(unsigned)arg1 messageType:(int)arg2 result:(int)arg3 ;
-(unsigned)messageId;
-(int)messageType;
-(int)result;
@end

