/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSNumber;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {

	long long _style;
	BOOL _legacy;
	long long _legibilityStyle;
	UIColor* _foregroundColor;
	NSNumber* _overrideHeight;
	double _foregroundAlpha;

}

@property (nonatomic,retain,readonly) NSNumber * overrideHeight;              //@synthesize overrideHeight=_overrideHeight - In the implementation block
@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) BOOL legacy;                   //@synthesize legacy=_legacy - In the implementation block
@property (nonatomic,readonly) long long legibilityStyle;                     //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,retain,readonly) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) double foregroundAlpha;                        //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isTranslucent;
-(BOOL)isDoubleHeight;
-(long long)legibilityStyle;
-(UIColor *)foregroundColor;
-(double)foregroundAlpha;
-(NSNumber *)overrideHeight;
-(BOOL)isLegacy;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 overrideHeight:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5 overrideHeight:(id)arg6 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5 ;
@end

