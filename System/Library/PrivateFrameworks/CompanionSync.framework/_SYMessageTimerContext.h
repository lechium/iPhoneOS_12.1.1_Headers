/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SYMessageTimerContext : NSObject {

	unsigned long long _seqno;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long seqno;              //@synthesize seqno=_seqno - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
-(void)setSeqno:(unsigned long long)arg1 ;
-(unsigned long long)seqno;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end

