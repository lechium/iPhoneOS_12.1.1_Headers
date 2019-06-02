/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface PSUITCCAccessController : PSListController {

	NSString* _serviceKey;
	NSString* _footer;
	NSString* _header;
	NSString* _explanation;

}

@property (nonatomic,copy) NSString * footer;                      //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * header;                      //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * explanation;                 //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,readonly) NSString * serviceKey;              //@synthesize serviceKey=_serviceKey - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(NSString *)serviceKey;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end
