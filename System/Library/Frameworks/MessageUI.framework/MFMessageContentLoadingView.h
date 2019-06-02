/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface MFMessageContentLoadingView : UIView {

	NSString* _loadingTitle;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _loadingLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                            //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * loadingLabel;                                                     //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (assign,getter=isLoadingIndicatorVisible,nonatomic) BOOL loadingIndicatorVisible; 
@property (nonatomic,copy) NSString * loadingTitle;                                                      //@synthesize loadingTitle=_loadingTitle - In the implementation block
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isLoadingIndicatorVisible;
-(NSString *)loadingTitle;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 ;
-(UILabel *)loadingLabel;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

