/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/CRKEventResponding.h>

@class SFAudioPlaybackCardSection, NSString;

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>

@property (nonatomic,retain) SFAudioPlaybackCardSection * cardSection; 
@property (nonatomic,retain) UIView*<SearchUICardSectionViewUpdatable> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2 ;
@end
