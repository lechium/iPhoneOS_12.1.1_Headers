/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DECInternalConsumer : NSObject {

	unsigned long long _consumerType;
	unsigned long long _category;

}

@property (assign,nonatomic) unsigned long long consumerType;              //@synthesize consumerType=_consumerType - In the implementation block
@property (assign,nonatomic) unsigned long long category;                  //@synthesize category=_category - In the implementation block
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 ;
-(void)setConsumerType:(unsigned long long)arg1 ;
-(void)receivePrediction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)consumerType;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
@end

