/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {

	TSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(double)maxValue;
-(id)initWithMaxValue:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(BOOL)isIndeterminate;
@end

