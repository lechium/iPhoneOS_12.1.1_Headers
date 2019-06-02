/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIAlertControllerDescriptor : NSObject {

	BOOL _hasHeaderContentViewController;
	BOOL _hasTitle;
	BOOL _hasMessage;
	BOOL _hasContentViewController;
	BOOL _applicationIsFullscreen;
	long long _numberOfActions;
	UIEdgeInsets _containerViewSafeAreaInsets;

}

@property (assign) BOOL hasHeaderContentViewController;                   //@synthesize hasHeaderContentViewController=_hasHeaderContentViewController - In the implementation block
@property (assign) BOOL hasTitle;                                         //@synthesize hasTitle=_hasTitle - In the implementation block
@property (assign) BOOL hasMessage;                                       //@synthesize hasMessage=_hasMessage - In the implementation block
@property (assign) BOOL hasContentViewController;                         //@synthesize hasContentViewController=_hasContentViewController - In the implementation block
@property (assign) long long numberOfActions;                             //@synthesize numberOfActions=_numberOfActions - In the implementation block
@property (assign) BOOL applicationIsFullscreen;                          //@synthesize applicationIsFullscreen=_applicationIsFullscreen - In the implementation block
@property (assign) UIEdgeInsets containerViewSafeAreaInsets;              //@synthesize containerViewSafeAreaInsets=_containerViewSafeAreaInsets - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasHeaderContentViewController:(BOOL)arg1 ;
-(void)setHasTitle:(BOOL)arg1 ;
-(void)setHasMessage:(BOOL)arg1 ;
-(void)setHasContentViewController:(BOOL)arg1 ;
-(void)setNumberOfActions:(long long)arg1 ;
-(void)setContainerViewSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setApplicationIsFullscreen:(BOOL)arg1 ;
-(BOOL)hasMessage;
-(BOOL)hasTitle;
-(BOOL)hasContentViewController;
-(long long)numberOfActions;
-(BOOL)hasHeaderContentViewController;
-(BOOL)applicationIsFullscreen;
-(UIEdgeInsets)containerViewSafeAreaInsets;
@end

