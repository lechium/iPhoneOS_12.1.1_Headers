/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont;

@interface _UIDocumentPickerCellFontManager : NSObject {

	UIFont* _titleFontForGridLayout;
	UIFont* _subtitleFontForGridLayout;
	UIFont* _titleFontForTableLayout;
	UIFont* _subtitleFontForTableLayout;

}

@property (nonatomic,retain) UIFont * titleFontForGridLayout;                  //@synthesize titleFontForGridLayout=_titleFontForGridLayout - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFontForGridLayout;               //@synthesize subtitleFontForGridLayout=_subtitleFontForGridLayout - In the implementation block
@property (nonatomic,retain) UIFont * titleFontForTableLayout;                 //@synthesize titleFontForTableLayout=_titleFontForTableLayout - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFontForTableLayout;              //@synthesize subtitleFontForTableLayout=_subtitleFontForTableLayout - In the implementation block
+(id)sharedFontManager;
-(void)cacheFonts;
-(void)setTitleFontForTableLayout:(UIFont *)arg1 ;
-(void)setSubtitleFontForTableLayout:(UIFont *)arg1 ;
-(void)setTitleFontForGridLayout:(UIFont *)arg1 ;
-(void)setSubtitleFontForGridLayout:(UIFont *)arg1 ;
-(UIFont *)titleFontForGridLayout;
-(UIFont *)subtitleFontForGridLayout;
-(UIFont *)titleFontForTableLayout;
-(UIFont *)subtitleFontForTableLayout;
-(id)init;
@end

