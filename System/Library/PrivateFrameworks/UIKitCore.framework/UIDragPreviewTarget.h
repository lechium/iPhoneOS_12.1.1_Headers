/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface UIDragPreviewTarget : NSObject <NSCopying> {

	UIView* _container;
	CGPoint _center;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) UIView * container;                       //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CGPoint center;                           //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
+(id)new;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)container;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(id)initWithContainer:(id)arg1 center:(CGPoint)arg2 transform:(CGAffineTransform)arg3 ;
-(id)initWithContainer:(id)arg1 center:(CGPoint)arg2 ;
@end
