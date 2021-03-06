/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableArray;

@interface HKGraphSeriesSecondaryRenderContext : NSObject {

	NSMutableArray* _aboveScreenRegions;
	NSMutableArray* _belowScreenRegions;

}
-(void)addOffScreenRegionAtLocation:(double)arg1 color:(id)arg2 aboveScreen:(BOOL)arg3 ;
-(void)addOffScreenRegionWithStartLocation:(double)arg1 endLocation:(double)arg2 color:(id)arg3 aboveScreen:(BOOL)arg4 ;
-(void)drawInAxisRect:(CGRect)arg1 backgroundColor:(id)arg2 renderContext:(CGContextRef)arg3 ;
-(id)init;
@end

