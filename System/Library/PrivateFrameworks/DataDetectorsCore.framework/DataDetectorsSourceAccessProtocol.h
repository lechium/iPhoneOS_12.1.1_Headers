/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DataDetectorsSourceAccessProtocol
@required
-(void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(/*^block*/id)arg4;

@end

