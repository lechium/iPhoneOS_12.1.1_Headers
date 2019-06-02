/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUTextContainer;
@class NSString;

@interface MPUTextContainerContentSizeUpdater : NSObject {

	id<MPUTextContainer> _textContainer;
	NSString* _lastSeenPreferredContentSizeCategory;

}

@property (nonatomic,retain) NSString * lastSeenPreferredContentSizeCategory;              //@synthesize lastSeenPreferredContentSizeCategory=_lastSeenPreferredContentSizeCategory - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTextContainer> textContainer;                    //@synthesize textContainer=_textContainer - In the implementation block
-(void)_preferredContentSizeCategoryDidChange:(id)arg1 ;
-(void)setLastSeenPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSString *)lastSeenPreferredContentSizeCategory;
-(void)_updateTextStyleFonts;
-(void)ensureTextStyleFontsMatchPreferredTextStyleFonts;
-(id)init;
-(void)dealloc;
-(id<MPUTextContainer>)textContainer;
-(void)setTextContainer:(id<MPUTextContainer>)arg1 ;
@end

