/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {

	NSArray* _commands;
	int _numReplacedItems;
	int _bodyTruncationBytes;
	int _mimeSupport;
	ASMailMessage* _streamingMailMessage;

}
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(void)setMIMESupport:(int)arg1 ;
-(int)bodyType;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
-(int)mimeSupport;
-(int)_mimeSupportCode;
-(BOOL)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char*)arg5 dataLength:(int)arg6 ;
-(void)setBodyTruncationBytes:(int)arg1 ;
-(id)streamingMailMessage;
-(void)setStreamingMailMessage:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)init;
@end

