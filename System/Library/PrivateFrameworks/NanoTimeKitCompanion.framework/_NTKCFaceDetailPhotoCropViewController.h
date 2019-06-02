/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CAShapeLayer, NTKCCenteringScrollView, UIView, NTKDigitalTimeLabel, UIBarButtonItem, NTKCompanionCustomPhotosEditor, NTKFace, NTKDigitalTimeLabelStyle, NSString;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate> {

	CAShapeLayer* _reverseMask;
	NTKCCenteringScrollView* _scrollView;
	double _photoScale;
	CAShapeLayer* _mask;
	UIView* _timeContainer;
	NTKDigitalTimeLabel* _time;
	UIBarButtonItem* _deleteButton;
	UIBarButtonItem* _cancelButton;
	BOOL _cancelConfirmed;
	BOOL _deleteConfirmed;
	unsigned long long _index;
	NTKCompanionCustomPhotosEditor* _editor;
	NTKFace* _face;
	NTKDigitalTimeLabelStyle* _timeStyle;

}

@property (assign,nonatomic) unsigned long long index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;              //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                       //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabelStyle * timeStyle;                 //@synthesize timeStyle=_timeStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NTKFace *)face;
-(void)setFace:(NTKFace *)arg1 ;
-(void)_cancelPressed;
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(NTKCompanionCustomPhotosEditor *)editor;
-(id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 ;
-(NTKDigitalTimeLabelStyle *)timeStyle;
-(void)_deletePressed;
-(void)_donePressed;
-(void)dismissWithSaving:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setTimeStyle:(NTKDigitalTimeLabelStyle *)arg1 ;
@end
