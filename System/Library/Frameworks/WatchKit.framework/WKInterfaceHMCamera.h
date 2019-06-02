/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@class UIView, CAContext;

@interface WKInterfaceHMCamera : WKInterfaceObject {

	UIView* _containerView;
	UIView* _cameraView;
	CAContext* _context;
	CGSize _containerViewSize;

}

@property (nonatomic,retain) UIView * containerView;                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * cameraView;                   //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) CAContext * context;                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGSize containerViewSize;              //@synthesize containerViewSize=_containerViewSize - In the implementation block
-(id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 ;
-(CGSize)containerViewSize;
-(void)setContainerViewSize:(CGSize)arg1 ;
-(void)updateContainerViewSize;
-(void)remoteSetWidth:(double)arg1 ;
-(void)remoteSetHeight:(double)arg1 ;
-(void)setCameraSource:(id)arg1 ;
-(void)setCameraView:(UIView *)arg1 ;
-(UIView *)cameraView;
-(void)setContext:(CAContext *)arg1 ;
-(CAContext *)context;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
@end

