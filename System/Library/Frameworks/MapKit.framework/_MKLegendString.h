/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString;

@interface _MKLegendString : CALayer {

	CTLineRef _line;
	double _baselineDistanceFromBottom;
	NSAttributedString* _string;

}

@property (nonatomic,retain) NSAttributedString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) double baselineDistanceFromBottom;              //@synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom - In the implementation block
-(double)baselineDistanceFromBottom;
-(void)setFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(NSAttributedString *)string;
-(void)sizeToFit;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setString:(NSAttributedString *)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end

