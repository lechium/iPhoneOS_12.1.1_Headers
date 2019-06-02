/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MessageTranscodeController : NSObject
+(id)sharedInstance;
-(void)generateSnapshotForMessageGUID:(id)arg1 payloadData:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 sizes:(id)arg4 representations:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 sizes:(id)arg4 representations:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)transcodePayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end
