/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class NSString;

@interface HUPendingAccessoriesGridViewController : HUServiceGridViewController <HFItemManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
@end
