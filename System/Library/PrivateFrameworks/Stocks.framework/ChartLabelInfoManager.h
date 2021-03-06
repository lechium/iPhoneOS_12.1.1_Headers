/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	BOOL _use24hrTime;

}
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1 ;
+(void)clearSharedManager;
+(id)chartLabelFont;
-(void)resetLocale;
-(id)labelInfoForYAxis;
-(id)monthLabelInfoArrayForLabelLength:(long long)arg1 ;
-(id)labelInfoWithUnsignedInteger:(unsigned long long)arg1 ;
-(BOOL)use24hrTime;
-(id)labelInfoWithString:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

