/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSString;

@interface _HKStaticDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter> {

	long long _decimalPrecision;

}

@property (assign,nonatomic) long long decimalPrecision;              //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatterWithDecimalPrecision:(long long)arg1 ;
-(long long)decimalPrecision;
-(void)setDecimalPrecision:(long long)arg1 ;
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(BOOL)returnsUnitWithValueForDisplay;
@end

