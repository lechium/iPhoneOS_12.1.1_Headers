/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/CKDetailsHeaderFooterView.h>

@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;
@class NSString, UIColor, UIImageView, UITextView, NSLayoutConstraint;

@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {

	BOOL _logoHidden;
	NSString* _titleText;
	NSString* _buttonText;
	id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> _delegate;
	UIColor* _downloadButtonTextColor;
	UIColor* _titleTextColor;
	UIImageView* _iCloudImageView;
	UITextView* _titleTextView;
	UITextView* _buttonTextView;
	NSLayoutConstraint* _titleTextTopToLogoConstraint;
	NSLayoutConstraint* _titleTextTopToViewConstraint;

}

@property (nonatomic,retain) UIImageView * iCloudImageView;                                                         //@synthesize iCloudImageView=_iCloudImageView - In the implementation block
@property (nonatomic,retain) UITextView * titleTextView;                                                            //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) UITextView * buttonTextView;                                                           //@synthesize buttonTextView=_buttonTextView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTextTopToLogoConstraint;                                     //@synthesize titleTextTopToLogoConstraint=_titleTextTopToLogoConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTextTopToViewConstraint;                                     //@synthesize titleTextTopToViewConstraint=_titleTextTopToViewConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                                   //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * downloadButtonTextColor;                                                     //@synthesize downloadButtonTextColor=_downloadButtonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                                                              //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (assign,nonatomic) BOOL logoHidden;                                                                       //@synthesize logoHidden=_logoHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setButtonText:(NSString *)arg1 ;
-(NSString *)buttonText;
-(NSString *)titleText;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)setDownloadButtonTextColor:(UIColor *)arg1 ;
-(void)setLogoHidden:(BOOL)arg1 ;
-(void)setTitleTextTopToLogoConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleTextTopToViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleTextTopToLogoConstraint;
-(NSLayoutConstraint *)titleTextTopToViewConstraint;
-(void)handleUserTap:(id)arg1 ;
-(UITextView *)titleTextView;
-(UITextView *)buttonTextView;
-(UIImageView *)iCloudImageView;
-(UIColor *)downloadButtonTextColor;
-(BOOL)logoHidden;
-(void)setICloudImageView:(UIImageView *)arg1 ;
-(void)setTitleTextView:(UITextView *)arg1 ;
-(void)setButtonTextView:(UITextView *)arg1 ;
-(void)setDelegate:(id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate>)arg1 ;
-(id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate>)delegate;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
@end

