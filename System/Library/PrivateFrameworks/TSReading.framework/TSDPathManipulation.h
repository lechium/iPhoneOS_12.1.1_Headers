/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDPathManipulation : NSObject {

	TSDPathManipulation* mPrecedingManipulation;

}
-(CGPathRef)manipulatePath:(CGPathRef)arg1 withLineWidth:(double)arg2 ;
-(BOOL)canDecomposeRectIntoParts;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingManipulation:(id)arg4 ;
-(void)dealloc;
@end

