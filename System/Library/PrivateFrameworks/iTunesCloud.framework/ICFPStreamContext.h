/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSData;

@interface ICFPStreamContext : NSObject {

	FPStreamOpaque_Ref _fpStreamRef;
	unsigned long long _accountID;
	NSData* _playerInfoContextRequestData;

}

@property (nonatomic,readonly) unsigned long long accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSData * playerInfoContextRequestData;              //@synthesize playerInfoContextRequestData=_playerInfoContextRequestData - In the implementation block
-(id)initWithVersion:(unsigned)arg1 contextID:(unsigned)arg2 contentInfo:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg1 returningData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg1 returningData:(id*)arg2 error:(id*)arg3 ;
-(NSData *)playerInfoContextRequestData;
-(unsigned long long)accountID;
-(void)dealloc;
@end

