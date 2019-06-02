/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/ESDObject.h>

@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {

	NSData* mChartData;
	BOOL mShowLegend;
	CHDChart* mChart;

}
-(void)setChart:(id)arg1 ;
-(id)chart;
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(BOOL)showLegend;
-(void)setShowLegend:(BOOL)arg1 ;
-(void)dealloc;
@end

