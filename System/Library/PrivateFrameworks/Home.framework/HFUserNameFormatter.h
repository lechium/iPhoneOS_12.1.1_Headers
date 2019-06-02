/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class HMHome, CNContactFormatter;

@interface HFUserNameFormatter : NSFormatter {

	unsigned long long _style;
	HMHome* _home;
	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,readonly) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                      //@synthesize home=_home - In the implementation block
+(long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)arg1 ;
-(HMHome *)home;
-(CNContactFormatter *)contactFormatter;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)stringForObjectValue:(id)arg1 ;
@end

