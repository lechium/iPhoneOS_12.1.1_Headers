/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol DACameraSensorAnomalyTargetViewDelegate;
@class UILabel, UIView, UIButton, CUShutterButton;

@interface DACameraSensorAnomalyTargetView : UIView {

	id<DACameraSensorAnomalyTargetViewDelegate> _delegate;
	UILabel* _viewfinderInstruction;
	UIView* _viewfinderOutsideRegionTop;
	UIView* _viewfinderOutsideRegionBottom;
	UIButton* _cancelButton;
	CUShutterButton* _shutterButton;
	CGSize _shutterButtonIntrinsicContentSize;

}

@property (nonatomic,retain) UILabel * viewfinderInstruction;                                          //@synthesize viewfinderInstruction=_viewfinderInstruction - In the implementation block
@property (nonatomic,retain) UIView * viewfinderOutsideRegionTop;                                      //@synthesize viewfinderOutsideRegionTop=_viewfinderOutsideRegionTop - In the implementation block
@property (nonatomic,retain) UIView * viewfinderOutsideRegionBottom;                                   //@synthesize viewfinderOutsideRegionBottom=_viewfinderOutsideRegionBottom - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) CUShutterButton * shutterButton;                                          //@synthesize shutterButton=_shutterButton - In the implementation block
@property (assign,nonatomic) CGSize shutterButtonIntrinsicContentSize;                                 //@synthesize shutterButtonIntrinsicContentSize=_shutterButtonIntrinsicContentSize - In the implementation block
@property (assign,nonatomic,__weak) id<DACameraSensorAnomalyTargetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)cancelTapped:(id)arg1 ;
-(CUShutterButton *)shutterButton;
-(void)setShutterButton:(CUShutterButton *)arg1 ;
-(UILabel *)viewfinderInstruction;
-(void)setViewfinderInstruction:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 color:(id)arg2 thickness:(double)arg3 instructionText:(id)arg4 ;
-(void)takePicture:(id)arg1 ;
-(UIView *)viewfinderOutsideRegionTop;
-(UIView *)viewfinderOutsideRegionBottom;
-(CGSize)shutterButtonIntrinsicContentSize;
-(void)setViewfinderOutsideRegionTop:(UIView *)arg1 ;
-(void)setViewfinderOutsideRegionBottom:(UIView *)arg1 ;
-(void)setShutterButtonIntrinsicContentSize:(CGSize)arg1 ;
-(void)setDelegate:(id<DACameraSensorAnomalyTargetViewDelegate>)arg1 ;
-(id<DACameraSensorAnomalyTargetViewDelegate>)delegate;
-(void)updateConstraints;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
@end

