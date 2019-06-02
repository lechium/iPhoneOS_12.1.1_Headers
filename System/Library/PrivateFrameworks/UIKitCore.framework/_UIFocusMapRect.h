/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusMapArea.h>

@protocol UICoordinateSpace;
@class NSString;

@interface _UIFocusMapRect : NSObject <_UIFocusMapArea> {

	id<UICoordinateSpace> _coordinateSpace;
	CGRect _frame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                              //@synthesize frame=_frame - In the implementation block
-(CGRect)frame;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)intersectsRect:(CGRect)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(id)intersectionWithRegion:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 coordinateSpace:(id)arg2 ;
@end

