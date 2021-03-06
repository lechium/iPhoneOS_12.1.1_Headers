/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>

@protocol ADDimmerViewDelegate;
@class ADTapGestureRecognizer;

@interface ADDimmerView : UIView {

	id<ADDimmerViewDelegate> _delegate;
	BOOL _dimmed;
	ADTapGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) ADTapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                             //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic,__weak) id<ADDimmerViewDelegate> delegate; 
-(void)removeADTapGestureRecognizer;
-(void)addADTapGestureRecognizer;
-(BOOL)dimmed;
-(void)setDimmed:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ADDimmerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<ADDimmerViewDelegate>)delegate;
-(void)setGestureRecognizer:(ADTapGestureRecognizer *)arg1 ;
-(ADTapGestureRecognizer *)gestureRecognizer;
-(BOOL)enabled;
-(void)_tapRecognized:(id)arg1 ;
@end

