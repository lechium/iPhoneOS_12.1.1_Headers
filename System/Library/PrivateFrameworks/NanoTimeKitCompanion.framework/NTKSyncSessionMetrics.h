/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NTKSyncSessionMetrics : NSObject {

	BOOL _isResetSync;
	BOOL _didSucceed;
	unsigned long long _changesSent;
	unsigned long long _bytesSent;

}

@property (assign,nonatomic) BOOL isResetSync;                            //@synthesize isResetSync=_isResetSync - In the implementation block
@property (assign,nonatomic) unsigned long long changesSent;              //@synthesize changesSent=_changesSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;                //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                             //@synthesize didSucceed=_didSucceed - In the implementation block
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)isResetSync;
-(void)setIsResetSync:(BOOL)arg1 ;
-(unsigned long long)changesSent;
-(void)setChangesSent:(unsigned long long)arg1 ;
@end

