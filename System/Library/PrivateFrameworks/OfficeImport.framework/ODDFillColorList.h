/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ODDFillColorList : NSObject {

	NSArray* mColors;
	int mHueDirection;
	int mMethod;

}
-(void)setMethod:(int)arg1 ;
-(id)cycleColorAtIndex:(unsigned long long)arg1 ;
-(id)repeatColorAtIndex:(unsigned long long)arg1 ;
-(id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(void)setHueDirection:(int)arg1 ;
-(void)getComponentsForIndex:(unsigned long long)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5 ;
-(void)dealloc;
-(void)setColors:(id)arg1 ;
@end

