/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@class UIImageView, UIView, UILabel, PKPaymentHeroImageController, PKPaymentSetupHeroView, PKPaymentSetupInitialCardEducationIconsView, PKMobileAssetManager, PKPaymentPass, AVPlayerLayer, AVPlayer, AVPlayerItem, NSString;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate> {

	UIImageView* _heroPhone;
	UIView* _heroPhoneBackground;
	UIImageView* _passSnapshot;
	UILabel* _instructionLabel;
	PKPaymentHeroImageController* _heroImageController;
	PKPaymentSetupHeroView* _heroView;
	PKPaymentSetupInitialCardEducationIconsView* _iconsView;
	PKMobileAssetManager* _mobileAssetManager;
	PKPaymentPass* _paymentPass;
	unsigned long long _educationContext;
	BOOL _isFaceIDDevice;
	BOOL _isPad;
	double _maxHeight;
	AVPlayerLayer* _video;
	UIView* _videoBoundingView;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	BOOL _playerStarted;
	BOOL _invalidated;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetBackgroundColorPad;
+(id)assetBackgroundColor;
+(BOOL)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3 ;
-(void)startPlayingVideo;
-(void)_performAddToWatchFlow;
-(void)performContinue;
-(void)didFinishPlaying;
-(void)_removePlayerItem;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

