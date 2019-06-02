/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVisiblePercentageProviding.h>
#import <libobjc.A.dylib/SVVisiblePercentageReporting.h>

@class NSString;

@interface SVVisiblePercentageProvider : NSObject <SVVisiblePercentageProviding, SVVisiblePercentageReporting> {

	double _visiblePercentage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double visiblePercentage;              //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
-(double)visiblePercentageOfObject:(id)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(id)initWithVisiblePercentage:(double)arg1 ;
@end
