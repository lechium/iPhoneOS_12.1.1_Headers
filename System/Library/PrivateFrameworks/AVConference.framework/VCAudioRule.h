/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCAudioRule : NSObject {

	int _payload;
	BOOL _isSecondary;
	BOOL _sbr;
	unsigned _samplesPerBlock;

}

@property (nonatomic,readonly) int payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL isSecondary;                      //@synthesize isSecondary=_isSecondary - In the implementation block
@property (nonatomic,readonly) BOOL sbr;                              //@synthesize sbr=_sbr - In the implementation block
@property (nonatomic,readonly) unsigned samplesPerBlock;              //@synthesize samplesPerBlock=_samplesPerBlock - In the implementation block
-(id)initWithPayload:(int)arg1 isSecondary:(BOOL)arg2 sbr:(BOOL)arg3 samplesPerBlock:(unsigned)arg4 ;
-(BOOL)sbr;
-(unsigned)samplesPerBlock;
-(BOOL)isSecondary;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(int)payload;
@end

