/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView, UIImage, NSString;

@interface _UIDraggingImageComponent : NSObject <NSCopying> {

	BOOL _ignoresAccessibilityFilters;
	BOOL _hidesImage;
	UIView* _view;
	UIImage* _image;
	NSString* _key;
	CGRect _frame;

}

@property (nonatomic,readonly) UIView * view;                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                  //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) BOOL ignoresAccessibilityFilters;              //@synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters - In the implementation block
@property (nonatomic,readonly) BOOL hidesImage;                               //@synthesize hidesImage=_hidesImage - In the implementation block
-(id)description;
-(UIView *)view;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)frame;
-(id)initWithView:(id)arg1 ;
-(NSString *)key;
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 ignoreAccessibilityFilters:(BOOL)arg3 key:(id)arg4 ;
-(id)initHidingDragImage;
-(BOOL)ignoresAccessibilityFilters;
-(BOOL)hidesImage;
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 key:(id)arg3 ;
-(id)_initWithNoImageAndFrame:(CGRect)arg1 key:(id)arg2 ;
@end

