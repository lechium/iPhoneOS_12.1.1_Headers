/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry {

	id _value;
	HKCharacteristicType* _dataType;

}

@property (nonatomic,readonly) id value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) HKCharacteristicType * dataType;              //@synthesize dataType=_dataType - In the implementation block
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(HKCharacteristicType *)dataType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
@end
