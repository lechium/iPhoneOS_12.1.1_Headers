/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ETMessageHeaderReader : NSObject
+(id)identifierInArchive:(id)arg1 ;
+(unsigned short)messageTypeInArchive:(id)arg1 ;
+(void)getSendTime:(double*)arg1 type:(unsigned short*)arg2 inArchive:(id)arg3 ;
+(double)sendTimeInArchive:(id)arg1 ;
@end
