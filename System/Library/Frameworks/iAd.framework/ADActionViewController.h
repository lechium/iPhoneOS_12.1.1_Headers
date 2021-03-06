/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ADActionViewControllerInterface.h>

@class ADAdSpace, NSString;

@interface ADActionViewController : UIViewController <ADActionViewControllerInterface> {

	ADAdSpace* _adSpace;
	BOOL _readyForPresentation;

}

@property (assign,nonatomic,__weak) ADAdSpace * adSpace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL readyForPresentation; 
+(void)requestActionViewControllerForAdSpace:(id)arg1 ;
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
-(ADAdSpace *)adSpace;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(void)setReadyForPresentation:(BOOL)arg1 ;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)loadView;
@end

