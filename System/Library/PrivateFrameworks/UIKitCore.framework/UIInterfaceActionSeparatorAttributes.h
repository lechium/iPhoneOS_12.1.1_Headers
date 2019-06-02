/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying> {

	NSArray* _filters;
	UIColor* _backgroundColor;
	double _opacity;

}

@property (nonatomic,retain) NSArray * filters;                      //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double opacity;                         //@synthesize opacity=_opacity - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)newSeparatorView;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)_hasNonClearBackgroundColor;
@end
