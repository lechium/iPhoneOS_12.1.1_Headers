/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem {

	BOOL _shouldTintText;
	BOOL _showsCheckmark;
	BOOL _showsDisclosureIndicator;
	BOOL _shouldPreventSelection;
	NSString* _text;
	NSString* _detailText;

}

@property (setter=_setText:,nonatomic,copy) NSString * text;                                                  //@synthesize text=_text - In the implementation block
@property (assign,setter=_setShouldTintText:,nonatomic) BOOL shouldTintText;                                  //@synthesize shouldTintText=_shouldTintText - In the implementation block
@property (setter=_setDetailText:,nonatomic,copy) NSString * detailText;                                      //@synthesize detailText=_detailText - In the implementation block
@property (assign,setter=_setShowsCheckmark:,nonatomic) BOOL showsCheckmark;                                  //@synthesize showsCheckmark=_showsCheckmark - In the implementation block
@property (assign,setter=_setShowsDisclosureIndicator:,nonatomic) BOOL showsDisclosureIndicator;              //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (assign,setter=_setShouldPreventSelection:,nonatomic) BOOL shouldPreventSelection;                  //@synthesize shouldPreventSelection=_shouldPreventSelection - In the implementation block
-(BOOL)showsDisclosureIndicator;
-(void)_setShowsCheckmark:(BOOL)arg1 ;
-(void)_setShowsDisclosureIndicator:(BOOL)arg1 ;
-(void)_setShouldTintText:(BOOL)arg1 ;
-(void)_setShouldPreventSelection:(BOOL)arg1 ;
-(void)_setDetailText:(id)arg1 ;
-(BOOL)shouldTintText;
-(BOOL)showsCheckmark;
-(BOOL)shouldPreventSelection;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(NSString *)detailText;
@end

